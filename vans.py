def RaxaVans(distance: int, speed: int, time: int):
     distance =  distance/1000
     total_distance = speed * time
     
     laps = int(total_distance / distance)
     return laps

try:
    distance, speed, time = input().split(" ")

    print(RaxaVans(int(distance), int(speed), int(time)))
except:
    raise AssertionError("Invalid value.")
