class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(int i=0;i<strs.size();i++){
            string copy=strs[i];
            sort(copy.begin(),copy.end());
            mp[copy].push_back({strs[i]}); // act->cat
        }

        vector<vector<string>> my_vec;
        for(auto& it:mp){
            my_vec.push_back({it.second});
        }

        return my_vec;
    }
};
