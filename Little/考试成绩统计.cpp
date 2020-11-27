#include<iostream>
using namespace std;
//1.无参无返
void test01()
{
	cout << "this is test 01: " << endl;
}

//2.有参无返
void test02(int a )
{
	cout << "this is test 02:   " << a << endl;
}

//3.无参有返
int test03()
{
	cout << "this is test 03:   ";
	return 1000;
}

//4.有参有返
int test04(int a)
{
	cout << "this is test 04:   a=" << a;
	return 100;
}

int main8()
{
	//无参无返函数调用
	test01();

	//有参无返函数调用
	test02(5);

	//无参有返函数调用
	int num1=test03();
	cout << "num" << num1 << endl;

	//有参有返函数调用
	int num2 = test04(1000);
	cout << " num2=" << num2<< endl;
	return 0;
}
