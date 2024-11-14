class testClass: 
    def __init__(self):
        pass
    
    def __str__(self):
        return "test01"

    def __repr__(self):
        return "test02"


if __name__ == "__main__":
    testObject = testClass()
    print(testObject)
    print(str(testObject))

    print(repr("test"))
