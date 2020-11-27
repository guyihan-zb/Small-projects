#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include< math.h >
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void Reverse(char* str)
{
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		--right;
	}
	printf("%s\n", str);
}

//int plus(int n)
//{
//	/*int i;
//	for(i=0;i<)
//	while (i < 5)
//	{
//
//	}
//	printf("%d\n", n);
//	return 0;*/
//}

//实现strcpy这个库函数
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(ret != NULL);
	assert(src != NULL);
	while (*ret++ = *src++);
	return dest;
}

//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序
//使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void Sort(int num[], int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j) 
		{
			if (num[j] % 2 == 0 && num[j + 1] % 2 != 0) 
			{
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int num[] = { 3, 4, 7, 8, 12, 1 };
	int len = sizeof(num) / sizeof(num[0]);
	Sort(num, len);
	for (int i = 0; i < sizeof(num) / sizeof(int); ++i)
	{
		printf("%d ", num[i]);
	}
	printf("\n");





		/*char arr[] = "123456";
		printf("%s\n", my_strcpy(arr, "abcdef"));
		system("pause");*/


	//程序进入死循环
	/*	int i = 0;
		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		for (i = 0; i <=9; i++)
		{
			arr[i] = 0;
			printf("hello bit\n");
		}*/

	//打印菱形
	//int line = 0;
	//int i = 0;
	//scanf_s("%d", &line);//7
	////打印上半部分
	//for (i = 0; i < line; i++)
	//{
	//	//打印一行
	//	//打印空格
	//	int j = 0;
	//	for (j = 0; j < line - 1 - i; j++)
	//	{
	//		printf(" ");
	//	}
	//	//打印*
	//	for (j = 0; j < 2 * i + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	////打印下半部分
	//for (i = 0; i < line - 1; i++)
	//{
	//	//打印一行
	//	int j = 0;
	//	for (j = 0; j <= i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//水仙花数
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//		return 0;
//}
	//plus(2);

	/*char str[] = "hello bit";
	Reverse(str);*/

	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}*/
	return 0;
}