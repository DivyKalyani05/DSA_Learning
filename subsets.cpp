class Solution {
public:
    void solve(vector<int>& nums,int start,vector<int>&ans,vector<vector<int>>& output){
        if (start>nums.size()-1){
            output.push_back(ans);
            return;
        }

        ans.push_back(nums[start]);

        solve (nums,start+1,ans,output);

        ans.pop_back();
        

        solve(nums,start+1,ans,output);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> ans;
        solve (nums,0,ans,output);
        
        return output;
    }
};
