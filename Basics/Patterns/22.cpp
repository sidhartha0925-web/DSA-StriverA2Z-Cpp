// Problem: Print a concentric number square pattern
// Input: n = 4
// Output:
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

//sidhartha thota
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
    for(i=1;i<=(2*n-1);i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            cout<<n-min(min(i,j),min(2*n-i,2*n-j))+1;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    print(n);
    return 0;
}