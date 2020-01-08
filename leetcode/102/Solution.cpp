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

    void order(TreeNode *root, vector <vector<int>> &v, int level) {
        if (level >= v.size()) {
            vector<int> nv;
            v.push_back(nv);
        }
        v[level].push_back(root->val);
        if (root->left)
            order(root->left, v, level + 1);
        if (root->right)
            order(root->right, v, level + 1);

    }

    vector <vector<int>> levelOrder(TreeNode *root) {
        vector <vector<int>> v;
        if (root == nullptr) return v;
        order(root, v, 0);
        return v;
    }
};