#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev_no = 0; 
        for(int i = 31; i >= 0; i--) {
            rev_no |= (n & 1) <<i;
            n >>= 1;
        }
        return rev_no; 
    }
};

