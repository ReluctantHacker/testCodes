# this code is provided by chatgpt
def infix_to_postfix(expression):
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}
    postfix = []
    stack = []

    for char in expression:
        if char.isalnum():  # 如果是字母或數字，直接添加到 postfix 中
            postfix.append(char)
        elif char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                postfix.append(stack.pop())
            stack.pop()  # 去除 '('
        else:  # 如果是運算符
            while stack and precedence.get(char, 0) <= precedence.get(stack[-1], 0):
                postfix.append(stack.pop())
            stack.append(char)

    while stack:
        postfix.append(stack.pop())

    return ''.join(postfix)

# 測試
#infix_expr = "a+b*(c^d-e)^(f+g*h)-i"
infix_expr = "A+C*D-E/F/G*H-I*K+L"
print("Infix expression:", infix_expr)
postfix_expr = infix_to_postfix(infix_expr)
print("Postfix expression:", postfix_expr)
