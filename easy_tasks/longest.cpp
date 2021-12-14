#include <iostream>
#include <vector>

using namespace std;
	
int main() {
    class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            
            if (strs.size() == 0) {
                return "";
            } 
            else {
                string prefix = strs[0];
                int size = strs.size();
                
                for (int i = 1; i < size; ++i) {
                    for (int j = 0; j < prefix.size(); ++j) {
                        if (j == strs[i].size() || prefix[j] != strs[i][j]) {
                            prefix = prefix.substr(0, j);
                            break;
                        };
                    };
                };
            return prefix;
            };
        };
    };
};