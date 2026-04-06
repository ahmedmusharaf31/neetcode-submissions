class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }

        int ans=0;
        for(int a:nums){
            if(s.count(a-1)){
                continue;
            }

            int len=1;
            int curr=a;
            while(s.count(curr+1)){
                curr++;
                len++;
            }

            ans=max(ans,len);
        }
        return ans;
    }
};
