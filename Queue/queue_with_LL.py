class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class QueueLinkedList:
    def __init__(self):
        self.front = self.rear = None
    
    def enqueue(self, data):
        new_node = Node(data)
        if not self.rear:
            self.front = self.rear = new_node
            return
        self.rear.next = new_node
        self.rear = new_node
    
    def dequeue(self):
        if not self.front:
            raise IndexError("Queue is empty")
        temp = self.front
        self.front = self.front.next
        if not self.front:
            self.rear = None
        return temp.data
    
    def is_empty(self):
        return self.front is None
    
    def front_value(self):
        if not self.front:
            raise IndexError("Queue is empty")
        return self.front.data
    
    def display(self):
        temp = self.front
        print("Queue (Linked List):", end=" ")
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")




queue_ll = QueueLinkedList()
queue_ll.enqueue(10)
queue_ll.enqueue(20)
queue_ll.enqueue(30)
queue_ll.display()
print("Dequeue from linked list:", queue_ll.dequeue())
queue_ll.display()
