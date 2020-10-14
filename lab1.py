import math

PI = 3.14159265

print("enter a")
a = float(input())
print("enter b")
b = float(input())
print("enter c")
c = float(input())

alpha = math.acos((c * c + b * b - a * a)/(2 * b * c))
beta = math.acos((c * c + a * a - b * b)/(2 * a * c))
gamma = math.acos((b * b + a * a - c * c)/(2 * a * b))

print("in degrees: ")

print((alpha * 180) / PI)
print((beta * 180) / PI)
print((gamma * 180) / PI)

print("in radians: ")

print(alpha)
print(beta)
print(gamma)

