#include <iostream>
#include <cassert>
using namespace std;

void* myMemmove(void* destination, const void* source, size_t number);
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	myMemmove(arr1, arr1+2, sizeof(arr1[0]) * 5);
	for (int i = 0;i < 10;i++)
		cout << arr1[i] << ' ';
	return 0;
}
void* myMemmove(void* destination, const void* source, size_t number)
{
	assert(destination && source);

	if (destination > source)
	{
		for (int i = number-1;i >= 0;i--)
			*((char*)destination + i) = *((char*)source + i);
	}
	else if (destination < source)
	{
		for (int i = 0;i < number;i++)
			*((char*)destination + i) = *((char*)source + i);
	}

	return destination;
}