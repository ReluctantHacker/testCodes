# Car class
class cars:
    def __init__(self):
        pass

    # Define speed static method
    @staticmethod
    def speed_rate(distance, time):
        return distance/time


test_speed_result = cars.speed_rate(1000, 20)
print("Show test speed result:", test_speed_result)


van = cars()
print("Show van's speed: result:", van.speed_rate(1000, 20))




