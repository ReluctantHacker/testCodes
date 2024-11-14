class A:
    def p(self):
        print('A')

class B():
    def p(self):
        print('B')

class C(A, B):
    def p(self):
        print('C')

class D(C):
    def p(self):
        print('D')

a = A()
b = B()
c = C()
d = D()
