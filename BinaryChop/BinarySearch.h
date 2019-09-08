#pragma once

#include <iostream>
#include <random>

class BinarySearch
{
private:
	int* unsortedArray;
	int arraySize;
	int maxValue;
	int minValue;

public:
	BinarySearch();
	BinarySearch(int);
	BinarySearch(int*);
	BinarySearch(int, int*, int, int);
	int* generateArray();
	~BinarySearch();
};

