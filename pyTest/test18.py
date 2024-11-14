testVar = 1
if __name__ == "__main__":
    def testFunct():
        global testVar
        testVar = 3
        print(testVar)


    testFunct()
    print(testVar)


