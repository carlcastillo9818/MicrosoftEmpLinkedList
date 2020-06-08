#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node
{
	private:
		int employee_num;
		float salary;
		short int dependent_num;
		Node *next;
	public:
		Node();
		void set_employee_num(const int &);
		void set_salary(const float &);
		void set_dependent_num(const short int &);
		void set_next_pointer(Node *);
		void set_all_info();
		int get_employee_num() const;
		float get_salary() const;
		short int get_dependent_num() const;
		Node *get_next_pointer() const;
		void get_all_info() const;
		~Node();			
};
#endif
