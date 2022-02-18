class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int r = 0;
        for(int i=0; i<nums.size()-r; i++) {
            if(nums[i] == val) {
                r++;
                for(int j=i; j < nums.size()-1; j++) {
                    swap(nums[j],nums[j+1]);
                }
                i--;
            }
        }
        return nums.size() - r;
        
    }
};