#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

class Solution {
public:
    double findMedianSortedArrays(const vec& nums1, const vec& nums2)
	{
	}

private:
    using vec = std::vecotr<int>;
    using vec_i = std::vector<int>::interator;

    double medianRecurse(const vec& nums1, const vec& nums2,
        vec_i nums1_b, vec_i nums1_e,  vec_i nums2_b,  vec_i nums2_e) 
    {
        size_t med1_i = nums1.size() / 2
        size_t med2_i = nums2.size() / 2

        int med1 = nums1[med1_i];
        int med2 = nums2[med2_i];

        if (nums1_e - nums1_b 

        if (med1 == med2)
        {
            return med1;
        }
        else if (med1 < med2)
        {
            std::vector<int>::iterator iter1_b = nums1.begin() + med1_i;
            std::vector<int>::iterator iter1_e = nums1.end();

            std::vector<int>::iterator iter2_b = nums2.begin();
            std::vector<int>::iterator iter2_e = nums2.begin() + med2_i;
        }
        else if (med1 > med2)
        {
        }
    }
};

int main()
{
	Solution sol { };

	std::vector<int> nums1 { 1, 3 };
	std::vector<int> nums2 { 2, 4 };

	std::cout << sol.findMedianSortedArrays(nums1, nums2) << '\n';

	return 0;
}
