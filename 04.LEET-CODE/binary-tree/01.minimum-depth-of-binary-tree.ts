/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */
// https://youtu.be/5cU1ILGy6dM

const minDepth = (root: any): number => {
  if (!root) return 0;

  if (!root.left && !root.right) return 1;

  if (!root.left || !root.right) {
    return 1 + Math.max(minDepth(root.left), minDepth(root.right));
  }

  return 1 + Math.min(minDepth(root.left), minDepth(root.right));
};

// const root = [3, 9, 20, null, null, 15, 7]; // 2
// const root = null;
const root = [2, null, 3, null, 4, null, 5, null, 6]; // 5

console.log(minDepth(root));
