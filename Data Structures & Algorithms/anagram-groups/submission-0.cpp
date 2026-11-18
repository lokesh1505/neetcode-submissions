class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> m;

        for(int i=0;i<strs.size();i++)
        {
            string s = strs[i];
            //int freq[26] = {0};
            vector<int> freq(26,0);
            for(int j=0;j<strs[i].length(); j++)
            {
                freq[strs[i][j]-'a']++;
            }
            m[freq].push_back(strs[i]);
        }

        for(const auto& [freq, str_arr]: m)
        {
            ans.push_back(str_arr);
        }

        return ans;
    }
};
