/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    void postOrder(TreeNode *root, vector<int> &v) {
        TreeNode *left = root->left;
        TreeNode *right = root->right;

        if (left != nullptr) {
            postOrder(left, v);
        }

        if (right != nullptr) {
            postOrder(right, v);
        }

        v.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> v;

        if (root == nullptr) {
            return v;
        }

        postOrder(root, v);

        return v;
    }

};