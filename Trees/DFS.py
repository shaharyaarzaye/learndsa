# Define the node of BST
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

# Define the BST itself
class BST:
    def __init__(self):
        self.root = None

    # Insert function
    def insert(self, value):
        if not self.root:
            self.root = Node(value)
        else:
            self._insert(self.root, value)

    def _insert(self, current_node, value):
        if value < current_node.value:
            if current_node.left is None:
                current_node.left = Node(value)
            else:
                self._insert(current_node.left, value)
        else:
            if current_node.right is None:
                current_node.right = Node(value)
            else:
                self._insert(current_node.right, value)

    # DFS Traversal (in-order, pre-order, post-order)

    # In-order (Left, Root, Right)
    def inorder(self, node):
        if node:
            self.inorder(node.left)
            print(node.value, end=' ')
            self.inorder(node.right)

    # Pre-order (Root, Left, Right)
    def preorder(self, node):
        if node:
            print(node.value, end=' ')
            self.preorder(node.left)
            self.preorder(node.right)

    # Post-order (Left, Right, Root)
    def postorder(self, node):
        if node:
            self.postorder(node.left)
            self.postorder(node.right)
            print(node.value, end=' ')

# Usage
bst = BST()
values = [50, 30, 70, 20, 40, 60, 80]
for val in values:
    bst.insert(val)

print("Inorder traversal:")
bst.inorder(bst.root)
print("\nPreorder traversal:")
bst.preorder(bst.root)
print("\nPostorder traversal:")
bst.postorder(bst.root)
