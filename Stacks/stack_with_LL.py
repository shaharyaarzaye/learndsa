class Node:
    def __init__(self , data):
        self.data = data
        self.next = None

class Stack_with_LL:
    def __init__(self):
        self.head = None
    
    def push(self , data):
        new_node = Node(data)
        if not self.head: 
            self.head = new_node
            print(f"{data} has been pushed at the end of the array..")
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node
        print(f"{data} has been pushed at the end of the array..")
    
    def pop(self):
        if not self.head:
            print("Stack is empty")
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        del temp

    def peek(self):
        if not self.head:
            print("The stack is empty")
            return 
        temp = self.head 
        while temp:
            temp = temp.next
            if not temp.next:
                return temp.data

    def display(self):
        if not self.head:
            print("Stack is empty")
            return
        temp = self.head
        while temp:
            print(temp.data , end="->")
            temp = temp.next

    def lenth(self):
        length = 0
        if not self.head:
            return 0
        temp = self.head
        while temp:
            length += 1
            temp = temp.next
        return length

stack = Stack_with_LL()
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
stack.push(5)
stack.push(6)
# stack.display()
# stack.pop()
stack.display()
print(" ")
print(stack.peek())
stack.display()
print(' ')
print(stack.lenth())