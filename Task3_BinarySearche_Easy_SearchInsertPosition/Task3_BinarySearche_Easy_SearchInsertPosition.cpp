#include <iostream>
#include <vector>
class Solution {
public:
    static int searchInsert(std::vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, middle;
        while (start <= end) {
            int middle = (start + end) / 2;
            if (nums[middle] == target)
                return middle;
            if (nums[middle] > target) {
                end = middle - 1;
            }
            else {
                start = middle + 1;
            }
        }
        return start;
    }
};
int main()
{
    std::vector<int> nums = { 1, 3, 6 };
    std::cout << Solution::searchInsert(nums, 5);
}
