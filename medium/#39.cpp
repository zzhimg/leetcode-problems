class Solution {
public:
    void dfs(vector<vector<int>> &res,vector<int> &cur,vector<int> &candidates,int index,int target){
        if(index == candidates.size()){
            return;
        }
        if(target == 0){
            res.push_back(cur);
            return;
        }
        //跳过的情况
        dfs(res,cur,candidates,index + 1,target);
        if(candidates[index] <= target){
            //不跳过的情况
            cur.push_back(candidates[index]);
            dfs(res,cur,candidates,index,target - candidates[index]);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        int index = 0;
        vector<int> cur;
        dfs(res,cur,candidates,index,target);
        return res;
    }
};