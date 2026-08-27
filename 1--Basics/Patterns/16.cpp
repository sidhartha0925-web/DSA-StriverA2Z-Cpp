// Problem: Print an alpha ramp pattern
// Input: n = 5
// Output:
// A
// BB
// CCC
// DDDD
// EEEEE

//sidhartha thota
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    char i,j;
    for(i='A';i<'A'+n;i++)
    {
        for(j='A';j<=i;j++)
        {
            cout<<i;
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
