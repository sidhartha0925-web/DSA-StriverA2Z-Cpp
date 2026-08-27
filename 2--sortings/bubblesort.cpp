//bubble sort

#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int size)
{
     for(int i=0;i<size-1;i++)
{
     for(int j=0;j<size-1-i;j++)
{
     if(a[j]>a[j+1])
{
    swap(a[j],a[j+1]);
}
}
}
}
int main()
{
int a[1000];
int size;
cout<<"enter the size of the array"<<endl;
cin>>size;
cout<<endl<<"enter array elements---"<<endl;
for(int i=0;i<size;i++)
{
cin>>a[i];
}
bubblesort(a,size);
for(int i=0;i<size;i++)
{
cout<<a[i]<<" ";
}
return 0;
}
