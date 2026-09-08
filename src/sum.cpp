// src/sum.cpp

#include "sum.h"
#include <vector>
#include <iostream>


int sum( const std::vector<int>& nums ) {
    int sum = 0;

    for( auto i{0}; i < nums.size(); ++i) {
        sum += nums[i];
    }

    return sum;
}
