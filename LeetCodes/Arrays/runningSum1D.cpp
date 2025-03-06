//
//  runningSum1D.cpp
//  LeetCodes
//
//  Created by Alexander Williams on 3/6/25.
//
#include <iostream>

std::vector<int> runningSum1D(std::vector<int>& nums){
    std::vector<int> prefix = {nums[0]};
    
    for(int i = 1; i < nums.size(); i++){
        prefix.push_back(prefix.back() + nums[i]);
    }
    
    return prefix;
}
