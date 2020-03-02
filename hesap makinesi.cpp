#include <iostream>
using namespace std;
int main()
{
	int i,resultf=1;
	char function;
	double num1, num2,result;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Choose the function (+,-,*,/,!,^,|(absolute value),%): ";
	cin >> function;
	if (function == '!')
	{
		for (i = 1; i <= num1; i++)
		{
			resultf = i * resultf;
		}
		cout << "Result: " << resultf << endl;
		return 0;

	}
	else if (function == '|')
	{
		if (num1 < 0)
		{
			result=num1 * -1;
		}
		else 
		{
			result = num1;
		}
		cout << "Result: " << result;
		return 0;
	}
	cout << "Enter the second number: ";
	cin >> num2;
	 if (function == '+')
	{
		result = num1 + num2;
		cout << "Result: " << result << endl;
	}
	else if (function == '-')
	{
		result = num1 - num2;
		cout << "Result: " << result << endl;
	}
	else if (function == '*')
	{
		result = num1 * num2;
		cout << "Result: " << result << endl;
	}
	else if (function == '/')
	{
		result = num1 / num2;
		cout << "Result: " << result << endl;
	}
	else if (function == '^')
	 {
		 int x = num1;
		 for (i = 1; i < num2; i++)
		 {

			 x = num1 * x;
		 }
		 cout << "Result: " << x;
	 }
	else if (function == '%')
	 {
		 int c = num1;
		 int d = num2;
		 result = c % d;
		 cout << "Result: " << result;
	 }
	else
	{
		cout << "You chose wrong function.";
	}



}
