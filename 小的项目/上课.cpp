#include <stdio.h>
int main2()
{
	//��������һ������  �������1�ĸ���
	int n = 7;
	int count = 0;
	while (n!=0)
	{
		count++;
		n = n & (n - 1);
	}
	printf("%d\n", count);

	////��-1��1��λ��  ȱ��Ƚ�32�� ���ǿ��ԱȽ�-1.
	//int n = -1;
	//int count=0;
	//for (int i = 0; i < 32; i++)
	//{
	//	if ((n & 1) != 0)
	//	{
	//		count++;
	//	}
	//	n = n >> 1;
	//}
	//printf("%d\n", count);

	////��һ�������洢���ڴ��еĶ�������1�ĸ���
	//int n ;
	//scanf_s("%d", &n);
	//int count = 0;
	//while (n != 0)
	//{
	//	if (n % 2 != 0)
	//	{
	//		count ++;
	//	}
	//	n = n / 2;
	//}
	//printf("%d\n", count);

	//����ĵ�ַ
	//int arr[3][4];
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)
	//	{
	//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
	//	}
	//}
	return 0;	
}