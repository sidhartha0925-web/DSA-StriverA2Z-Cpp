#include<bits/stdc++.h>
using namespace std;
int recursivefactorial(int x,int factorial)
{
    if(x==1)
    {
        return factorial;
    }
    else
    {
        return recursivefactorial(--x,factorial*x);
    }
}
int main()
{
    int no;
    cout<<"enter the value ";
    cin>>no;
    int sum=recursivefactorial(no,1);
    cout<<"the factorial of"<<no<<" is "<<sum;
    return 0;
}
