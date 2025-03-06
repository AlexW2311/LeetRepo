//
//  MaxConsecutiveOnes.cpp
//  LeetCodes
//
//  Created by Alexander Williams on 3/4/25.
//

#include <iostream>


int maxConsecOnes(std::vector<int>& nums, int k){
    int left = 0;
    int flippedZeros = 0;
    int answer = 0;
    
    for(int right = 0; right < nums.size(); right++){
        if(nums[right] == 0){
            flippedZeros += 1;
        }
        
        while (flippedZeros > k){
            if(nums[left] == 0){
                flippedZeros -= 1;
            }
            left++;
        }
        int windowSize = right - left +1;
        answer = std::max(answer, windowSize);
    }
    return answer;
}
//001011011111
