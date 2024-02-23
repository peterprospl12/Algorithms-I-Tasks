#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if(s.length() == 1) {
            return 1;
        }
        std::unordered_map<char, int> map;
        int left = 0;
        int right = 0;
        int max_length = 0;
        while(right != s.length()) {
            if(map.find(s[right]) == nullptr) {
                map[s[right]] = 0;
                right +=1;
            }
            else {
                while(map.find(s[right]) != nullptr) {
                    map.erase(s[left++]);
                }

            }
            if(right - left > max_length) {
                max_length = right-left;
            }
        }
        return max_length;


    }
};

/*
*        Another implementation with array
* int lengthOfLongestSubstring(std::string s) {
        if (s.length() == 0)
            return 0;

        if (s.length() == 1)
            return 1;

        int maxLength = 0;
        bool visited[256] = { false };

        int left = 0, right = 0;
        while (right < s.length()) {

            if (visited[s[right]] == true) {
                while (visited[s[right]] == true) {

                    visited[s[left]] = false;
                    left++;
                }
            }

            visited[s[right]] = true;
            maxLength = std::max(maxLength, (right - left + 1));
            right++;
        }
        return maxLength;
    }
 *
 *
 *
 *
 *
 */

int main() {

    Solution s;
    std::cout << s.lengthOfLongestSubstring("abcabcabb");


}