class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n-2;i++)
        {
            int l = i+1;
            int r = n-1;
            while(l<r)
            {
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == 0)
                {
                    vector<int> temp={nums[i],nums[l],nums[r]};
                    s.insert(temp);

                    do{ l++;} while(nums[l]==nums[l-1] && l<r);
                    do{r--;} while(nums[r] == nums[r+1] && r>l);
                }
                else if(sum < 0)
                {   
                    do{ l++;} while(nums[l]==nums[l-1] && l<r);
                }
                else{
                    do{r--;} while(nums[r] == nums[r+1] && r>l);
                }
            }
        }
        vector<vector<int>> ans;
        for(auto arr: s)
        {
            ans.push_back(arr);
        }
        return ans;
    }
};
