#include<iostream>
using namespace std;
class Employee
{
	long empcode;
	double salary;
	char *name;

public:Employee(long empcode, double salary, char *str)
{
	this->empcode = empcode;
	this->salary = salary;
	this->name = str;
}
	   long getEmpcode()
	   {
		   return empcode;
	   }
	   double getsalary()
	   {
		   return salary;
	   }
	   char * getName()
	   {
		   return name;
	   }

	   void displayDetails()
	   {
		   cout << "Employee Code : " << getEmpcode() << "\nSalary : " << getsalary() << "\nName : " << getName();

	   }
	   ~Employee()
	   {

	   }
};
int main()
{
	Employee e(101, 20000, "Rashmi");

	e.displayDetails();

	return 0;
}