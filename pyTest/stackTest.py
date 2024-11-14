if __name__ == "__main__":
    stack = []
    
    stack.append(1) # push
    stack.append(2) # push
    stack.append(3) # push
    print(stack) 

    stack.pop() # 最後一個丟出去(就是把top丟出去)

    print(stack[-1]) # 顯示最後一個(世紀就是顯示top)


