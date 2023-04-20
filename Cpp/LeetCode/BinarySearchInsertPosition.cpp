// https://leetcode.com/problems/search-insert-position/description/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left_index = 0;
        int right_index = nums.size() - 1;
        int middle_index = (left_index + right_index) / 2;
        while (nums[middle_index] != target) {
            if(abs(left_index - right_index) <= 1) {
                if (target < nums[left_index]) {
                    return left_index;
                }
                else if (target > nums[right_index]) {
                    return right_index + 1;
                }
                else {
                    return right_index;
                }
            }
            if (nums[middle_index] > target) {;
                right_index = middle_index;   
            }
            else {
                left_index = middle_index;
            }
            middle_index = (left_index + right_index) / 2;
        }
        if(nums[middle_index] == target) {
            return middle_index;
        }
        return -1;
    }
};
