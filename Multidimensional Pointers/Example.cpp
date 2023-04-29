#include<iostream>
#include"../Lab-03/Header.h"

using namespace std;

int main()
{
	int row = 3, col = 5;

	char** arr = word_Sentences(row,col);




	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			cout << "Array[" << i + 1 << "][" << j + 1 << "] :";
			cout<< arr[i][j]<<endl;

			if (i == 2 && j >= 2)
				break;
		}


	}



	for (int i = 0; i < row; i++)
	{

		cout << "Sen "<<i+1<<" : ";

		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j];

			if (i == 2 && j >= 2)
				break;
		}

		cout << endl;


	}


	return 0;
}