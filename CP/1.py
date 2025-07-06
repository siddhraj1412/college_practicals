def clock_angle(hour, minute):
    hour = hour % 12

    hour_angle = (hour * 30) + (minute * 0.5)     
    minute_angle = minute * 6                     

    angle = abs(hour_angle - minute_angle)

    return min(angle, 360 - angle)

h = int(input("Enter hour (0-23): "))
m = int(input("Enter minute (0-59): "))

print(f"Angle between hour and minute hand: {clock_angle(h, m)} degrees")
