class Node:
    def __init__(self , data):
        self.data = data;
        self.next = None

class singlyLinkedList:
    def __init__(self):
        self.head = None

    def insertAtbeginning(self , data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
        print(f"the new node inserted at beginning of {data}")

    def insert_AT_end(self , data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        
        temp.next = new_node
        print(f"{data} has been inserted at the end of the linked list")

sll = singlyLinkedList()


sll.insertAtbeginning(5)
sll.insert_AT_end(34)
