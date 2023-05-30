#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if(s == "" || s.size() == 1) {
            return true; 
        }

        string temp = "";
        string temp1 = "";

        for(int i = 0; i < s.size(); ++i) {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                temp += s[i];
                temp1 += s[i];
            }
        }
        int n = temp.size();

        string rev = "";
        reverse(temp.begin(), temp.end()); 
        for(int j = 0; j < n; j++) {
            rev += temp[j];
        }

        if(temp1 == rev) {
            return true; 
        }
        else {
            return false; 
        }
        
    }
};