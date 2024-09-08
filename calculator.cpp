#include<iostream>
using namespace std;
void display_answer(int result)

{
	cout << "answer = " << result << endl;
}
int main()
{
	int  num1,num2,result;
	char Operator;
	string choice;
	do {
		cout << "Enter the First Number : " << endl;
		cin >> num1;
		cout << "Enter the Operator : " << endl;
		cin >> Operator;
		cout << "Enter the Second Number : " << endl;
		cin >> num2;
	
		switch (Operator)
		{
		case '+' :
			result=num1 + num2;
			display_answer(result);
			break;
		case '-' :
			result = num1 - num2;
			display_answer(result);
			break;

		case '*' :
			result = num1 * num2;
			display_answer(result);
			break;
		case '/':
			result = num1 / num2;
			display_answer(result);
			break;

		}
		cout << "Press yes for Continue " << endl;
		cin >> choice;
	} while (choice == "yes");

}