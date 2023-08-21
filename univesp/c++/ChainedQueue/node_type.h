/*      This is a code example from Univesp - COM-160 discipline      */

#ifndef NODETYPE_H   // Include TIME_H if is not defined
#define NODETYPE_H   // Define TIME_H in the first include
		 // For not include same block two times.
typedef char ItemType;

struct NodeType      // Struct a node type object
{
  ItemType info;     // Information allocated
  NodeType* next;    // Pointer to the next element
};

#endif
