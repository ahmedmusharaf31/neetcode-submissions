class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(int i:nums){
            mp[i]++;
        }

        vector<pair<int,int>> p;
        for(auto& it:mp){
            p.push_back(it);
        }

        sort(p.begin(),p.end(),[](
            pair<int,int>a, pair<int,int>b){
                return a.second>b.second;
            }
        );

        vector<int>res;
        int cnt=0;
        for(auto it=p.begin(); it!=p.end() && cnt<k; it++,cnt++){
            res.push_back(it->first);
        }
        return res;
    }
};
