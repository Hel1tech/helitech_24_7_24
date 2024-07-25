#include <iostream>
#include "MyBubbleSort.h"
using namespace std;
const int MAXN = (int)1e3 + 1;
int arr[MAXN];
struct Stu {
	char name[20];
	int score;
};
int IntCompareIncrease(void* element1, void* element2)
{
	return *(int*)element1 - *(int*)element2;
	//冒泡排序设定的是:
	//如果返回值大于0,那么就交换两个元素
	//这里我打算以升序排序,所以要把大的交换到后面
	//这个return语句很好的实现了我的要求
	//如果e1大于e2,那么就会返回一个大于0的数,然后就会交换
}
int IntCompareDecrease(void* element1, void* element2)
{
	return *(int*)element2 - *(int*)element1;
	//这里同样,如果返回值大于0就会交换
	//返回值大于零代表e2大于e1,也就是后一个元素大于前一个元素
	//这里打算以降序排序,所以需要交换
}
int NameCompareIncrease(void* element1, void* element2)
{
	return strcmp((char*)element1, (char*)element2);
}
int ScoreCompareDecrease(void* element1, void* element2)
{
	return ((Stu*)element2)->score - ((Stu*)element1)->score;
}
int main()
{
	//整形数据
	int NumOfElement;
	cin >> NumOfElement;
	for (int i = 0;i < NumOfElement;++i)
		cin >> arr[i];
		//升序
	bubble_sort(arr, NumOfElement, sizeof(arr[0]), IntCompareIncrease);
	cout << "升序: ";
	for (int i = 0;i < NumOfElement;++i)
		cout << arr[i] << ' ';
	cout << endl;
		//降序
	cout << "降序: ";
	bubble_sort(arr, NumOfElement, sizeof(arr[0]), IntCompareDecrease);
	for (int i = 0;i < NumOfElement;++i)
		cout << arr[i] << ' ';
	cout << endl;

	//结构体
	Stu student[3];
	for (int i = 0;i < 3;++i)
		cin >> student[i].name >> student[i].score;
		//升序打印名字
	cout << "名字升序: " << endl;
	bubble_sort(student, 3, sizeof(student[0]), NameCompareIncrease);
	for (int i = 0;i < 3;++i)
		cout << student[i].name << ' ' << student[i].score << '\n';
	cout << endl;
		//降序打印成绩
	cout << "成绩降序: " << endl;
	bubble_sort(student, 3, sizeof(student[0]), ScoreCompareDecrease);
	for (int i = 0;i < 3;++i)
		cout << student[i].name << ' ' << student[i].score << '\n';
	cout << endl;
	return 0;
}