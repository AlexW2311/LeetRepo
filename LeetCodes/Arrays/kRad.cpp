
#include <iostream>

std::vector<int> kRadius(std::vector<int>& nums, int k){
    
    if(k == 0){return nums;} // edge case for k=0
    
    std::vector<long long> prefixSum = {nums[0]};
    std::vector<int> avgs(nums.size(), -1);
    
    //for calculating window size
    int right;
    int left;
    
    //preprocessing
    for(int i = 1; i < nums.size(); i++){
        prefixSum.push_back(prefixSum.back() + nums[i]);
    }
    
    
    for(int i = 0; i < nums.size(); i++){
        //calculate LR values and decide what to do
        right = i + k;
        left = i - k;
        
        if(left < 0 || right >= nums.size()){
            continue;
        }
        //long long is wierd but I get it.
        long long calcWindowSum = prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0); // this checks for the edge cases at the beginning
        
        int average = calcWindowSum / (2*k+1); //loses int precision but thats needed
        
        avgs[i] = average; //put the avg in the avg array for a return
    }
    
    
    return avgs;
}
