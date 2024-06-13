from math import * # imports everything from the math module

def main():
    n = abs(int(input("Enter a number: "))) # gets input from the user
    i = 2 # starts off at 2 because all input is divisble by 1
    msg = 'is a prime number.' # the message is initially set
    while i <= sqrt(n):
        if n % i == 0: # if 'i' divides evenly into n
            msg = 'is not a prime number.' # only set if it isn't a prime
        i = i + 1 # increases 'i' by 1 so it can check every value up to the square-root of 'n' (to see if it divides evenly)
    print(n, msg)


main()
