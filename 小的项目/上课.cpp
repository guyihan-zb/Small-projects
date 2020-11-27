#include <stdio.h>
int main2()
{
	//连续和下一个数与  即可求出1的个数
	int n = 7;
	int count = 0;
	while (n!=0)
	{
		count++;
		n = n & (n - 1);
	}
	printf("%d\n", count);

	////求-1的1的位数  缺点比较32次 但是可以比较-1.
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

	////求一个整数存储在内存中的二进制中1的个数
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

	//数组的地址
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