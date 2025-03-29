//
//  pangram.cpp
//  LeetCodes
//
//  Created by Alexander Williams on 3/29/25.
//

#include <iostream>

bool isPangram(std::string sentence){
    bool pangram = false;
    //iterate over string, add each character to map and give it a true in bool.
    //then check if hashmap as 26 different keys
    std::unordered_map<char, int> hashmap;
    
    for(int i = 0; i < sentence.length(); i++){
        if (hashmap.find(sentence[i]) != hashmap.end()){
            continue;
        }
        else{
            hashmap[sentence[i]];
        }
        if (hashmap.size() == 26){
            pangram = true;
        }
    }
    return pangram;
}
