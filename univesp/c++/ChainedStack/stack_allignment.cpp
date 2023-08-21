/*      This is a code example from Univesp - COM-160 discipline      */

#include "stack.h"
#include <iostream>

using namespace std;

int main() {
  //      Initialize objects
  ItemType character;
  Stack stack;  
  ItemType stackItem;
  
  //      Ask to insert a string
  cout << "Insert a string: " << endl;
  cin.get(character);
  //      Will verify if have any '[', '{' or '(' open but not closed
  bool isMatched = true;  
  while (isMatched && character != '\n')
    {
      if (character == '{' || character== '(' || character==  '['){  // any entry of '[', '{' or '(' opened
	stack.push(character);      //  Stack a character
      }
      if(character == '}' || character== ')' || character==  ']'){   // any entry of ']', '}' or ')' closed
	if (stack.isEmpty()) {        //  Check if stack is empty
	  isMatched = false;
	} else {
	  stackItem = stack.pop();      //  Pop a character
	  isMatched = (   
		       (character == '}' && stackItem== '{')
		       || (character== ')' && stackItem == '(')
		       || (character== ']' && stackItem == '[')
		       );       //  Comparing characters inside the stack
	}
      }
      cin.get(character);
    }
      

  if (isMatched && stack.isEmpty() ) {
    cout << "Well formed. \n";
  } else {
    cout << "Bad formed \n";
  }
}

