# Practical Example 6: Write a Python program to check if a number is prime using if_else. 

num = int(input("enter any number : "))

isPrime = True


# checking here if number is 1 then set prime value to false 
if num == 1 :
    isPrime = False
else :
    for i in range(2,num) :
        if num % i == 0:
            isPrime = False
            break


if isPrime :
    print(f"{num} is prime number ")
else :
    print(f"{num} is not a prime number ")



