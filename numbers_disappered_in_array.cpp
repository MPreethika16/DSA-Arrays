class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
             unordered_set<int>hash_set(begin(nums),end(nums));
             vector<int>res(nums.size()-hash_set.size());
             for(int i=1,j=0;i<=nums.size();i++){
                if(!hash_set.count(i))
                    res[j++]=i;
             }
             return res;
        }
    };