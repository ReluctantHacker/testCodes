def passByValue(testVar):
    testVar = testVar + 1
    print(f"testVar in passByValue(): {testVar}")


if __name__ == "__main__":
    testInt = 1
    passByValue(testInt)
    print(f"testInt after passByValue(): {testInt}")
