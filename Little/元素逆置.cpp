#include<iostream>
int main7()
{
	using namespace std;
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	int start = 0;//开始下标
	int end = sizeof (arr) / sizeof (arr[0])-1;//结束下标
	while (start < end)
		//起始位置小于结束位置一直循环
		//起始位置>=结束位置结束循环
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] =  temp;
		start++; end--;
	}
	cout << "结束逆置后" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
	return 0;
}