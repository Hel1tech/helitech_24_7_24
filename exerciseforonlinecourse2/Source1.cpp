//#include <iostream>
//using namespace std;
//const int MAXN = (int)1e3 + 1;
//int arr[MAXN];
//struct Stu {
//	int score = 0;
//	char name[10] = "Eric";
//};
//Stu student[5];
//int compare_int_up(const void* element1, const void* element2)
//{
//	return *(int*)element1 - *(int*)element2;//e1����e2����һ������,���ڷ���0,С�ڷ���һ������
//}
//int compare_int_down(const void* element1, const void* element2)
//{
//	return *(int*)element2 - *(int*)element1;//e1����e2����һ������,���ڷ���0,С�ڷ���һ������
//}
//int compare_structInt_up(const void* element1, const void* element2)
//{
//	return ((Stu*)element1)->score - ((Stu*)element2)->score;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++)
//		cin >> arr[i];
//	//����
//	qsort(arr, n, sizeof(arr[0]), compare_int_up);
//	for (int i = 0;i < n;i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//	//����
//	qsort(arr, n, sizeof(arr[0]), compare_int_down);
//	for (int i = 0;i < n;i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//
//	for (int i = 0;i < 5;i++)
//		cin >> student[i].score;
//	qsort(student, 5, sizeof(student[0]), compare_structInt_up);
//	for (int i = 0;i < 5;i++)
//		cout << student[i].score << ' ';
//	cout << endl;
//	return 0;
//}