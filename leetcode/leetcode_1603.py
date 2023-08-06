class ParkingSystem:
    def __init__(self, big: int, medium: int, small: int):
        self.slots = {1: big, 2: medium, 3: small}

    def addCar(self, carType: int) -> bool:
        if self.slots[carType] > 0:
            self.slots[carType] -= 1
            return True
        else:
            return False


# class ParkingSystem:

#     def __init__(self, big: int, medium: int, small: int):

#         # Number of empty slots for each type of car
#         self.empty = [big, medium, small]

#     def addCar(self, carType: int) -> bool:

#         # If space is available, allocate and return True
#         if self.empty[carType - 1] > 0:
#             self.empty[carType - 1] -= 1
#             return True

#         # Else, return False
#         return False
