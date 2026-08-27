#include<bits/stdc++.h>
using namespace std;
int recursivesum(int x,int sum)
{
    if(x==0)
    {
        return sum ;
    }
    else
    {
        return recursivesum(--x,sum+x);
    }
}
int main()
{
    int no;
    cout<<"enter the value ";
    cin>>no;
    int sum=recursivesum(no,0);
    cout<<"the sum of"<<no<<" natural no's is "<<sum;
    return 0;
}
