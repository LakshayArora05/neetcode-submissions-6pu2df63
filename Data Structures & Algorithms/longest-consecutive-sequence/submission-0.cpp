class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> probableStarts;
        for(int i=0; i< nums.size();i++)
        {
            probableStarts.insert(nums[i]);            
        }

            int maxLen = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (!probableStarts.count(nums[i] - 1)) // num-1 doesn't exist = it's a start
                {
                    int len = 1;
                    while (probableStarts.count(nums[i] + len))
                        len++;
                    maxLen = max(maxLen, len);
                }
            }

            return maxLen;
        
        
    }
};
