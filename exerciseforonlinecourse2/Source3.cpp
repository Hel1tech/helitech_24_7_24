//#include <iostream>
//#include <cassert>
//using namespace std;
//
//void* myMemcpy(void* destination, const void* source, size_t number);
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	myMemcpy(arr2, arr1, sizeof(arr1[0]) * 10);
//	for (int i = 0;i < 10;i++)
//		cout << arr2[i] << ' ';
//	return 0;
//}
//void* myMemcpy(void* destination, const void* source, size_t number)
//{
//	assert(destination && source);
//	for (int i = 0;i < number;++i)
//		*((char*)destination + i) = *((char*)source + i);
//	return destination;
//}