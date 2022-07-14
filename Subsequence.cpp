//Tc: O(2^n)
//SC: O(n)
#include<bits/stdc++.h>
#include <iostream>

using namespace std;
void f(int arr[],int n,int index,vector<int> &ds)
{
    if(n<=index)
    {
        for(auto it: ds)
        {
            cout<<it<<" ";
        }
        if(ds.size()==0)cout<<"{}";
        cout<<endl;
        return ;
    }
  
        ds.push_back(arr[index]);
        f(arr,n,index+1,ds);
        ds.pop_back();
        f(arr,n,index+1,ds);
 
}
int main()
{
    int arr[]={3,1,2};
    vector<int> ds;
    int n=3;
    f(arr,n,0,ds);
    return 0;
}
