class Node :
    def __init__(self , data):
        self.prev = None
        self.data = data
        self.next = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None

    def insert_at_beginning(self , data):
        new_node = Node(data) #Craeting Node
        if self.head:
            new_node.next = self.head # joining next pointer of new node to the first node
            self.head.prev = new_node # joining first node prev pointer to new node
        self.head = new_node # Updataing head to newly added node   
        print("New Node has been inserted at the begining of the list ")  
        return    

    def insert_at_end(self, data):
        if not self.head:
            self.insert_at_beginning(data)
        new_node = Node(data)
        temp = self.head
        while temp.next:
            temp = temp.next
        new_node.prev = temp
        temp.next = new_node
        print("New node has been added to end of the list ...")

    def display(self):
        temp = self.head
        while temp:
            print(temp.data, end=" <-> ")
            temp = temp.next
        print("None")




dll = DoublyLinkedList()
dll.insert_at_beginning(5)
dll.insert_at_end(10)
dll.insert_at_end(20)
# dll.insert_at_position(15, 2)
dll.display()
# dll.delete_at_position(1)
# dll.display()
# print("Search 20:", dll.search(20))
# print("Length:", dll.get_length())