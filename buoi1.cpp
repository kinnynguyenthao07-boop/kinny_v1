#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    int ktra = 1;
    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        ktra = 0;
        for (int j = 2; j <= sqrt(i) ; j++)
        {
            if (i % j == 0)
            {
                ktra = 1;
                break;
            }
        }
        if(ktra == 0 && i!=1)
        {
            cout << i <<endl;
        }
    }


        return 0;
}
