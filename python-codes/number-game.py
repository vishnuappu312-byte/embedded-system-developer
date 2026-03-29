import random

secret = random.randint(1, 10)

print("Guess the number (1 to 10)")

guess = int(input("Enter your guess: "))

if guess == secret:
    print("Correct! You guessed it!")

else:
    print("Wrong guess")
    print("The correct number was:", secret)