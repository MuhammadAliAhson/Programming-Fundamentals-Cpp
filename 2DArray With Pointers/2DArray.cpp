#pragma once
#include <iostream>
#include <fstream>
using namespace std;


int arraySum(int arr[][5], int col, int row) {

	int sum = 0;
	for (int i = 0; i < col; i++) {

		for (int j = 0; j < row; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

int* rowSum(int arr[][4], int col, int row) {

	int* ptr = new int[4];
	int sum = 0;
	for (int i = 0; i < col; i++) {
		sum = 0;
		for (int j = 0; j < row; j++) {
			sum += arr[i][j];
		}
		ptr[i] = sum;
	}

	return ptr;
}

int* colSum(int arr[][4], int col, int row) {
	int* ptr = new int[4];
	int sum = 0;
	for (int i = 0; i < col; i++) {
		sum = 0;
		for (int j = 0; j < row; j++) {
			sum += arr[j][i];
		}
		ptr[i] = sum;
	}
	return ptr;
}

int** transposeMatrix(int arr[][2], int col, int row) {
	int** ptr = new int* [2];
	for (int i = 0; i < 2; i++) {
		ptr[i] = new int[2];
	}
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			ptr[i][j] = arr[i][j];
		}
	}
	sum = ptr[0][1];
	ptr[0][1] = ptr[1][0];
	ptr[1][0] = sum;

	return ptr;
}

int** matrixSum(int arr[][3], int arr2[][3], int col, int row) {
	int** ptr = new int* [col];
	for (int i = 0; i < col; i++) {
		ptr[i] = new int[row];
	}
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			ptr[i][j] = arr2[i][j] + arr[i][j];
		}
	}
	return ptr;
}

int multiplyMatrix(int arr[][4], int arr2[][4], int col_1, int row_1, int col_2, int row_2) {
	int** ptr = new int* [col_1];
	for (int i = 0; i < col_1; i++) {
		ptr[i] = new int[row_1];
	}
	int sum = 0;
	for (int i = 0; i < col_1; i++) {
		for (int j = 0; j < row_1; j++) {
			for (int k = 0; k < row_1; k++)
				sum += arr[i][j] * arr2[j][k];
		}
	}
	return sum;
}

int leftDiagonalSum(int arr[][4], int col, int row) {
	int sum = 0;
	for (int i = 0; i < row; i++) {

		sum += arr[i][i];
	}
	return sum;
}

int rightDiagonalSum(int arr[][4], int col, int row) {
	int sum = 0;
	for (int i = row - 1; i >= 0; i--) {
		for (int j = 0; j < row; j++) {
			sum += arr[j][i];
			i--;
		}
		break;
	}

	return sum;
}

int* displayMiddleRow(int arr[][5], int row) {
	int mid = row / 2;
	int* ptr = new int[row];
	for (int i = mid; i < row; i++) {
		for (int k = 0; k < row; k++) {
			ptr[k] = arr[i][k];
		}
		break;
	}
	return ptr;
}


int* displayMiddleCol(int arr[][5], int row) {
	int mid = row / 2;
	int* ptr = new int[row];
	for (int i = mid; i < row; i++) {
		for (int k = 0; k < row; k++) {
			ptr[k] = arr[k][i];
		}
		break;
	}
	return ptr;
}

int* toIntArray(string str) {
	int str_length = str.length();
	int* arr = new int[str_length];
	for (int i = 0; str[i] != '\0'; i++) {
		arr[i] = str[i] - 48;
	}
	return arr;
}
int* addTwoArray(string str, string str2) {
	int str_1 = str.length();
	int* arr = new int[str_1];
	int* arr2 = new int[str_1];
	for (int i = 0; str[i] != '\0'; i++) {
		arr[i] = str[i] - 48;
		arr2[i] = str[i] - 48;
		arr[i] += arr2[i];
	}
	return arr;
}
int* subTwoArray(string str, string str2) {
	int str_1 = str.length();
	int* arr = new int[str_1];
	int* arr2 = new int[str_1];
	for (int i = 0; str[i] != '\0'; i++) {
		arr[i] = str[i] - 48;
		arr2[i] = str[i] - 48;
		arr[i] -= arr2[i];
	}
	return arr;

}

int* readFromFile() {
	int arr[5][5] = { (1,1,1,1,1),(2,3,0,0,0),(0,3,1,1,0),(2,2,1,0,0),(0,0,0,5,0) };
	
	ofstream file;
	string file_name, message;
	cout << "\nFilename: ";
	file_name="input.txt";
		file.open(file_name.c_str());
		for(int i=0;i<5;i++)
		file << 5 << endl;
	file.close();
	int* a = new int[5];
	int i = 0;
	fstream my_file;
	my_file.open("input.txt", ios::in);
	if (!my_file) {
		cout << "No such file";
	}
	else {
		int ch;

		while (1) {
			my_file >> ch;
			if (my_file.eof())
				break;

			a[i]= ch;
			i++;
		}
	}
	my_file.close();
	
	return a;

}
