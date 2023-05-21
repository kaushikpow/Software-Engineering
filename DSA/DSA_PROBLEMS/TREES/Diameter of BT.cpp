/*
Leetcode: 543
https://www.youtube.com/watch?v=ey7DYc9OANo&ab_channel=Vivekanand-AlgorithmEveryDay
https://www.youtube.com/watch?v=Rezetez59Nk
*/


class Solution {
    int dia = INT_MIN;
public:
    int helper(TreeNode* root) {
        if(!root) return 0;
        int lh = helper(root->left);
        int rh = helper(root->right);
        dia = max(dia,lh+rh);
        return 1 + max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return dia;
    }
};
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
          int l = height(root->left);
          int r = height(root->right);
        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);
        int d;
        d = max(l+r,max(ld,rd));
        return d;
        
    }
    int height(TreeNode* root)
    {
        if(!root) return 0;
        
        int l = height(root->left);
        int r = height(root->right);
        int h;
        if(l>r)
            h = l + 1;
        else
            h = r + 1;
        return h;
    }
};
