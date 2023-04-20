// https://leetcode.com/problems/remove-element/description/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int temp, duplicates, other;
        temp = duplicates = other = 0;
        for(int i = 0; i < nums.size() - duplicates; i++) {
            if (nums[i] == val) {
                duplicates++;
                temp = nums[nums.size()-duplicates];
                nums[nums.size()-duplicates] = nums[i];
                nums[i] = temp;
                i--;
            }
            else {
              other++;  
            }
        }
        return other;
    }
};
