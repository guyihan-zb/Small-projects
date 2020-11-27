#include<iostream>
using namespace std;
//打印数组
void bubbleSort (int * arr, int len)
{
	//开始冒泡
	//排序总轮数=元素个数-1
	//每轮对比次数=元素个数-排序轮数-1
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//输出数组
void  printArray(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main9()
{
	//创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);
	//输入数组
	bubbleSort (arr, len);
	//输出数组
	printArray (arr, len);
	/*cout << "排序后：   " << endl;
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;*/
	return 0;
}