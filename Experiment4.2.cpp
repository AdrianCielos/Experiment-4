#include <iostream>
#include <conio.h>
using namespace std;

//Bubble Sort Function
void bubble (int bub)
{
	//Desired Variable Input
	int x, arr[100];
	cout << "Chosen Integers: ";
	
	for (x=0; x < bub; x++)
	{
		cin >> arr[x];
	}
	cout << endl << endl;


	cout << "Bubble Sorting..." << endl;
	cout << endl << endl;

	//Bubble Sort Arithmetic
	int i, j;
	for (i=0; i < bub; i++)
	{
		for (j=0; j< bub-i-1; j++)
		{
			if (arr[j] > arr [j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	//Displaying Output
	cout << "Displaying Output:" << endl;
	int y;
	for (y=0; y < bub; y++)
	{
		cout << arr[y] << " ";
		
	}

	cout << endl << endl;
}


int main ()
{
	//Welcoming Remarks
	cout << "*** BUBBLE SORTING ***" << endl;
	cout << endl << endl;

	//Looping Process
	bool cont = true;
	do
	{
	//Instruction
	cout << "Please Enter Valid Input for EACH Question." << endl;
	cout << endl;

	//Array Size Input
	int z;
	cout << "Please Enter Array Size: "; cin >> z;
	
	//Function Declaration
	bubble (z);
	

	//Continuation Input
	char a;
	cout << "Do you want to proceed? [Y]es / [N]o" << endl;
	cout << "Answer: "; cin >> a;
	cout << endl;
	cout << "--------------------------------------------------------" << endl;

	//Switch Categorization of Answer, if to proceed or not
	switch (a)
	{
	case 'Y':
	case 'y':
		cont = true;
		break;
	case 'N':
	case 'n':
		cont = false;
		break;
	//If invalid answer was entered
	default:
		cout << "INVALID ANSWER!!!" << endl;
		cont = false;
		break;
	}
	
	}while(cont);

	//Ending Remarks
	cout << "THANK YOU FOR YOUR PARTICIPATION!!!" << endl;
	system ("pause");
	getch ();
	return 0;
}
