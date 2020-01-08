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
private:
public:

    void preorder(TreeNode *root, vector<int> &v) {
        v.push_back(root->val);
        TreeNode *left = root->left;
        TreeNode *right = root->right;

        if (left != nullptr) {
            preorder(left, v);
        }

        if (right != nullptr) {
            preorder(right, v);
        }
    }

    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> v;

        if (root == nullptr) {
            return v;
        }

        preorder(root, v);

        return v;
    }


};