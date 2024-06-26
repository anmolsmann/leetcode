#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlen= 0;
        unordered_set<char> st;
        int left = 0;
        if(n == 0){
            return 0;
        }

        for(int i=0; i<n; i++){
            while(st.find(s[i]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            maxlen = max(maxlen, i-left+1);
        }
        return maxlen;
    }
};