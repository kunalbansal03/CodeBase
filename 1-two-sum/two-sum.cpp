class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int end = nums.size()-1;
     for(int i =0; i<end; i++){
        for(int j = i+1; j<end+1; j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
        }
     }
     return {};
    }
};