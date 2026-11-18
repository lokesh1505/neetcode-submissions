class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int> frequency;
        for(int i=0; i<n; i++)
        {
            frequency[nums[i]]++;
            if(frequency[nums[i]]>1) return true;
        }
        return false;
    }
};