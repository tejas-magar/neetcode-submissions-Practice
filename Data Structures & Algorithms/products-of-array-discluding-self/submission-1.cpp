class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix;
        vector<int>suffix;
        int n=nums.size();
        int proSuf=1;
        int proPre=1;
        for(int i=0;i<n;i++){
            proPre *= nums[i];
            proSuf *= nums[n-i-1];
            prefix.push_back(proPre);
            suffix.push_back(proSuf);
            
        }
        reverse(suffix.begin(),suffix.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            int left = 1;
            int right = 1;

            if(i > 0) {
                left = prefix[i-1];
            }

            if(i < n-1) {
                right = suffix[i+1];
            }

            ans.push_back(left * right);
        }
        return ans;
    }
};
