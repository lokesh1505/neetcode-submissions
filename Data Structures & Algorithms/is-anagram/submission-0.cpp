class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int num[26]={0};
        for(int i=0;i<s.size();i++)
        {
            num[s[i]-'a']++;
            num[t[i]-'a']--;
        }

        for(int i=0;i<26;i++)
        {
            if(num[i] != 0) return false;
        }
        return true;

    }
};
