#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void printf_arr(int a_size, int a[]) {
	printf("[ ");
	for (int i = 0; i < a_size; ++i) {
		if (i == a_size - 1) {
			printf("%i", a[i]);
		}
		else {
			printf("%i, ", a[i]);
		}
	}
	printf(" ]\n");
}

int main() {
	setlocale(0, "");

	int min_elem, nums[5] = {-7, -3, 2, 3, 11 };
	int a, index;

	printf_arr(5, nums);
	// Каждый элемент массива nums умножается на себя
	for (int i = 0; i < 5; ++i) {
		nums[i] *= nums[i];
	}

	printf_arr(5, nums);
	// Отсортировка
	for (int i = 0; i < 4; ++i) {
		a = nums[i];
		min_elem = 10000000;

		// Поиск мин. элемента
		for (int j = i; j < 5; ++j) {
			if (nums[j] < min_elem) {
				min_elem = nums[j];
				index = j;
			}
		}

		if (nums[i] != min_elem) {
		nums[i] = min_elem;
		nums[index] = a;
		}
	}

	printf_arr(5, nums);
	return 0;
}