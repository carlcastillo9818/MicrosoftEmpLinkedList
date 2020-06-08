#include "Node.h"
using namespace std;

/* This function is a constructor for the Node class.
It initializes the data members values when an object
of the class is created.  It contains no parameters and it 
has no type. */
Node::Node()
{
	employee_num = 0;
	salary = 0.0;
	dependent_num = 0;
	next = NULL;
}


/* This function sets the employee number for the current
employee.  It is a void type function and it contains one
int parameter which is passed by const reference.*/
void Node::set_employee_num(const int &e_num)
{
	employee_num = e_num;
}


/* This function sets the salary for the current
employee.  It is a void type function and it contains one
float parameter which is passed by const reference.*/
void Node::set_salary(const float &sal)
{
	salary = sal;
}


/* This function sets the number of dependents for the current
employee.  It is a void type function and it contains one
short int parameter which is passed by const reference.*/
void Node::set_dependent_num(const short int &d_num)
{
	dependent_num = d_num;
}


/* This function sets the Node pointer.  It is a void 
type function and it contains one Node pointer parameter which is passed
by const reference.*/
void Node::set_next_pointer(Node * n)
{
	next = n;
}


/* This function sets the employee information by asking for their
name, salary, and number of dependents.  All the setter functions are
called from this function.  This function has no parameters and it is
a void type.*/
void Node::set_all_info()
{
	int emp_num;
	float emp_sal;
	short int emp_deps;
	
	cout << "Enter the employee\'s number : "; cin >> emp_num;
	cout << "Enter the employee\'s salary : "; cin >> emp_sal;
	cout << "Enter the number of dependents of the employee : "; cin >> emp_deps;
	
	set_employee_num(emp_num);
	set_salary(emp_sal);
	set_dependent_num(emp_deps);
	set_next_pointer(NULL);
}


/* This function returns the employees number for an employee.
It is a int type function that is const and it contains
no parameters.*/
int Node::get_employee_num() const
{
	return employee_num;
}


/* This function returns the salary for an employee.  
It is a float type function that is const and it contains no 
parameters.*/
float Node::get_salary() const
{
	return salary;
}


/* This function returns the number of dependents for an employee.
It is a short int type function that is const and it contains
no parameters.*/
short int Node::get_dependent_num() const
{
	return dependent_num;
}


/* This function returns the next pointer that is in the
current node.  It is a pointer to a Node type function that is const and it contains
no parameters.*/
Node *Node::get_next_pointer() const
{
	return next;
}


/* This function prints out the employee number, salary, and number of 
dependents in a Node object.  It is a void type function that is const and
it has no parameters.*/
void Node::get_all_info() const
{
	cout << get_employee_num() << "\t\t";
	cout << get_salary() << "\t";
	cout << get_dependent_num() << "\t" << endl;
}


/* This function is a destructor for the Node class.
It destroys the Node object at the end of the program */
Node::~Node()
{
	
}
