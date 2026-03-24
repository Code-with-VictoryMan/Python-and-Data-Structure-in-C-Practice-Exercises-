import random

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

operations = ["+", "-", "*", "/"]

choice = random.choice(operations)

print("Random operation selected:", choice)

if choice == "+":
    print("Result:", num1 + num2)

elif choice == "-":
    print("Result:", num1 - num2)

elif choice == "*":
    print("Result:", num1 * num2)

elif choice == "/":
    if num2 != 0:
        print("Result:", num1 / num2)
    else:
        print("Cannot divide by zero")
