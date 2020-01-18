//
// Created by jelly on 18/01/2020.
//

class Solution {
private:
public:
    void preorder(TreeNode *root, vector<int> &v) {
        Stack <TreeNode> s = new Stack<TreeNode>();
        s.push(root)
        TreeNode n;

        while (!s.empty()) {
            n = s.pop();

            if (n.right != nullptr) {
                s.push(n.right);
            }

            if (n.left != nullptr) {
                s.push(n.left);
            }
        }
    }
}