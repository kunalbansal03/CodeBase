class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        int l = 0;
        int r = nums.size() - 1;

        while(l<r){
            int total = nums[l] + nums[r];
            sum = max(total, sum);
            l++;
            r--;
        }
        return sum;
    }
};