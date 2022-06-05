//Arrays are passsed using refrence automatiacally
#include<bits/stdc++.h>
using namespace std;
void f(int arr[],int i,int n)
{
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    f(arr,i+1,n);
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];
    f(arr,0,size);
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}
