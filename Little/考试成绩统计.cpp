#include<iostream>
using namespace std;
//1.�޲��޷�
void test01()
{
	cout << "this is test 01: " << endl;
}

//2.�в��޷�
void test02(int a )
{
	cout << "this is test 02:   " << a << endl;
}

//3.�޲��з�
int test03()
{
	cout << "this is test 03:   ";
	return 1000;
}

//4.�в��з�
int test04(int a)
{
	cout << "this is test 04:   a=" << a;
	return 100;
}

int main8()
{
	//�޲��޷���������
	test01();

	//�в��޷���������
	test02(5);

	//�޲��з���������
	int num1=test03();
	cout << "num" << num1 << endl;

	//�в��з���������
	int num2 = test04(1000);
	cout << " num2=" << num2<< endl;
	return 0;
}
