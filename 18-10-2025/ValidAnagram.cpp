class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()<t.size()) {
            return false;
        }
        else if (t.size()<s.size()){ 
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (bool(s==t));
    }
};