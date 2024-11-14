class A:
    def p(self):
        print('A')
class B(A):
    def p(self):
        super(B, self).p()
        print('B')
class C(A):
    def p(self):
        super(C, self).p()
        print('C')


b = B()
b.p()
c = C()
c.p()
