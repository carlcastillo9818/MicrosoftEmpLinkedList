/* LinkedList Class Specification File */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"

class LinkedList
{
	private:
		Node *head; 
	public:
		LinkedList();
		void Insert_Node();
		void Remove_Node();
		void Display_List() const;
		void Print_List(Node *) const;
		void Delete_List();
		void Clear_List(Node *&);
		~LinkedList();
};
#endif
