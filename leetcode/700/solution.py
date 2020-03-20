# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution:
    def searchBST(self, root: TreeNode, val: int) -> TreeNode:
        if root is None:
            return root

        if root.val == val:
            return root

        if root.left is not None:
            node = self.searchBST(root.left, val)
            if node:
                return node

        if root.right is not None:
            node = self.searchBST(root.right, val)
            if node:
                return node

        return None
