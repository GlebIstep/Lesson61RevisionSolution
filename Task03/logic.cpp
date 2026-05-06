// Task 03 [The number of local extreme numbers]
// Количество локальных минимумов и максимумов
//
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.
#include "logic.h"

int count_local_extreme_numbers(int* array, int size) {
	if (size < 3) {
		return 0;
	}

	int count = 0;
	for (int i = 1; i < size - 1; i++)
	{
		int current = *(array + i);
		int prev = *(array + i - 1);
		int next = *(array + i + 1);

		if ((current > prev && current > next) || 
			(current < prev && current < next)) {
			count++;
		}
	}
	return count;

}
