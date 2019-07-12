#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

//Addition Function
void add(int a)
{
	//Input Desired Variables
	int add1, add2, sum;
	cout << "Please Enter TWO Valid Variables." << endl;
	cout << "X: "; cin >> add1;
	cout << "Y: "; cin >> add2;
	cout << endl << endl;

	cout << "COMPUTING..." << endl;
	cout << endl << endl;

	//Computation Formula
	sum = add1 + add2;

	//Addition Output
	cout << "RESULT: " << sum << endl;
}

//Subtraction Function
void sub(int b)
{
	//Input Desired Variables
	int sub1, sub2, dif;
	cout << "Please Enter TWO Valid Variables." << endl;
	cout << "X: "; cin >> sub1;
	cout << "Y: "; cin >> sub2;
	cout << endl << endl;

	cout << "COMPUTING..." << endl;
	cout << endl << endl;

	//Computation Formula
	dif = sub1 - sub2;

	//Subtraction Output
	cout << "RESULT: " << dif << endl;
}

//Multiplication Function
void mul(int c)
{
	//Input Desired Variables
	int mul1, mul2, pro;
	cout << "Please Enter TWO Valid Variables." << endl;
	cout << "X: "; cin >> mul1;
	cout << "Y: "; cin >> mul2;
	cout << endl << endl;

	cout << "COMPUTING..." << endl;
	cout << endl << endl;

	//Computation Formula
	pro = mul1 * mul2;

	//Multiplication Output
	cout << "RESULT: " << pro << endl;
}

//Division Function
void div(int d)
{
	//Input Desired Variables
	cout << setprecision(2) << fixed;
	int div1, div2;
	float qou;
	cout << "Please Enter TWO Valid Variables." << endl;
	cout << "X: "; cin >> div1;
	cout << "Y: "; cin >> div2;
	cout << endl << endl;

	cout << "COMPUTING..." << endl;
	cout << endl << endl;

	//Computation Formula
	qou = div1 / div2;

	//Division Output
	cout << "RESULT: " << qou << endl;
}

//Modulus Function
void mod(int e)
{
	//Input Desired Variables
	int mod1, mod2, res;
	cout << "Please Enter TWO Valid Variables." << endl;
	cout << "X: "; cin >> mod1;
	cout << "Y: "; cin >> mod2;
	cout << endl << endl;

	cout << "COMPUTING..." << endl;
	cout << endl << endl;

	//Computation Formula
	res = mod1 % mod2;

	//Modulus Output
	cout << "RESULT: " << res << endl;
}



//Main Function
int main()
{
	//Looping Statement
	bool cont = true;
	do
	{
	//Welcoming Remarks
	cout << "*** CALCULATOR ***" << endl;
	cout << endl << endl;

	//Instruction
	cout << "Please Input a Valid Choice of Integer in EACH Question." << endl;
	cout << endl;

	cout << "[1] Addition" << endl;
	cout << "[2] Subtraction" << endl;
	cout << "[3] Multiply" << endl;
	cout << "[4] Divide" << endl;
	cout << "[5] Modulus" << endl;
	cout << endl;
	
	//Variable Input
	int choice;
	cout << "Enter Choice of Operation: "; cin >> choice;
	cout << endl << endl;

	cout << "FINDING OPERATION FILE..." << endl;
	cout << endl << endl;

	//Categorization of Operation
	switch (choice)
	{
	case 1:
		add (choice);
		break;

	case 2:
		sub (choice);
		break;

	case 3:
		mul (choice);
		break;

	case 4:
		div (choice);
		break;

	case 5:
		mod (choice);
		break;

	//If Invalid Operation Chosen
	default:
		cout << "INVALID OPERATION!!!" << endl;
		break;
	}
	cout << "-----------------------------------------------------------------" << endl;
	//Continuation
	cout << endl << endl;
	char ans;
	cout << "Do you wish to CONTINUE? [Y]es / [N]o" << endl;
	cout << "Answer: "; cin >> ans;
	cout << endl;

	//Categorization of Continuation
	switch (ans)
	{
	case 'y':
	case 'Y':
		break;

	case 'N':
	case 'n':
		cont = false;
		break;

	default:
		cout << "You Have Entered an INVALID ANSWER!!!" << endl;
		cont = false;
		break;
	}
	}while (cont);


	//Ending Remarks
	cout << endl << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "THANK YOU FOR YOUR PARTICIPATION!!!" << endl;


	system ("pause");
	getch ();
	return 0;
}