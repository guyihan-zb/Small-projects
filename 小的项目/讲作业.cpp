#include <stdio.h>
#include<math.h>
//��ӡһ������ÿһλ
void cre(int n)
{	
	if (n > 9)
	{
		cre(n / 10);
	}
	printf("%d\n", n % 10);
}
//����һ������ÿλ֮��
int Digitnum(int n)
{
	if (n < 10)
	{
		return n;
	}
	return n % 10 + Digitnum(n / 10);
}
int main3()
{



	/*int ret=Digitnum(1729);
	printf("%d\n", ret);*/

	/*int n;
	cre(6521);*/

	//�����ж�����
	//for (int i = 100; i < 201; i++)
	//{
	//	int j;
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j >sqrt(i))
	//	{
	//		printf("%d\n", i);
	//	}
	//}
	return 0;
}