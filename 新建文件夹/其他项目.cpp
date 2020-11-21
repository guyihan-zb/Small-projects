#include<iostream>
using namespace std;
int main1()
{
    int a = 0;
    int b = 0;
    int c = 0;
    for (a = 0; a < 9; a++)
    {
        for (b = 0; b < 9; b++)
        {
            for (c = 0; c < 9; c++)
            {
                if ((a * 100 + b * 10 + c + b * 100 + c * 10 + c == 532))
                {
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }
    return 0;
}