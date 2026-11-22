class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        int n = nums.size();
        vector<int> suffProduct(n,1);
        vector<int> prefProduct(n,1);
        for(int i=0,j=n-1;i<n;i++,j--)
        {
            if(i==0){
                prefProduct[0]=nums[i];
                suffProduct[n-1]=nums[n-1];
                continue;
            }

            prefProduct[i]= prefProduct[i-1]*nums[i];
            suffProduct[j]= suffProduct[j+1]*nums[j];
        }

        vector<int> product(n,1);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                product[i]=suffProduct[i+1];
                continue;
            }
            if(i==n-1)
            {
                product[i]=prefProduct[i-1];
                continue;
            }

            product[i]=prefProduct[i-1]*suffProduct[i+1];
        }

        return product;
    }
};
