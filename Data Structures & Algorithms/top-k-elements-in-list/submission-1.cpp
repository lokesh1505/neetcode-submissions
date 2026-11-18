class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();

        //Step1: Count frequency of each element
        map<int,int> m;
        for(int i=0;i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

        //Step2: Distribute according to frequency(in buckets)
        vector<vector<int>> bucket(n+1);
        for(auto& [num, freq]: m)
        {
            bucket[freq].push_back(num);
        }

        //Step3: return the top k elements
        for(int f=n; f>=1 && ans.size()<k; f--)
        {
            for(auto n: bucket[f])
            {
                ans.push_back(n);
                if(ans.size()>=k) break;
            }
        }

        return ans;
    }
};
