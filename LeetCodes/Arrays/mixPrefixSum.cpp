//
//  mixPrefixSum.cpp
//  LeetCodes
//
//  Created by Alexander Williams on 3/6/25.
//
#include <iostream>

int minStartValue(std::vector<int>& nums){
    int sum = 0; int minPrefixSum = 1;
            
    for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            minPrefixSum = std::min(sum, minPrefixSum);
            }
            if(minPrefixSum > 0){return 1;}
            return -1*minPrefixSum + 1;  //make neg a positive and add 1 to get minValue needed
            
            
    }
