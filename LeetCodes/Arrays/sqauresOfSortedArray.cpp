//
//  sqauresOfSortedArray.cpp
//  LeetCodes
//
//  Created by Alexander Williams on 3/5/25.
//

#include <iostream>

std::vector<int> sortedSquares(std::vector<int>& nums) {
        int left = 0; int right = nums.size()-1;
        int pos = nums.size()-1;
        std::vector<int> result(nums.size());
       
        while(left <= right){
            if (abs(nums[left]) > abs(nums[right])){
                result[pos] = nums[left]*nums[left];
                left++;
            }
            else
            {
                result[pos] = nums[right]*nums[right];
                right--;
            }
            pos--;
        }
        return result;
    }
