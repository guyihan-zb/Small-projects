#include<iostream>
int main7()
{
	using namespace std;
	int arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	int start = 0;//��ʼ�±�
	int end = sizeof (arr) / sizeof (arr[0])-1;//�����±�
	while (start < end)
		//��ʼλ��С�ڽ���λ��һֱѭ��
		//��ʼλ��>=����λ�ý���ѭ��
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] =  temp;
		start++; end--;
	}
	cout << "�������ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}
	return 0;
}