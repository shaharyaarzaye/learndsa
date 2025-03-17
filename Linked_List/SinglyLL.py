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

    def Insert_at_Position(self , data , pos):
        if pos < 0:
            print("Invalid Position , Position cannot be 0 ")
            return
        if pos == 0:
            self.insertAtbeginning(pos)
        new_node = Node(data)
        temp = self.head
        for i in range(pos - 1):
            temp = temp.next
        if not temp:
            print("Positon out of range...")
        new_node.next = temp.next
        temp.next = new_node
        print(f"{data} is inserted at position {pos}")

    def display(self):
        temp = self.head 
        while temp:
            print(temp.data ,  end="->")
            temp = temp.next

    def delete_from_beginning(self):
        temp = self.head
        self.head = temp.next
        temp.next = None

    def delete_from_end(self):
        if not self.head:
            raise ValueError("List is empty")
        if not self.head.next:
            self.head = None
            return
        temp = self.head
        while temp.next and temp.next.next:
            temp = temp.next
        temp.next = None

    def delete_at_positon(self , pos):
        if pos < 0:
            print("Position cannot be zero ...")
            return
        if pos == 0:
            self.delete_from_beginning()
        temp = self.head
        for i in range(pos -1):
            temp = temp.next
        if not temp:
            print("position out of range....")
        temp.next = temp.next.next

    def search(self , key):
        pos = 0
        temp = self.head
        while temp:
            if temp.data == key:
                return pos
            temp = temp.next
            pos += 1
        return -1
    
    def getlength(self):
        temp = self.head
        count = 0 
        while temp:
            temp = temp.next
            count += 1
        return count
    

sll = singlyLinkedList()


sll.insertAtbeginning(5)
sll.insert_AT_end(34)
sll.insert_AT_end(356)
sll.insert_AT_end(334)
sll.Insert_at_Position(23 , 3)
sll.display()
sll.delete_from_beginning()
print(" ")
sll.display()
sll.delete_at_positon(2)
print(" ")
sll.display()
print(" ")
print(sll.search(356))
print(" ")
print(sll.getlength())