class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length();
        int cnt=0;

        while(i<j)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i] >='A' && s[i] <='Z') || (s[i]>='0' && s[i]<='9')){
                if((s[j]>='a' && s[j]<='z') || (s[j] >='A' && s[j] <='Z') || (s[j]>='0' && s[j]<='9'))
                {
                    if(tolower(s[i])==tolower(s[j]))
                    {
                        i++;
                        j--;
                        cnt++;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    j--;
                }
            }
            else{
                i++;
            }
        }
        //if(cnt == 0) return false;

        return true;
    }
};
