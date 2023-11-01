class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int m = nums.size();
        int i = 0,n=0;
        while(i<m){
            if(nums[i]!=0){
                swap(nums[i],nums[n]);
                n++;
            }
            i++;
        }
    }
};
