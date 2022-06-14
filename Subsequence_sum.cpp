//Print all the subsequence whose sum =2
//TC:O(2^n*n)
//SC: O(n)

#include<bits/stdc++.h>
using namespace std;
void powerset(int arr[], vector<int> &ans, int index ,int n, int sum, int s)
{
    //If array has only poitive numbers then we can decrease tc by adding the below condition
    if(s>sum)
        return;

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


//TO print only one subsequence

bool powerset(int arr[], vector<int> &ans, int index ,int n, int sum, int s)
{

    if(index==n)
    {
        if(s==sum)
        {
            for(auto it:ans)
            cout<<it<<" ";
            cout<<endl;
            return true;
        }
        
        return false;
    }
    
    ans.push_back(arr[index]);
    s+=arr[index];
    if(powerset(arr,ans,index+1,n,sum,s)==true) return true;
    ans.pop_back();
    s-=arr[index];
    if(powerset(arr,ans,index+1,n,sum,s)==true) return true;
    return false;
}
//Same main functiona as above



//TO count the no of subsequence whose sum is given

#include<bits/stdc++.h>
using namespace std;
int powerset(int arr[], int index ,int n, int sum, int s)
{

    if(index==n)
    {
        if(s==sum)
        {
            return 1;
        }
        
        return 0;
    }
    
    s+=arr[index];
    int l=powerset(arr,index+1,n,sum,s);

    s-=arr[index];
    int r=powerset(arr,index+1,n,sum,s);
    
    return l+r;
}
int main()
{
   int arr[]={1,2,1};
   cout<<powerset(arr,0,3,2,0);
    return 0;
}
