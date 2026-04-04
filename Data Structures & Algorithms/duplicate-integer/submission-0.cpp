#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

      unordered_set<int> duplicatefinder;
      for(int i=0; i<nums.size(); i++)
      {
        if (duplicatefinder.count(nums[i])>0)
                {
                    //we have seen it before
                    return true;
                }
          duplicatefinder.insert(nums[i]);

      }
      return false;
        
    }
};