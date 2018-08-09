#include<iostream>
using namespace std;

int main()
{
	int i, count = 0;
	char temp;
	char str[] = "Group 1 Completed";
	
	for (int i = 0; str[i] != '\0'; i++){
		count++;
	}

	for (i = 0; i <= count / 2; i++){
		temp = str[i];
		int j = count - i - 1;
		str[i] = str[j];
		str[j] = temp;
	}
	cout << str << endl;
}