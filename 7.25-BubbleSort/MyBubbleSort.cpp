#include "MyBubbleSort.h"
void bubble_sort(void* Base, size_t NumOfElement, size_t SizeOfElement, int CompareFunction(void* element1, void* element2))
{
	for (int i = 0;i < NumOfElement - 1;i++)
	{
		for (int j = 0;j < NumOfElement - 1 - i;j++)
		{
			if (CompareFunction((char*)Base + j * SizeOfElement, (char*)Base + (j + 1) * SizeOfElement) > 0)
			{
				Swap((char*)Base + j * SizeOfElement, (char*)Base + (j + 1) * SizeOfElement, SizeOfElement);
			}
		}
	}
}
void Swap(void* element1, void* element2, size_t SizeOfElement)
{
	for (int i = 0;i < SizeOfElement;++i)
	{
		char temp = *((char*)element1 + i);
		*((char*)element1 + i) = *((char*)element2 + i);
		*((char*)element2 + i) = temp;
	}
}