#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target)
    {
        for (size_t i { 0 }; i < nums.size(); ++i)
        {
            for (size_t j { i + 1 }; j < nums.size(); ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return { static_cast<int>(i), static_cast<int>(j) };
                }
            }
        }

        return { 0 };
    }
};

void test_case(Solution sol, const std::vector<int>& nums, int target, int case_num)
{
    std::cout << "Case " << case_num <<  ":\n";

    auto result { sol.twoSum(nums, target) };

    for (int i { 0 }; i < result.size(); ++i)
    {
        std::cout << result[i] << ", ";
    }
    
    std::cout << '\n';
}

int main()
{
    Solution sol { };

    test_case(sol, { 2, 7, 11, 15 }, 9, 1);

    test_case(sol, { 3, 2, 4 }, 6, 2);

    test_case(sol, { 3, 3 }, 6, 3);

    return 0;
}
