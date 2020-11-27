#include<iostream>
int main()
{
	using namespace std;
	for (int i = 1; i <= 9; i++)
	{
		//cout << i << endl;ÐÐÊý
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i <<"="<<i * j<<"  ";
		}
			cout << endl;
	}
return 0;
}