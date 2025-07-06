def area_of_room(length, width):
  return length * width

length = float(input("Enter the length of the room in feet: "))
width = float(input("Enter the width of the room in feet: "))
 
area = area_of_room(length, width)
print("The area of the room is:", area, "square feet")