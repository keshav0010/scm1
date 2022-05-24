#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int *p = &i;
    cout << p << endl;
    p = p + 1;
    cout << p << endl;
    p = p + 2;
    cout << p << endl;
    p = p - 2;
    cout << p << endl;

    double d = 102.3;
    double *dp = &d;
    cout << dp << endl;
    dp++;
    cout << dp << endl;

    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout << *c << endl;

    int a = 7;
    int *c = &a;
    c = c + 3;
    cout << c << endl;
}