#include<iostream>
using namespace std;
int main3()
{
	int a, b, c, t;
	cin >> a >> b >> c;
	cout << endl;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	cout <<c<<" "<<b<<" "<< a <<" "<< endl;

	return 0;
}