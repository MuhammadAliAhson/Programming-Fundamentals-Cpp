#pragma once
void nrows(int num) {
	if (num == 0) {
		return;
	}
	cout << "*";
	nrows(num - 1);
}

void pattern1(int num) {
	if (num == 0) {
		return;
	}
	nrows(num);
	cout << endl;
	pattern1(num - 1);
}

void numrows(int i) {
	if (i == 0) {
		return;
	}
	cout << "*";
	numrows(i - 1);
}

void pattern2(int num, int i) {
	if (num == 0)
		return;
	numrows(i);
	cout << endl;
	pattern2(num - 1, i + 1);
}

void pattern3(int num) {
	pattern1(num);
	nrows(num);
	cout << endl;
	pattern2(num, 1);
}
int getCharCount(const char* str1, char c) {
	if (*(str1) == '\0')
		return 0;
	if (*(str1) == c)
		return 1 + getCharCount(++str1, c);
	else
		return 0 + getCharCount(++str1, c);

}
int getUniCharCount1(const char* ptr, const char* current, int count) {

	if (*ptr == '\0')
		return count;

	int x = getCharCount(ptr, *ptr);
	if (x == 1)
		count += 1;

	getUniCharCount1(ptr += 1, current, count);
}
int getUniCharCount(const char* ptr, const char* current) {


	int x = getUniCharCount1(ptr, current, 0);

	return x;