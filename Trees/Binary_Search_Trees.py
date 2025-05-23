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


# Usage
bst = BST()
values = [50, 30, 70, 20, 40, 60, 80]
for val in values:
    bst.insert(val)
