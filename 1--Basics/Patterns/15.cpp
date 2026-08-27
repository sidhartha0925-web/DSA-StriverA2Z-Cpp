// Problem: Print a reverse letter triangle
// Input: n = 5
// Output:
// ABCDE
// ABCD
// ABC
// AB
// A

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(char ch='A';ch<'A'+i;ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"enter a number";
    int n;
    cin>>n;
    print(n);
    return 0;
    
}
