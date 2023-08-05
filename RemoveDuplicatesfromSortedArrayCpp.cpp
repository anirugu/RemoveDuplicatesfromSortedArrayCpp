// RemoveDuplicatesfromSortedArrayCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		for (int i = 1; i < nums.size(); i++) {
			auto current = nums[i];
			auto previous = nums[i - 1];
			if (current == previous) {
				nums.erase(nums.begin() + i+1);
				i--;
			}
		}
		return nums.size();
	}
};

int main()
{
	//auto value = std::vector<int>{1, 2, 3, 4, 4, 5, 5};
	auto value = std::vector<int>{ 0,1,1,2,3,4 };

	Solution sol;
	int result = sol.removeDuplicates(value);
	std::cout << "Hello World!\n";
}
