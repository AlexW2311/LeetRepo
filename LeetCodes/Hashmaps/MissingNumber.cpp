//
//  MissingNumber.cpp
//  LeetCodes
//
//  Created by Alexander Williams on 3/29/25.
//

#include <iostream>
#include <algorithm>
#include <map>
int missingNumber(std::vector<int>& nums) {

    std::map<int, int> hashMap;
    std::sort(nums.begin(), nums.end());
    
    for( int i = 0; i < nums.size(); i++){
        hashMap[i] = nums[i];
        if (i != nums[i]){
            return i;
        }
    }
    
    return nums.size();
    
    
}
