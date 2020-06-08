/* 
Name : Carlos Castillo
Class : CIS 260
Date : 2/28/20
Due Date : 3/10/20
Project Name : Microsoft Employee Linked List
Program Explanation : This program features
a menu that offers the user several options
to add an employee to the company list, remove
an employee, display all the current employees,
and clear out the list of employees.  
*/
#include <iostream>
#include "LinkedList.h"
using namespace std;

void list_menu(LinkedList &);

int main()
{
	LinkedList company_list;
	
	list_menu(company_list);
	return 0;
}

/* This function displays a menu for the user to interact with
the employee list.  This function is a void type because it
returns no values.  It contains one parameter which is a 
LinkedList type object that is passed by reference*/
void list_menu(LinkedList &obj)
{
	char choice;
	
	do
	{
		cout << "\t\tMAIN MENU\t\t" << endl;
		cout << "\t1. Insert New Employee" << endl;
		cout << "\t2. Remove Employee" << endl;
		cout << "\t3. Display All Employees" << endl;
		cout << "\t4. Clear All Employees" << endl;
		cout << "\t5. Quit" << endl;
		
		cout << "Select an option 1-5 above : ";cin >> choice;
		choice = toupper(choice);
		
		switch(choice)
		{
			case '1':
				system("cls");
				obj.Insert_Node();
				break;
			case '2':
				system("cls");
				obj.Remove_Node();
				cout << "Press any key to go back to the menu " << endl;
				cin.ignore();
				cin.get();
				break;
			case '3':
				system("cls");
				cout << "EMPLOYEE #\tSALARY\tDEPENDENTS\t\n" << endl;
				obj.Display_List();
				cout << "Press any key to go back to the menu " << endl;
				cin.ignore();
				cin.get();
				break;
			case '4':
				system("cls");
				obj.Delete_List();
				cout << "Press any key to go back to the menu " << endl;
				cin.ignore();
				cin.get();
				break;
			case '5':
				cout << "Thank you for using my program! Have a nice day!" << endl;
				cin.ignore();
				cin.get();
				exit(0);
				break;
			default:
				break;
		}
		
		system("cls");
	}while(choice != '5' && choice != 'Q');
}
