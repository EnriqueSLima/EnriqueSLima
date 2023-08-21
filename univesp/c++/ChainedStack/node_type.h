/*      This is a code example from Univesp - COM-160 discipline      */

typedef char ItemType;      /*  Defining a item type as a char  */

struct NodeType             /*  Structure for hold information a adress of next element */
{
  ItemType info;            //  To alloc the information
  NodeType* next;           //  To adress the next element of stack
};

