class Car:
    def __init__(self, maker='', num_of_doors=4,  fuel_type='oil'):
        self.maker, self.num_of_doors,  self.fuel_type = maker, num_of_doors,  fuel_type

    def __repr__(self):
        return 'I\'m a car.'

class Bus:
    def __init__(self, maker='', size=''):
        self.maker, self.size = maker, size

    def __repr__(self):
        return 'I\'m a bus.'

class Truck:
    def __init__(self, maker='', weight=10):
        self.maker, self.weight = maker, weight

    def __repr__(self):
        return 'I\'m a truck.'

def FactoryInterface(classname):
    # 物件名稱與類別對照表
    name_class_mapping = {'A':Car, 'B':Bus, 'C':Truck}
    
    # 建立物件
    return name_class_mapping[classname]()


# 測試
obj1 = FactoryInterface('A')
print(obj1)

obj2 = FactoryInterface('B')
print(obj2)

obj3 = FactoryInterface('C')
print(obj3)
