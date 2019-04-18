class Time:
    def __init__(self,time):
        self.time = time

    def convert_time(self):
        self.time = self.time % (24 * 3600)
        self.hour = self.time // 3600
        self.time %= 3600
        self.minutes = self.time // 60
        self.time %= 60
        self.seconds = self.time
        print("HH:MM:SS - {}:{}:{}".format(self.hour, self.minutes, self.seconds))

t1 = Time(72465)
t1.convert_time()