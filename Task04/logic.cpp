// Task 04 [The arithmetic mean of non-extreme elements]
// Среднее арифметическое неэкстремальных элементов
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее рифметическое элементов
// вектора без учёта экстремальных элементов.
#include "logic.h"

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	if (size <= 0){
		return 0;
	}
	int min = *array;
	int max = *array;

	for (int i = 1; i < size; i++)
	{
		if (*(array + i) < min) {
			min = *(array + i);
		}

		if (*(array + i) > max) {
			max = *(array + i);
		}
	}

	double sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (*(array + i) != min && *(array + i) != max) {
			sum += *(array + i);
			count++;
		}
	}

	return (count == 0) ? 0 : sum / count;
		

}