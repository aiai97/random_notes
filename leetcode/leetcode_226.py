class Solution:
  def invertTree(self,root:TreeNode) ->TreeNode:
    if not root:
      return None
    
    # swap the children
    tmp = root.left
    root.left = root.right
    root.right = root.left
    
    self.invertTree(root.left)
    self.invertTree(root.right)
    
    return root