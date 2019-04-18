class Distance:
    distanceCount = 0

    def __init__(self):
        self.distance = 0
        Distance.distanceCount += 1

    def get_distance(self, distance1, distance2):
        self.distance1 = distance1
        self.distance2 = distance2
        print("The distance count is : {}".format(Distance.distanceCount))

    def show_distance(self):
        distance1 = self.distance1
        distance2 = self.distance2
        print("Distance 1 : ", distance1, "kms", self.distance1 * 1000, "mts")
        print("Distance 2 : ", distance2, "kms", self.distance2 * 1000, "mts")

    def add_distance(self):
        print("Total distance in kms is : ", self.distance1 + self.distance2)
        print("Total distance in mts is : ", (self.distance1 + self.distance2) * 1000)

d1 = Distance()
d1.get_distance(1,2)
d1.show_distance()
d1.add_distance()