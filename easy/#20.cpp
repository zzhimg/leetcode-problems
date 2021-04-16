class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> table = {
            {')','('},
            {']','['},
            {'}','{'},
        };
        stack<char> stk;
        for(char ch:s){
            if(table.count(ch)){
                if(stk.empty() || stk.top() != table[ch]){
                    return false;
                }
                stk.pop();
            }
            else{
                stk.push(ch);
            }
        }
            return stk.empty();
        }
};