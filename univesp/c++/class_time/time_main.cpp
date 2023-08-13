#include <iostream>
#include "time.h"    
using namespace std;

int main() {
  /*
    In that first object, we give all parameters. No default value was used.
   */
  
  Time t1(23, 59, 59);   
  t1.print();       // 23:59:59
  t1.setHour(12);
  t1.setMinute(30);
  t1.setSecond(15);
  
  t1.print();       // 12:30:15
  cout << "Hour:    " << t1.getHour()   << endl;
  cout << "Minute:  " << t1.getMinute() << endl;
  cout << "Second:  " << t1.getSecond() << endl;

  /*
    In that second instance, we used a defaut value for minutes and seconds.
   */
  Time t2(12); 
  t2.print();  // 12:00:00

  Time t3(23, 59, 58);
  t3.print();  // 23:59:58
  t3.nextSecond();
  t3.print();  // 23:59:59
  t3.nextSecond();
  t3.print();  // 00:00:00
}
