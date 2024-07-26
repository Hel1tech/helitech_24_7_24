//#include <iostream>
//using namespace std;
//
//const char* My_strstr(const char* str1, const char* str2);
//int main()
//{
//	char arr[] = "exerciseforonlinecourse2";
//	char subarr[] = "online";
//	const char* ret = My_strstr(arr, subarr);
//	if (ret != NULL)
//		cout << ret;
//	return 0;
//}
//const char* My_strstr(const char* str1, const char* str2)
//{
//	while (*str1 != '\0')
//	{
//		if (*str1 != *str2)
//		{
//			str1++;
//			continue;
//		}
//		const char* temp1 = str1;
//		const char* temp2 = str2;
//		bool exist = false;
//		while (*temp1 == *temp2)
//		{
//			if (*temp1 == '\0')break;
//			temp1++;temp2++;
//		}
//		if (*temp2 == '\0')exist = true;
//
//		if (exist)
//			return str1;
//		else
//			str1++;
//	}
//	return NULL;
//}