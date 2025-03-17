"""
 Create a mini-project where students combine conditional statements, 
 loops, and functionsto create a basic Python application, 
 such as a simple calculator or a grade managementsystem.

"""


# functions for each operations 

add = lambda n1,n2 : n1 + n2

sub = lambda n1,n2 : n1 - n2

mult = lambda n1,n2 : n1 * n2

devide = lambda n1,n2 : n1 / n2

mod = lambda n1,n2 : n1 % n2


# initial variables 
ans = ''
status = True

print("calculator".center(30,"="))

# while loop 
while status :
    n1 = float(input("\nenter first number  : "))
    n2 = float(input("enter second number : "))

    op = input("\nEnter opeartion (+, -, /, * , %) : ")


    if op in '+-/*%' :
        if op == '+' :
            ans = add(n1,n2)
        
        elif op == '-':
            ans = sub(n1,n2)
        
        elif op == '*':
            ans = mult(n1,n2)
        
        elif op == '%':
            n1 = int(n1)        
            n2 = int(n2)
            ans = mod(n1,n2)
        
        elif op == '/':
            if n2 == 0:
                print("dividing by zero not allowed")
            else :
                ans = devide(n1,n2)
        
    else:
        print("wrong opeartion input")

    # checking for answer
    if ans != '':
        print("\nresutlt = ",ans)
    else :
        pass


    # asking to choose continue or leave
    choice = input("\ndo you wnat to colninue more calculation ? [y/n] : ").lower()
    
    if choice == 'y' or choice == 'yes' :
        status = True
    else :
        status = False


