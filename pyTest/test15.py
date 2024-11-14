def addFruit(fruit_list, new_fruit):
    fruit_list[0] = new_fruit

if __name__ == "__main__":
    fruits = ["apple", "banana", "grapes", "orange"]
    print(f"show fruit list: {fruits}")
    print(f"show the address of fruit list: {id(fruits)}")
    print(f"show the address of fruits[0]: {id(fruits[0])}")
    addFruit(fruits, "waterlemon")
    print(f"show fruit list: {fruits}")
    print(f"show the address of fruit list: {id(fruits)}")
    print(f"show the address of fruits[0]: {id(fruits[0])}")

