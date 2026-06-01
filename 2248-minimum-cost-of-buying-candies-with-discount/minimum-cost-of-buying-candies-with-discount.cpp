class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(), cost.end());
        int total = accumulate(cost.begin(), cost.end(),0);

        for(int i = n-3; i >=0; i-=3){
            total = total - cost[i];
        }
        return total;
    }
};