//https://leetcode.com/problems/move-zeroes/
//my method
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                vector<int>:: iterator it;
                it=nums.begin()+i;
                nums.erase(it);
                i--;
            }
        }
        while(c--){
            nums.push_back(0);
        }
    }
};
