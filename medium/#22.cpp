//自己的解法
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        if(n == 1){
            return {"()"};
        }
        vector<string> tmp = generateParenthesis(n-1);
        for( string i : tmp){ 
        //加嵌套
        string a = '(' + i + ')';
        res.push_back(a);
        //加左并排
        string b = "()" + i;
        res.push_back(b);
        //加右并排
        string c = i + "()";
        res.push_back(c); 
        }
        res.pop_back();
        return res;
    }
};
//回溯法
class Solution {
    void backtrack(vector<string>& ans, string& cur, int open, int close, int n) {
        if (cur.size() == n * 2) {
            ans.push_back(cur);
            return;
        }
        if (open < n) {
            cur.push_back('(');
            backtrack(ans, cur, open + 1, close, n);
            cur.pop_back();
        }
        if (close < open) {
            cur.push_back(')');
            backtrack(ans, cur, open, close + 1, n);
            cur.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        backtrack(result, current, 0, 0, n);
        return result;
    }
};