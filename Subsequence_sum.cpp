#include<bits/stdc++.h>
using namespace std;
void powerset(int arr[], vector<int> &ans, int index ,int n, int sum, int s)
{

    if(index==n)
    {
        if(s==sum)
        {
            for(auto it:ans)
            cout<<it<<" ";
            cout<<endl;
        }
        
        return;
    }
    
    ans.push_back(arr[index]);
    s+=arr[index];
    powerset(arr,ans,index+1,n,sum,s);
    ans.pop_back();
    s-=arr[index];
    powerset(arr,ans,index+1,n,sum,s);
}
int main()
{
   int arr[]={1,2,1};
   vector<int>ans;
   powerset(arr,ans,0,3,2,0);
    return 0;
}
