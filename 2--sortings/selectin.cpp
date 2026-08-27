#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int size)
{
    int i,j,small=0;
    for(i=0;i<size-1;i++)
    {
        small=i;
        for(j=i+1;j<size;j++)
        {
            if(a[small]>a[j])
            {
                small=j;
            }
        }
        swap(a[small],a[i]);
    }
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    const int MAX_SIZE = 1000;
    int a[MAX_SIZE];
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter array elements---";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    selectionsort(a,size);
    return 0;
}