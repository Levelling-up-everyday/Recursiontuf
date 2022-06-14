//https://takeuforward.org/data-structure/combination-sum-1/
//https://leetcode.com/problems/combination-sum/submissions/
//Time Complexity: O(2^t * k) where t is the target, k is the average length
//SC :O(k*x)

class Solution {
public:
    void f(int index,int target,vector<int> &arr,vector<vector<int>> &ans, vector<int> &ds)
{
    if(index==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
         }
        return;
    }
    if(arr[index]<=target)
    {
        ds.push_back(arr[index]);
        f(index,target-arr[index],arr,ans,ds);
         ds.pop_back();
    }
        f(index+1,target,arr,ans,ds);        

}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(0,target,candidates,ans,ds);
        return ans;
    }
};
