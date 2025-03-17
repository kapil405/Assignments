"""
Print this pattern using nested for loop:

* 
** 
*** 
**** 
***** 

"""

for row in range(1,6) :
    for col in range(1,row+1):
        print("*",end="")
    print()

