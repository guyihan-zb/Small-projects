#include<iostream>
int main4()
{
	using namespace std;
	for (int i = 1; i<=100;i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	return 0;
}