//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//Example:
//
//Given nums = [2, 7, 11, 15], target = 9,
//
//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

//  Created by Pramendra Rathi on 06/08/19.
//  Copyright © 2019 Pramendra Rathi. All rights reserved.
//

#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int , int> _dict;
        _dict.reserve(nums.size());
        for(vector<int>::iterator it= nums.begin() ; it != nums.end() ; ++it)
        {
            int value = *it;
            unordered_map<int, int>::const_iterator itd = _dict.find(target-value);
            if( itd != _dict.end())
            {
                return vector<int>{itd->second, it -nums.begin() };
            }
            else
            {
                _dict[value] = it- nums.begin();
            }
        }
        return vector<int>();
    }
};
