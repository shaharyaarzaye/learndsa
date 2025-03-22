class QueueArray:
    def __init__(self, capacity):
        self.queue = []
        self.capacity = capacity
    
    def enqueue(self, data):
        if len(self.queue) >= self.capacity:
            raise OverflowError("Queue is full")
        self.queue.append(data)
    
    def dequeue(self):
        if not self.queue:
            raise IndexError("Queue is empty")
        return self.queue.pop(0)
    
    def front(self):
        if not self.queue:
            raise IndexError("Queue is empty")
        return self.queue[0]
    
    def is_empty(self):
        return len(self.queue) == 0
    
    def is_full(self):
        return len(self.queue) == self.capacity
    
    def display(self):
        print("Queue (Array):", self.queue)



queue_arr = QueueArray(5)
queue_arr.enqueue(10)
queue_arr.enqueue(20)
queue_arr.enqueue(30)
queue_arr.display()
print("Dequeue from array:", queue_arr.dequeue())
queue_arr.display()
