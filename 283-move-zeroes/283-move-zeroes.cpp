class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int size=nums.size();
    for (int i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            nums[count++] = nums[i];
        }
    }
    for (int i = count; i < size; i++)
    {
        nums[i] = 0;
    }
        
    }
};