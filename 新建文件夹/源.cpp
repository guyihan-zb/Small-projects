#include<iostream>
using namespace std;
int main2()
{
    int a=0,b=0,c=0,d=0;
    cin >> a>> b >>c>> d;
    if (0 < a && b && c && d < 1000)
    {
       cout<< (a + b - c) * d;
    }
    return 0;
}