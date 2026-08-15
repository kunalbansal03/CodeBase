class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }


        for(auto i: mp){
            int el = i.first;
            int freq = i.second;

            if(freq > n/2) return el;
        }
        return 0;
    }
};