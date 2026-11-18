class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mpp;
        for(int n : nums){
            mpp[n]++;
        }
       vector<pair<int,int>>vec;
       for(auto it: mpp){
        vec.push_back({it.second,it.first});
       }
       sort(vec.begin(),vec.end());
       for(int i=0;i<k;i++){
        ans.push_back(vec[vec.size()-1-i].second);
       }
        return ans;
    }
};
