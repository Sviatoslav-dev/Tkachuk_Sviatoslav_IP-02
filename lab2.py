print("enter x: ")
x = float(input())

if (x <= -1):
    y = 1 / (x * x)
elif (x <= 2):
    y = x * x
else:
    y = 4

#print("y =")
print("y =", y)