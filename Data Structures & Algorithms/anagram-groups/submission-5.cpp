class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     unordered_map<string,vector<string>> mp;

    //     for(int i=0;i<strs.size();i++){
    //         string copy=strs[i];
    //         sort(copy.begin(),copy.end());
    //         mp[copy].push_back({strs[i]}); // act->cat
    //     }

    //     vector<vector<string>> my_vec;
    //     for(auto& it:mp){
    //         my_vec.push_back({it.second});
    //     }

    //     return my_vec;
    // }

        unordered_map<string,vector<string>> mp;

        for(int i=0;i<strs.size();i++){
            vector<int> cnt(26,0);
            for(char c:strs[i]){
                cnt[c-'a']++;
            }

            string sorted=to_string(cnt[0]);
            for(int i=1;i<26;i++){
                sorted+=','+to_string(cnt[i]);
            }

            mp[sorted].push_back(strs[i]); // act->cat
        }

        vector<vector<string>> res;
        for(auto& it:mp){
            res.push_back(it.second);
        }

        return res;
    }
};
