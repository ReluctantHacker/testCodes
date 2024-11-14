def divide(a, b):
    assert b! = 0
    return a/b

# testing divide function
result = divide(10, 2)
pritn(result) # output 5.0

# trying to divide 0, provoke AssertionError
result = divide(10, 0)
print(result) # this line won't execute, because AssertionError would be raise
