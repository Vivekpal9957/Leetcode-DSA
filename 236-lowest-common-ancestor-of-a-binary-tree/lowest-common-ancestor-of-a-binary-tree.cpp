class Solution {
public:
    TreeNode* ans = NULL;
    int funct(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == NULL) return 0;

        int left1 = funct(root->left, p, q);
        int right1 = funct(root->right, p, q);

        int self = 0;
        if(root == p || root == q) {
            self = 1;
        }
        int total = left1 + right1+ self;
        if(total == 2 && ans == NULL){
            ans = root;

        }
        return total;

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        funct(root, p, q);
        return ans;
    }   
};