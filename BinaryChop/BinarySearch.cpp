#include "BinarySearch.h"

const int DEFAULT_ARRAY_SIZE = 100;
const int DEFAULT_MAX_VALUE = 100;
const int DEFAULT_MIN_VALUE = 0;

BinarySearch::BinarySearch()
{
	arraySize = DEFAULT_ARRAY_SIZE;
	unsortedArray = NULL;
	maxValue = DEFAULT_MAX_VALUE;
	minValue = DEFAULT_MIN_VALUE;
}

BinarySearch::BinarySearch(int size)
{
	arraySize = size;
	unsortedArray = NULL;
	maxValue = DEFAULT_MAX_VALUE;
	minValue = DEFAULT_MIN_VALUE;
}

BinarySearch::BinarySearch(int* unsortedA)
{
	arraySize = DEFAULT_ARRAY_SIZE;
	unsortedArray = unsortedA;
	maxValue = DEFAULT_MAX_VALUE;
	minValue = DEFAULT_MIN_VALUE;
}

BinarySearch::BinarySearch(int size, int* unsortedA, int max = DEFAULT_MAX_VALUE, int min = DEFAULT_MIN_VALUE)
{
	arraySize = size;
	unsortedArray = unsortedA;
	maxValue = max;
	minValue = min;
}

int* BinarySearch::generateArray() {
	int* orderedArray = new int[arraySize];

	for (int count = 0; count < arraySize; count++) {
		orderedArray[count] = ( rand() % (maxValue+1-minValue) ) + minValue;
	}

	return orderedArray;
}


BinarySearch::~BinarySearch()
{
}
