#include<bits/stdc++.h>
using namespace std;

void fibonoci(int n, long long x, long long y)
{
    if(n == 0)
        return;

    long long z = x + y;

    cout << " " << z;

    fibonoci(n - 1, y, z);
}

int main()
{
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    if(n <= 0)
        return 0;

    if(n == 1)
    {
        cout << "0";
        return 0;
    }

    cout << "0 1";

    fibonoci(n - 2, 0, 1);

    cout << endl;

    return 0;
}