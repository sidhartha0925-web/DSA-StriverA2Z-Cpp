//// Problem: Print an inverted right-angled number triangle
// Input: n = 5
// Output:
// 12345
// 1234
// 123
// 12
// 1


#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
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