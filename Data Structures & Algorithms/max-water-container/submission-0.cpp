class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_cap = INT_MIN;
        int l = 0;
        int r = heights.size()-1;

        while(l<r)
        {
            int min_height = min(heights[l], heights[r]);
            int curr_cap = min_height * (r-l);
            max_cap = max(max_cap, curr_cap);

            if(heights[l]<heights[r]) l++;
            else r--;
        }

        return max_cap;
    }
};
