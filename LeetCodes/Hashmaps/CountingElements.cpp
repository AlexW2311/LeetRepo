//
//  CountingElements.cpp
//  LeetCodes
//
//  Created by Alexander Williams on 3/30/25.
//

#include <vector>
#include <algorithm>
#include <unordered_map>
//Given an integer array arr, count how many elements x there are, such that x + 1 is also in arr. If there are duplicates in arr, count them separately.
int countElems(std::vector<int>& arr){
    std::unordered_map<int, int> hashmap;
    int count = 0;
    for (int i: arr){
        hashmap[i]++;    //should create a new key or add to exiting value
    }
    
    for(const auto& pair : hashmap){
        int currentKey = pair.first;
        if(hashmap.find(currentKey+1) != hashmap.end()){
            //add all the values to the count
            count += pair.second;
        }
    }
    
    return count;
}
