#pragma once

int maximum(int* arr, int size)
{
	int min = arr[0], max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	return max;

}

int secondLargest(int* arr, int size)
{
	int max = maximum(arr, size);
	int secondMax=arr[0];

	for (int i = 0; i < size; i++)
	{
		if (secondMax<arr[i] && arr[i]<max)
		{
			secondMax = arr[i];
		}
	}

	return secondMax;
}


int *spl(int* arr, int size)
{
	int* ptrarr = new int[size + 1];
	int max = maximum(arr, size);
	int secondMax = secondLargest(arr, size);

	
	int j = 0;
	for (int i = 0; i < size+1; i++)
	{
		if (arr[i] == max)
		{
			ptrarr[i] = secondMax;
			ptrarr[++i] = max - secondMax;
		}
		else
			ptrarr[i] = arr[j];
		j++;
	}

	return ptrarr;

}

char **word_Sentences(int row, int col)
{
	char** arr = new char* [row];

	for (int i = 0; i < row; i++)
	{
		arr[i] = new char[col];
	}

	arr[0][0] = 'H';
	arr[0][1] = 'e';
	arr[0][2] = 'l';
	arr[0][3] = 'l';
	arr[0][4] = 'o';
	arr[1][0] = 'w';
	arr[1][1] = 'o';
	arr[1][2] = 'r';
	arr[1][3] = 'l';
	arr[1][4] = 'd';
	arr[2][0] = 'h';
	arr[2][1] = 'o';
	arr[2][2] = 'w';

	return arr;
}
