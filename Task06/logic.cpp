// Task 06 [The sorting from the specified range]
// Сортировка из указанного промежутка
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая сортирует часть элементов заданного вектора
// в указанном диапазоне порядковых номеров либо по возрастанию, 
// либо по убыванию.
#include "logic.h"

void sort_in_range(int* array, int size, int start, int end, bool type) {
	if (start < 0) {
		start = 0;
	}
	if (end >= size) {
		end = size - 1;
	}

	for (int i = start; i < end; i++)
	{
		for (int j = start; j < end - (i - start); j++) {
			bool condition;
			if (type) {
				condition = *(array + j) > *(array + j + 1);
			}
			else {
				condition = *(array + j) < *(array + j + 1);
			}

			if (condition) {
				int t = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = t;

			}

		}
	}
}