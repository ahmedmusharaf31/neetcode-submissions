class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pref=1;

        vector<int> res(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            pref*=nums[i-1];
            res[i]*=pref;
        }

        int suff=1;
        for(int i=nums.size()-2;i>=0;i--){
            suff*=nums[i+1];
            res[i]*=suff;
        }

        return res;
    }
};
