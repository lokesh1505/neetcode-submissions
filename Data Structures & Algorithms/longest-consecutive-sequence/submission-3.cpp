class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());
        int longest = 0;
        for(int n: numSet)
        {
            if(numSet.count(n-1)!=0) continue;
            int length=1; 
            while(numSet.count(n+length)!=0) length++;
            longest = max(longest,length);
        }

        return longest;
    }
};
