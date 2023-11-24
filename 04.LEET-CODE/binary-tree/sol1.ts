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

function minDepth(root) {
  // BFS => Breadth First Search
  if (!root) return 0;

  const queue = [root];
  let height = 0;
  while (queue.length) {
    const n = queue.length;
    height++;
    for (let i = 0; i < n; i++) {
      const node = queue.shift();
      if (!node.left && !node.right) return height;
      if (node.left) queue.push(node.left);
      if (node.right) queue.push(node.right);
    }
  }
}

// const root = [3, 9, 20, null, null, 15, 7]; // 2
// const root = null;
const root = [2, null, 3, null, 4, null, 5, null, 6]; // 5

console.log(minDepth(root));
