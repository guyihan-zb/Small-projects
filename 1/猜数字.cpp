#include<iostream>
#include<ctime>//time系统时间头文件包含
int main2()
{
	srand((unsigned int)time(NULL));
	using namespace std;
	int a = rand() % 100 + 1;//系统随机生成数字0~99 +1  =1~100.
	//cout << a << endl;显示随机的数字
	int b = 0;
	while (1)
	{
		cin >> b;
		if (a > b)
		{
			cout << "猜测过小" << endl;
		}
		else if (a < b)
		{
			cout << "猜测过大" << endl;
		}
		else
		{
			cout << "猜对了" << endl;
			break;
		}
	}
	return 0;
}