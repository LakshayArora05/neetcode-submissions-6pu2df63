class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mymap; 
        //key: element
        //value: count of it
        for(int i=0; i<nums.size(); i++)
        {
            mymap[nums[i]]++;
        }

        //put it into temp vector of pairs where first comes count, then element. so it i sortable
        vector<pair<int,int>> freq;
        for(auto& pair : mymap)
        {
            freq.push_back({pair.second, pair.first});
        }

        //sort
        sort(freq.begin(), freq.end());

        //return ans from behind
        vector<int> result;
        for(int i=freq.size()-1; i>=(int)freq.size()-k; i--)
        {
            result.push_back(freq[i].second);
        }
        return result;

    



        
    }
};
