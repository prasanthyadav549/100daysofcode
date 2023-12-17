/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void in(TreeNode *r, vector<int> &inorder)
    {
        if (!r)
            return;
        in(r->left, inorder);
        inorder.push_back(r->val);
        in(r->right, inorder);
    }
    TreeNode *constructbbst(vector<int> &inorder, int l, int h)
    {
        if (l > h)
            return NULL;
        int mid = (l + h) / 2;
        TreeNode *r = new TreeNode(inorder[mid]);
        r->left = constructbbst(inorder, l, mid - 1);
        r->right = constructbbst(inorder, mid + 1, h);
        return r;
    }
    TreeNode *balanceBST(TreeNode *r)
    {
        vector<int> inorder;
        in(r, inorder);
        return constructbbst(inorder, 0, inorder.size() - 1);
    }
};