// Problem: Print a right-angled number triangle
// Input: n = 5
// Output:
// 1
// 12
// 123
// 1234
// 12345
//sidhartha thota

#include<bits/stdc++.h>
using namespace std;        
void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
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