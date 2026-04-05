class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        vector<int>hash(26);
        for(int i = 0; i<n;i++){
            hash[s[i]- 'a']++;
        }
        for(int i = 0; i<t.size();i++){
            hash[t[i] - 'a']--;
        }
        for(auto i: hash){
            if(i != 0) return false;
        }
        return true;
    }
};