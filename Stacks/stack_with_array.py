stack = []


def Push(x):
    stack.append(x)

def Pop():
    stack.pop()

def Peek():
    return stack[-1]	
def isEmpty():
    if len(stack) == 0:
        return  True
    else:
        return False
def Size():
    return len(stack)

def traverse():
    for i in stack:
        print(i , end=" ")
    print(' ')
Push(5)
Push(4)
Push(3)
Push(2)
Push(1)
traverse()
Pop()
traverse()
print(f"The last element of the Stack is : {Peek()}")
print(f"The stack is empty or not :  {isEmpty()}")
print(f"The size of the Stack is : {Size()}")
traverse()