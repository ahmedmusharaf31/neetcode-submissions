class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    //     unordered_map<int,int>mp;

    //     for(int i:nums){
    //         mp[i]++;
    //     }

    //     vector<pair<int,int>> p;
    //     for(auto& it:mp){
    //         p.push_back(it);
    //     }

    //     sort(p.begin(),p.end(),[](
    //         pair<int,int>a, pair<int,int>b){
    //             return a.second>b.second;
    //         }
    //     );

    //     vector<int>res;
    //     int cnt=0;
    //     for(auto it=p.begin(); it!=p.end() && cnt<k; it++,cnt++){
    //         res.push_back(it->first);
    //     }
    //     return res;
    // }

        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> vec(nums.size()+1);
        for(auto& it:mp){
            vec[it.second].push_back(it.first);
        }

        vector<int>res;
        for(int i=vec.size()-1;i>0;i--){
            for(int n:vec[i]){
                res.push_back(n);
                if(res.size()==k){
                    return res;
                }
            }
        }

        return res;
    }
};
