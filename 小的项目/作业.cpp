#include <stdio.h>
//ð������1��2
void BubbleSort(int array[], int size)
{
    // ���ѭ������ð�����������
    // size-1��ʾ�����һ��������ֻʣ��1��Ԫ�أ�����ð�ݿ���ʡ��
    for (int i = 0; i < size - 1; ++i)
    {
        int isChange = 0;
        // ����ð�ݵķ�ʽ�������ڵ�����Ԫ�ؽ��бȽϣ�ǰһ�����ں�һ��Ԫ��ʱ���������������ݣ�����ֱ�������ĩβ
        for (int j = 1; j < size - i; ++j)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;

                isChange = 1;   // �������ð�ݽ������ݽ����ˣ�˵�����λ�������ģ��ͽ�isChange����Ϊ1
            }
        }

        // �������ð���У�Ԫ��û�н������򱾴ο�ʼð��ʱ�������Ѿ������ˣ������ð�ݿ��Բ��ý�����
        if (!isChange)
            return;
    }
}

void paixu(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
void show(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
void Init(int arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = 0;
    }
}
//ʵ��reverse()  �����������Ԫ�ص����á�
void reverse(int arr[], int len)
{
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
int compare(int m, int n, int i)
{


    if (i == 0)
        return 0;
    if (i % 2 == 1)
    {
        i = i >> 1;
        return 1 + compare(m, n, i);
    }
    else
    {
        i = i >> 1;
        return 0 + compare(m, n, i);

    }
}

int main1()
{
    //��ӡ���������Ƶ�����λ��ż��λ
       int num = 20;//00000000 00000000 00000000 0001 0100
       int i = 31;
        for (i = 31; i >= 1; i -= 2)
        {
            printf("%d ", (num >> i) & 1);
        }
        printf("\n");
        for (i = 30; i >= 0; i -= 2)
        {
            printf("%d ", (num >> i) & 1);
        }
        printf("\n");

    /*int m = 0;
    int n = 0;
    scanf_s("%d%d", &m, &n);
    int i = m ^ n;
    printf("%d", compare(m, n, i));*/

 // ������A�е����ݺ�����B�е����ݽ��н�����������һ����
    //int i;
    //int A[10];
    //int B[10];
    //int t[10];
    //printf("����������A��");
    //for (i = 0; i < 10; i++)
    //{
    //    scanf_s(" %d", &A[i]);
    //}
    //printf("����������B��");
    //for (i = 0; i < 10; i++)
    //{
    //    scanf_s(" %d", &B[i]);
    //}
    //for (i = 0; i < 10; i++)
    //{
    //    t[i] = A[i];
    //    A[i] = B[i];
    //    B[i] = t[i];
    //}
    //for (i = 0; i < 10; i++)
    //{
    //    printf("%d ", A[i]);
    //}
    //printf("\n");//Ϊ��ʹ���������������������A������B���·ָ���
    //for (i = 0; i < 10; i++)
    //{
    //    printf("%d ", B[i]);
    //}
    //printf("\n");

	//int arr[] = { 12,6,5,4,8,2 };//�����ľ�����ʵ�����鳤��
	//int len = sizeof(arr) / sizeof(arr[0]);
 //   //Init(arr, len);
 //   reverse(arr, len);
 //   for (int i = 0; i < len; i++)
 //   {
 //       printf("%d ", arr[i]);
 //   }
 //   printf("\n");

    /*show(arr, len);
	paixu(arr, len);
    show(arr, len);*/
    return 0;
}

//ͳ�ƶ�������1�ĸ���
//#include<stdio.h>
//int _Count(int x)
//{
//    int cnt = 0; while (x)
//    {
//        x &= (x - 1); cnt++;
//    }
//    return cnt;
//}

//����������������������ʱ������
//#include<stdio.h>
//int main()
//{
//    int a = 20;
//    int b = 10;
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("%d %d\n", a, b);
//    return 0;
//}