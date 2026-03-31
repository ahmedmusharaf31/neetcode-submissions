class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //     map<int,int> mp;
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }

    //     for(auto& it:mp){
    //         if(it.second>1){
    //             return true;
    //         }
    //     }
    //     return false;
    // }



    // return unordered_set<int>(nums.begin(),nums.end()).size()<nums.size();
    // }

    unordered_set<int> ahmed;

    for(int i=0;i<nums.size();i++){
        if(ahmed.count(nums[i])){
            return true;
        }
        ahmed.insert(nums[i]);
    }
    return false;
    
    }
};
