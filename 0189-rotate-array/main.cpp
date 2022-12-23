#include <iostream>
#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k)
    {
        if (k >= nums.size())
        {
            k = k % nums.size();
        }

        const std::vector<int> temp = nums;

        auto nums_iter { nums.begin() };
        auto temp_iter { temp.end() - k };

        while (temp_iter != temp.end())
        {
            *nums_iter = *temp_iter;

            ++nums_iter;
            ++temp_iter;
        }

        temp_iter = temp.begin();

        while (nums_iter != nums.end())
        {
            *nums_iter = *temp_iter;

            ++nums_iter;
            ++temp_iter;
        }
    }
};

int main()
{
    Solution sol { };
    
    std::vector<int> nums { 1, 2, 3, 4, 5, 6, 7 };
    int k = 3;

    sol.rotate(nums, k);

    for (int i { 0 }; i < nums.size(); ++i)
    {
        std::cout << nums[i] << ", ";
    }

    std::cout << '\n';

    return 0;
}
