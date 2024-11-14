# this is a practice to create stack with python
class stack():
    top = -1 

    def __init__(self, length):
        self.data_list = [0]*length

    def push(self, data):
        self.top+=1
        self.data_list[self.top] = data

    def pop(self):
        if self.top > -1:
            self.top-=1

    def showStack(self):
        print(self.data_list[0:self.top+1])

if __name__ == "__main__":
    stack_length = 10
    test_stack = stack(stack_length)
    test_stack.push(1)
    test_stack.push(2)
    test_stack.push(3)
    test_stack.showStack()

    test_stack.pop()
    test_stack.showStack()

    test_stack.pop()
    test_stack.pop()
    test_stack.showStack()

    test_stack.pop()
    test_stack.showStack()
