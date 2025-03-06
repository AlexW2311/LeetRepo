//
//  reverseString.cpp
//  LeetCodes
//
//  Created by Alexander Williams on 3/5/25.
//

#include <iostream>

void reverseString(std::vector<char>& s){
        int left = 0;
        std::size_t right = s.size()-1;
        
        while (left < right){
            char temp;
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        return; //since its a void you dont need this
}
