print("Simple Calculator")

num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

print("\nChoose operation")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")

choice = input("Enter choice (+, -, *, /): ")

if choice == "+":
    result = num1 + num2
    print("Result:", result)

elif choice == "-":
    result = num1 - num2
    print("Result:", result)

elif choice == "*":
    result = num1 * num2
    print("Result:", result)

elif choice == "/":
    result = num1 / num2
    print("Result:", result)

else:
    print("Invalid choice")