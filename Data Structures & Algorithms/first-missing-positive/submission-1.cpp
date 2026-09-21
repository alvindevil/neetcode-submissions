class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m1; 
        int smallest = 1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] >=0){
                smallest = min(smallest, nums[i]);
                m1[nums[i]] = i;
            }
        }
        while(m1.count(smallest)){
            smallest = smallest+1;
        }
        return smallest;
        
    }
};