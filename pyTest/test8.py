class stack():
    top = -1

    def __init__(self, length):
        self.data_list = [''] * length

    def push(self, data):
        self.top += 1
        self.data_list[self.top] = data

    def pop(self):
        temp = self.top
        if self.top > -1:
            self.top -= 1
        return self.data_list[temp]

    def showStack(self):
        print(self.data_list[0:self.top+1])


def InorderToPostorder(process_text, stk, prvl):
    result = ''
    for c in process_text:
        if c not in "+-*/":
            result+=c
        else:
            if prvl[c] > prvl[stk.data_list[stk.top]]:
                stk.push(c)
            else:
                while (prvl[c] <= prvl[stk.data_list[stk.top]]):
                    print("test")
                    pop_data = stk.pop()
                    result+=pop_data
                stk.push(c)

    pop_data = stk.pop()
    result+=pop_data

    return result


if __name__ == "__main__": 
    prvl = {"*": 1, "/": 1, "+": 0, "-": 0, '': -1}
    testString = "A+C*D-E/F/G*H-I*K+L"
    print(testString)

    s = stack(20)
    result = InorderToPostorder(testString, s, prvl)
    print(result)


