//Apporach 1
class Solution {
public:
void f(vector<int> arr, vector<vector<int>> &ans, vector<int> ds, int index,int fre[])
    {
        if(ds.size()==arr.size())
        {
            ans.push_back(ds);
            return;
         }
        for(int i=0;i<arr.size();i++)
        {
            if(fre[i]==0)
            {
                ds.push_back(arr[i]);
                fre[i]=1;
                f(arr,ans,ds,index+1,fre);
                fre[i]=0;
                ds.pop_back();
               }
         }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
           int freq[nums.size()];
      for (int i = 0; i < nums.size(); i++) freq[i] = 0;
        f(nums,ans,ds,0,freq);
        return ans;
        
    }
};


//Apporach 2 optimised
