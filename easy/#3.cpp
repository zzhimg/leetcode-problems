class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int l = 0;
        int rk = -1;
        for(int i = 0; i < s.length(); i++){
            if(i != 0){
                set.erase(s[i -1 ]);
            }
            while( !set.count(s[rk+1]) && rk+1 <s.length() ){
                set.insert(s[rk+1]);
                rk++;
            }
            l = max( rk - i +1 ,l);
        }
        return l;
    }
};