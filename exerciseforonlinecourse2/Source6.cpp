//#include <iostream>
//using namespace std;
//int number(int, int);
//int main()
//{
//
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < n - 1 - i;j++)
//			cout << ' ';
//		for (int j = 0;j < i + 1;j++)
//			cout << number(i, j) << ' ';
//		cout << endl;
//	}
//	return 0;
//}
//int number(int row, int col)
//{
//	int up = 1;
//	for (int i = 0;i < col;i++)
//		up *= (row - i);
//	int down = 1;
//	for (int i = 1;i < col + 1;i++)
//		down *= i;
//	return up / down;
//}