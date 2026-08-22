/*Check if a number is Armstrong Number or not*/
#include<bits/stdc++.h>
using namespace std;
int noofdigits(int n)
{ 
    int count =0;
    if(n>0)
    {
        while(n>0)
        {
            n=n/10;
            count++;
            
        }
    }
    return count;
}
int armstrong(int no)
{
   int x=noofdigits(no),y=0;
       cout<<"count is"<<" "<<x<<endl;
    if(no>0)
    {
        while(no>0)
        {
            y=y+(pow((no%10),x));
            no=no/10;
            
        }
    }
    else cout<<"type postive value";
    return y;
    
}
int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    int ans=armstrong(n);
    if(ans==n)
    {
        cout<<"it is a armstrong no";
    }
    else
    {
        cout<<"not armstrong";
    }
    return 0;
}
