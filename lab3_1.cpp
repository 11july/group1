/*
Lab 3 Assignment 1: Assume the following class diagram and write the skeleton of the program.

Class Diagram:

----------------Student----------------------
-iRoll:int                                  -
-cName:char[10]                             -
-fPercentage: float                         -
---------------------------------------------
+setStudent(int,char[],float):void          -
+ getStudent(void):void                     -
---------------------------------------------
*/

#include <iostream> 
using namespace std;
class Student{
	int iRoll;
	char cName[30];
	float fPercentage;
public:
	void setStudent(int isetRoll, char csetName[], float fsetPercentage) 
	{
	}
	void getStudent(void) {
	}
};
void main()
{
	Student stud[10];
	char cStudName[30];
	int iStudRoll;
	float fStudPercentage;
	for (int iCounter = 0; iCounter<10; iCounter++) {
		//Accept data for 10 students 
	}
	cout << "The students Scoring First class are " << endl;
	for (int iIndex = 0; iIndex<10; iIndex++) {
		//Display data of the students scoring more than 60 % only 
		cout << "***************************************";
	}
}
