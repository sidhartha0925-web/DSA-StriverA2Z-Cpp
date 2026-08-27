// Problem: Print a binary number triangle
// Input: n = 5
// Output:
// 1
// 01
// 101
// 0101
// 10101
// sidhartha thota
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    print(n);
    return 0;
}