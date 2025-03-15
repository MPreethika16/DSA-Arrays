class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int> result = nums;
            int n=nums.size();
            unordered_map<int, int> map;
            sort(result.begin(), result.end());
            for(int i=nums.size()-1; i>=0; i--)
                map[result[i]] = i;
            for(int i=0; i<n; i++)
                nums[i] = map[nums[i]];
            return nums;
        }
    };