// Task 05 [The sum of elements between first extreme elements]
// Сумма элементов между первыми экстримальными элементами  
// 
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет сумму элементов вектора, расположенных
// между первыми максимальным по модулю и минимальным по модулю элементами.
#include "logic.h"

int sum_between_first_min_max(int* array, int size) {
	if (size <= 1) {
		return 0;
	}

	int min_ind = 0;
	int max_ind = 0;

	int min_val = (*array < 0) ? -(*array) : *array;
	int max_val = min_val;

	for (int i = 0; i < size; i++)
	{
		int current_abs = (*(array + i) < 0) ? -(*(array + i)) : *(array + i);

		if (current_abs < min_val) {
			min_val = current_abs;
			min_ind = i;
		}
		if (current_abs > max_val) {
			max_val = current_abs;
			max_ind = i;
		}
	}

	int start = (min_ind < max_ind) ? min_ind : max_ind;
	int end = (min_ind < max_ind) ? max_ind : min_ind;

	int sum = 0;
	for (int i = start + 1; i < end; i++) {
		sum += *(array + i);
	}

	return sum;
}