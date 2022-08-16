//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(nums[i-1]>nums[i%n])
                count++;
        }
        if(count<=1){
            return 1;
        }
        else{
            return 0;
        }
    }
};
