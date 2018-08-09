#include<iostream>
#include<string>
using namespace std;


void reverseStr(string& str)
{
	int n = str.length();

	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

int main()
{
	string str = "Group 1 Completed.";
	reverseStr(str);
	cout << str;
	return 0;
}