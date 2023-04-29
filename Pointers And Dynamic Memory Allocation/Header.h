#pragma once
int min(int* ptr) {
	int temp = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (*(ptr + j) > * (ptr + j + 1)) {
				temp = *(ptr + j + 1);
				*(ptr + j + 1) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}


	return *ptr;
}
int max(int* ptr) {
	int temp = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (*(ptr + j) < *(ptr + j + 1)) {
				temp = *(ptr + j);
				*(ptr + j) = *(ptr + j + 1);
				*(ptr + j + 1) = temp;
			}
		}
	}


	return *(ptr + 1);
}
int half(float* ptr) {
	for (int i = 0; i < 5; i++) {
		*(ptr + i) = (*(ptr + i) / 2);
	}

	return *ptr;
}
float multiply(float* ptr) {
	float product;
	for (int i = 0; i < 5; i++) {
		product = product * (*(ptr + i));
	}
	return product;
}

bool compare(char* c1, char* c2) {
	int total = 0, point = 0;
	for (int i = 0; i < 10; i++) {
		if (*(c1 + total) == *(c2 + total)) {
			point++;

		}

		total++;
	}
	if (total == point) {
		return true;
	}
	else {
		return false;
	}

}
int swap(char*& c1, char*& c2) {
	char c3[20];
	for (int i = 0; i < 20; i++) {
		c3[i] = *(c1 + i);
	}for (int i = 0; i < 20; i++) {
		*(c1 + i) = *(c2 + i);
	}
	for (int i = 0; i < 20; i++) {
		*(c2 + i) = c3[i];
	}
	return *c1, * c2;
}
int fun(int* ptr) {
	int sort = 0, even = 0, dul[20];

	for (int i = 0; i < 20; i++) {
		dul[i] = *(ptr + i);
	}
	for (int i = 0; i < 20; i++) {

		if (dul[i] % 2 == 0) {
			*(ptr + sort) = dul[i];
			sort++;
		}
	}

	for (int i = 0; i < 20; i++) {
		if (dul[i] % 2 != 0) {
			*(ptr + sort) = dul[i];
			sort++;
		}
		even = sort;
	}



	return *ptr;
}
