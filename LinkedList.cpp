/* LinkedList Class Implementation File */
#include "LinkedList.h"
using namespace std;

/* This function is a constructor for the LinkedList class.
It initializes the head to NULL when an object
of the class is created.  It contains no parameters.*/
LinkedList::LinkedList()
{
	head = NULL;
}


/* This function inserts a node into the beginning of the
linked list.  It is a void function with no parameters. */
void LinkedList::Insert_Node()
{
	Node *ptr = new Node();
	ptr->set_all_info();

	if(head == NULL)
		head = ptr;
	else
	{
		ptr->set_next_pointer(head);
		head = ptr;
	}
}


/* This function removes the last node in the linked list.  If the 
list is empty then no removal is performed.  Otherwise,
it traverses to the last node in the list then deletes it.  It is a void 
function with no parameters. */
void LinkedList::Remove_Node()
{
	Node *curr = head;
	Node *prev = head;
	
	if(head == NULL)
		cout << "There is nothing to remove!" << endl;
	else
	{	
		if(head->get_next_pointer() == NULL) 
		{
			delete head;
			head = NULL;
			cout << "Removal was successful!" << endl;
		}
		else
		{
			while(curr->get_next_pointer() != NULL)
			{
				prev = curr;
				curr = curr->get_next_pointer();
			}
			
			prev->set_next_pointer(curr->get_next_pointer());
			delete curr;
			curr = NULL;
			cout << "Removal was successful!" << endl;
		}
	}
}


/* This function displays the linked list contents with the help of
a subfunction.  It passes the list head pointer as an argument to
the print subfunction.  This function is a const void function with no 
parameters. */
void LinkedList::Display_List() const
{
	if(head != NULL)
		Print_List(head);
	else
		cout << "The list is empty!" << endl;
}


/* This function prints out each employees number, salaries, and
the number of dependents they have.  It uses recursion to
move from one node to the next node until it reaches
the end.  This function is a const void function with no 
parameters. */
void LinkedList::Print_List(Node *ptr) const
{
	if(ptr == NULL)
	{
		return;
	}
	else
	{
		ptr->get_all_info();
		Print_List(ptr->get_next_pointer());
	}
}


/* This function clears the whole list with the help of the 
subfunction.  It calls the subfunction if the head is not empty to
clear the linked list. This function is a void function with no 
parameters.*/
void LinkedList::Delete_List()
{
	if(head == NULL)
		cout << "Unable to clear the list! The list is already empty!" << endl;
	else
	{
		Clear_List(head);
		cout << "Successfully cleared the entire list!" << endl;

	}
}


/* This function traverses through the linked list if it is
not empty. It deletes each node from the linked list recursively and
it continues until the list is NULL. This function is a void function
with no parameters.*/
void LinkedList::Clear_List(Node *&hd)
{	
	if(hd == NULL)
	{
		return;
	}
	else
	{
		hd = hd->get_next_pointer();
		Clear_List(hd);
		delete hd;
		hd = NULL;
	}
}


/* This function is a destructor for the LinkedList class.
It destroys all the data at the end of the program */
LinkedList::~LinkedList()
{
}
