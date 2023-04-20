// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val = nums[0];
        int uniques = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            }
            else {
                uniques++;
                val = nums[i];
            }
        }
        return uniques;
    }
};
