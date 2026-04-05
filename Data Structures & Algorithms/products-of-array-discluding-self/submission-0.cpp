class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int productright = 1;
        int productleft =1;
        vector<int> lefts;
        vector<int> rights(nums.size(), 1);        

        for (int i = 0; i < nums.size(); i++)
        {
            lefts.push_back(productleft);  // store product of everything BEFORE i
            productleft *= nums[i];        // update for next iteration
        }

        for (int i = nums.size()-1; i >= 0; i--)
        {
            rights[i] = productright;
            productright *= nums[i];
        }
       vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++)
            result[i] = lefts[i] * rights[i];
        return result;
        
    }
};
