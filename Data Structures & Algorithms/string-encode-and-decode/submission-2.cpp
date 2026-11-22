class Solution {
public:

    string encode(vector<string>& strs) {
        string encode="";
        for(int i=0;i<strs.size();i++)
        {
            string curr = strs[i];
            int length = curr.length();
            encode = encode + to_string(length);
            encode = encode + "#";
            encode = encode + strs[i];
        }
        cout<<encode<<endl;
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        if(s=="") return ans;
        int i =0;
        while(i<s.size())
        {
            string len = "";
            while(s[i]!='#')
            {
                len = len+s[i];
                i++;
            }
            i++;
            int length = stoi(len);
            string curr = s.substr(i,length);
            cout<<curr<<endl;
            ans.push_back(curr);
            i=i+length;
        }
        return ans;
    }
};
