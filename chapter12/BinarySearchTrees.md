# Binary Search Trees
1. Binary Search tree property. Left child should be <= root and right child should be >=root.
2. Tree Walks.
   * Inorder Tree walk or inorder tree traversal. Retrieves the elements in sorted order.
   * Preorder tree walk or traversal.
   * Postorder tree walk or traversal.
   * Level order tree walk or traversal.
   * The time complexity is theta(n) in worst case.
3. Tree terminology.
   * Root node: The topmost node without a parent.
   * Height/depth: Number of levels in the tree.
   * Leaf nodes: The nodes which do not have children.
   * Sibling nodes: A group of nodes with same parent.
   * Degree: The number of subtrees or children of the node.
   * Child node, parent node.
   * Complete binary tree: A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.
   * Full binary tree: A full binary tree (sometimes proper binary tree or 2-tree) is a tree in which every node other than the leaves has two children. 
   * An internal node (also known as an inner node, inode for short, or branch node) is any node of a tree that has child nodes. Similarly, an external node (also known as an outer node, leaf node, or terminal node) is any node that does not have child nodes.
   * Balanced binary tree
     * Weight balanced: 
     * Height balance: 
4. Insertion in BST:
	* Insertion is straight forward.
	* Check if data is less than or greater than root node.
	* If less, then element should be inserted in left subtree, else right subtree.
	* Make the subtree root as root and proceed recursively until you find a place.
5. Deletion in BST:
	* Deletion in BST is not straight forward.
	* If the node is leaf, delete it.
	* If node has only one child, swap the node with its child.
	* If node has two children, the swap the node with the lowest node in the right subtree.
 	

