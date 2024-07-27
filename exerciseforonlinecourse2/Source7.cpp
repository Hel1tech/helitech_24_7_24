#include <iostream>
using namespace std;
void left_rotate(char* pt, int k);
int main()
{
	int k;
	cin >> k;
	char arr[] = "abcdef";
	left_rotate(arr, k);
	cout << arr;
}
void left_rotate(char* pt, int k)
{
	int cnt = 0;
	while (pt[cnt++]);
	cnt--;
	k %= cnt;
	char temp;
	for (int i = 0;i < k;i++)
	{
		temp = pt[0];
		memmove(pt, pt + 1, cnt - 1);
		pt[cnt - 1] = temp;
	}
}