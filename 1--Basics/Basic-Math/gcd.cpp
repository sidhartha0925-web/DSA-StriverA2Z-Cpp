/*Find GCD of two numbers
Problem Statement: Given two integers N1 and N2, find their greatest common divisor.*/
//sidhartha thota

#include<bits/stdc++.h>
using namespace std;
void gcd(int a,int b)
{
    int reminder,oa=a,ob=b;
    while(b>0)
    {
    reminder=a%b;
    a=b;
    b=reminder;
    }
    cout<<"gcd of"<<oa<<" and "<<ob<<" is "<<a;
    
}
int main()
{
    int a,b;
    cout<<"enter two value";
    cin>>a>>b;
    gcd(a,b);
    return 0;
}
