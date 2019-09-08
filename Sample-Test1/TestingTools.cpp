#include "pch.h"
#include "TestingTools.h"


TestingTools::TestingTools()
{
}

bool TestingTools::isSortedAscending(int size, int* unknownArray) {
	bool pass = true;
	if (size == 0 || unknownArray == NULL) {
		int tempArray[] = { 0 }; //a pointer to null is considered a pass, this array will pass
		unknownArray = tempArray;
	}

	int temp = unknownArray[0];
	for (int count = 1; count < size; count++) {
		if (unknownArray[count] < temp) {
			pass = false;
			count = size;
		}
		else {
			temp = unknownArray[count];
		}
	}

	return pass;
}

TestingTools::~TestingTools()
{
}
