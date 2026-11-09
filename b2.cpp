#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int dem = 0;
    for (int i = a; i <= b; i++)
    {
        int Tonguoc = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                Tonguoc = Tonguoc + j;
                if ((i/j) != j)
                    Tonguoc = Tonguoc + i/j;
            }
        }
        if (Tonguoc > i)
        {
            dem = dem +1;
        }
    }
    cout << dem;
}
