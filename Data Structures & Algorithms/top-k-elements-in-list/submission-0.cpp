class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(int a:nums){
            mp[a]++;
        }

        vector<pair<int,int>>my_vec1;

        for(auto& it:mp){
            my_vec1.push_back(it);
        }

        sort(my_vec1.begin(),my_vec1.end(),[](
            pair<int,int>a, pair<int,int>b){
                return a.second>b.second;       
            }
        );

        vector<int>my_vec;

        int cnt=0;
        for(auto it=my_vec1.begin();it!=my_vec1.end() && cnt<k;it++,cnt++){
            my_vec.push_back(it->first);
        }      
        return my_vec;
    }
};
