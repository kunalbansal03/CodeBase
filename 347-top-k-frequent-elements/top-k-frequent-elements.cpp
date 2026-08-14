class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();

        unordered_map<int,int>mp;

        for(auto i: nums){
            mp[i]++;
        }

        vector<vector<int>>bucket(n+1);

        for(auto it: mp){
            int val = it.first;
            int freq = it.second;

            bucket[freq].push_back(val);
        }

        vector<int>result;

        for(int i=n; i >=0; i--){
            
            while(bucket[i].size()>0 && k > 0){
                result.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
            
        }
        return result;
    }
};