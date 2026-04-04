class Solution {
public:
    bool isAnagram(string s, string t) {

        if ( s.length() != t.length() )
        {
            return false;
        }

        unordered_map<char,int> count; //alphabet to its count
        for(int i=0; i<s.length();i++)
        {
         count[s[i]]++;
        }

        //decrement from the map, if all 0 it is anagram
        for(int i=0; i<t.length();i++)
        {
            count[t[i]]--;
            if(count[t[i]] < 0)
                return false;   
         }

         return true;

        
        
    }
};
