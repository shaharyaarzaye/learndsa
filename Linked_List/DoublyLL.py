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
    
    def insert_at_position(self , data , pos):
        if pos < 0:
            print("Position cannot be zero...")
            return
        if pos == 0 :
            self.insert_at_beginning(data)
        
        new_node = Node(data)
        temp = self.head

        for i in range(0 , pos-1):
            temp = temp.next

        new_node.prev  = temp
        new_node.next = temp.next
        temp.next = new_node    
        print(f"{data} is inserted at position {pos}")

    def delete_from_beginning(self):
        if not self.head :
            print("The list is empty..")
            return
        temp = self.head
        self.head = temp.next
        temp = None
        print("The first elemnet is deleted form the list.")

    def delete_from_end(self):
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.prev.next = None
        print("the End node has been deleted form list..")

    def delete_at_position(self, pos):
        if pos < 0 :
            print("Position cannot be zero")
            return
        if pos == 0 :
            self.delete_from_beginning()
        temp = self.head

        for i in range(0 , pos-1):
            if not temp.next :
                raise IndexError("Position out of range")
            temp = temp.next
        
        if temp.next :
            temp.next.prev = temp.prev
        if temp.prev :
            temp.prev.next = temp.next
        else:
            temp.prev.next = None
        del temp
    
    def search(self , val):
        temp = self.head 
        pos = 0
        while temp.next :
            pos += 1
            if temp.data == val:
                return pos
            temp = temp.next

    def getLength(self):
        temp = self.head
        length = 0
        while temp:
            length += 1
            temp = temp.next
        return length    

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
dll.insert_at_end(30)
dll.insert_at_end(40)
dll.insert_at_end(50)
dll.display()
dll.delete_at_position(2)
dll.display()
print("Search 20:", dll.search(20))
print("Length:", dll.getLength())