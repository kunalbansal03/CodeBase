class Solution {
public:
    string solve(string &word){
        vector<int>hash(26,0);
        
        int n = word.length();
        for(int i =0; i < n; i++){
            hash[word[i] - 'a']++;     
        }
        string s = "";

        for(int i = 0; i < 26; i++){
            int freq = hash[i];
            if(freq != 0){
                s += string(freq, i + 'a');
            }
        }
        return s;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string, vector<string>>mp;
        int n = strs.size();
        for(int i = 0; i < n; i++){
            string temp = solve(strs[i]);
            mp[temp].push_back(strs[i]);
        }

        for(auto i: mp){
            result.push_back(i.second);
        }
        return result;
    }
};