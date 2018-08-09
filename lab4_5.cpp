#include<iostream>
using namespace std;
class two;
class one
{
private:
	int data;
public:
	one()
	{
		data = 10;
	}
	void display()
	{
		cout << "\nValue of Num 1: " << data;
	}
	int getnum1()
	{
		return data;
	}

	friend void swap(one&, two&);
};
class two
{
private:
	int num;
public:
	two()
	{
		num = 20;
	}
	void display	()
	{
		cout << "\nValue of Num 2: " << num;
	}
	int getnum2()
	{
		return num;
	}
	friend void swap(one&, two&);
};
void swap(one &no1, two &no2)
{
	int no3;
	no3 = no1.data;
	no1.data = no2.num;
	no2.num = no3;
}

int main()
{
	one b;
	two d;

	int n1 = b.getnum1();
	int n2 = d.getnum2();
	cout << "Values before swap: ";
	b.display();
	d.display();
	cout << "\nValues after swap: ";
	swap(b, d);
	b.display();
	d.display();
	return 0;
}