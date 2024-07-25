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
	//ð�������趨����:
	//�������ֵ����0,��ô�ͽ�������Ԫ��
	//�����Ҵ�������������,����Ҫ�Ѵ�Ľ���������
	//���return���ܺõ�ʵ�����ҵ�Ҫ��
	//���e1����e2,��ô�ͻ᷵��һ������0����,Ȼ��ͻύ��
}
int IntCompareDecrease(void* element1, void* element2)
{
	return *(int*)element2 - *(int*)element1;
	//����ͬ��,�������ֵ����0�ͻύ��
	//����ֵ���������e2����e1,Ҳ���Ǻ�һ��Ԫ�ش���ǰһ��Ԫ��
	//��������Խ�������,������Ҫ����
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
	//��������
	int NumOfElement;
	cin >> NumOfElement;
	for (int i = 0;i < NumOfElement;++i)
		cin >> arr[i];
		//����
	bubble_sort(arr, NumOfElement, sizeof(arr[0]), IntCompareIncrease);
	cout << "����: ";
	for (int i = 0;i < NumOfElement;++i)
		cout << arr[i] << ' ';
	cout << endl;
		//����
	cout << "����: ";
	bubble_sort(arr, NumOfElement, sizeof(arr[0]), IntCompareDecrease);
	for (int i = 0;i < NumOfElement;++i)
		cout << arr[i] << ' ';
	cout << endl;

	//�ṹ��
	Stu student[3];
	for (int i = 0;i < 3;++i)
		cin >> student[i].name >> student[i].score;
		//�����ӡ����
	cout << "��������: " << endl;
	bubble_sort(student, 3, sizeof(student[0]), NameCompareIncrease);
	for (int i = 0;i < 3;++i)
		cout << student[i].name << ' ' << student[i].score << '\n';
	cout << endl;
		//�����ӡ�ɼ�
	cout << "�ɼ�����: " << endl;
	bubble_sort(student, 3, sizeof(student[0]), ScoreCompareDecrease);
	for (int i = 0;i < 3;++i)
		cout << student[i].name << ' ' << student[i].score << '\n';
	cout << endl;
	return 0;
}