class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp; // value -> index
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (mpp.count(x)) {
                return {mpp[x], i};
            }
            mpp[nums[i]] = i;
        }
        return {}; // never reached (guaranteed one solution)
    }
};