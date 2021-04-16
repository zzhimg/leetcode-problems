class Solution {
public:
    int ans;
    int depth(TreeNode* root){
        if(root == nullptr) return 0;
        int L = depth(root->left);
        int R = depth(root->right); 
        ans = max(ans,L + R + 1);
        return max(L,R) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1;
        depth(root);
        return ans-1;
    }
};