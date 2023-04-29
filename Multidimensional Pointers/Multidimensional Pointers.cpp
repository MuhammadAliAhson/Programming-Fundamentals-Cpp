#include<iostream>
#include"../Lab-03/Header.h"

using namespace std;

int main()
{
	int size;

	cout << "Enter the lenht: ";
	cin >> size;

	
	int* arr = new int [size];


	for (int i = 0; i < size; i++)
	{
		cout << "Array[" << i + 1 << "] :";
		cin >> arr[i];

		while (arr[i] < 0 || arr[i]==arr[i-1])
		{
			if (arr[i] < 0 || arr[i]==arr[i-1])
			{
				cout << endl << "Invalid input" << endl;
				cout << "Array[" << i + 1 << "] :";
				cin >> arr[i];
				cout << endl;
			}
		}

	}




	for (int i = 0; i < size; i++)
	{
		cout << "Array[" << i + 1 << "] :";
		cout << arr[i] << endl;
	}


	int* ptrarray = spl(arr, size);

	for (int i = 0; i < size+1; i++)
	{
		cout << "Array[" << i + 1 << "] :";
		cout << ptrarray[i] << endl;
	}



	delete[] arr;
	arr = NULL;

	return 0;
}