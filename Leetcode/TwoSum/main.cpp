#include <iostream>
#include <unordered_map>
#include <vector>

using std::vector;

//              O(n) solutin
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;

        for(int i=0;i<nums.size();i++) {
            if(map.find(target - nums[i]) != nullptr) {
                return {map[target - nums[i]], i};
            }
            map.insert(std::make_pair(nums[i],i));
        }
        return {0,0};
    }
};

/*             O(n^2) solution
class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
for(int i=0;i<nums.size();i++) {
for(int j=i+1;j<nums.size();j++) {
if(nums[i] + nums[j] == target) {
return vector{i,j};
}
}
}
return vector{0};
}
};
*/


int main() {
    Solution x;
    std::vector<int> a = {3,2,4};
    std::vector<int> result = x.twoSum(a, 6);

    // Display the result
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}
