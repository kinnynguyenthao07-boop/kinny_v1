#include <iostream>
using namespace std;

int main() 
{
 int a,b;
 cin >> a; cin >> b; 
 if (a >= 1 && b >= 1 && a <= 1000 && b <= 1000) {
    cout << a + b;
    return 0;
 }
};