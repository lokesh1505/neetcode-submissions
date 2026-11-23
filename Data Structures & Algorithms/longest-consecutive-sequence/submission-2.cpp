class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }

        int prev,curr,c_cnt,mx;
        prev = curr = INT_MIN;
        c_cnt = mx = 0;
        for(auto& [key, freq]: m)
        {
            int curr = key;
            if(curr == prev+1){
                c_cnt++;
                prev = curr;
            }
            else{
                mx = max(mx,c_cnt);
                c_cnt=1;
                prev=curr;
            }
        }
        mx = max(mx,c_cnt);
        return mx;
    }
};
