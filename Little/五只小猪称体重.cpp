#include<iostream>
int main6()
{
	using namespace std;
	int arr[5] = {300,350,500,400,250};
	int max = 0;
	//for (int i = 0; i <5; i++)
	//{
	//	//cout << "��ֻС�������" << arr[i] << endl;
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//cout << "���ص�С������Ϊ" << max <<endl;
	for (int i = 0; i < 5; i++)
	{ 
	max = (arr[i] > max ? arr[i] : max);
	}
	cout << "���ص�С������Ϊ" << max << endl;
	return 0;
}