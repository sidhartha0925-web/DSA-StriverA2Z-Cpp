// Problem: Print an alpha triangle
// Input: n = 5
// Output:
// E
// DE
// CDE
// BCDE
// ABCDE

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    char i,j;
    for(i=('A'+(n-1));i>='A';i--)
    {
        for(j=i;j<=('A'+n-1);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    print(n);
    return 0;
}
