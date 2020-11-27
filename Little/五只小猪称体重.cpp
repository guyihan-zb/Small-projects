#include<iostream>
int main6()
{
	using namespace std;
	int arr[5] = {300,350,500,400,250};
	int max = 0;
	//for (int i = 0; i <5; i++)
	//{
	//	//cout << "五只小猪的体重" << arr[i] << endl;
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//cout << "最重的小猪体重为" << max <<endl;
	for (int i = 0; i < 5; i++)
	{ 
	max = (arr[i] > max ? arr[i] : max);
	}
	cout << "最重的小猪体重为" << max << endl;
	return 0;
}