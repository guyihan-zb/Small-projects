#include<iostream>
#include<ctime>//timeϵͳʱ��ͷ�ļ�����
int main2()
{
	srand((unsigned int)time(NULL));
	using namespace std;
	int a = rand() % 100 + 1;//ϵͳ�����������0~99 +1  =1~100.
	//cout << a << endl;��ʾ���������
	int b = 0;
	while (1)
	{
		cin >> b;
		if (a > b)
		{
			cout << "�²��С" << endl;
		}
		else if (a < b)
		{
			cout << "�²����" << endl;
		}
		else
		{
			cout << "�¶���" << endl;
			break;
		}
	}
	return 0;
}