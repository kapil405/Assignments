# Practical Example 7: Write a Python program to calculate grades based on percentage using if-else ladder. 


grade = ''
persentages = float(input("enter persentages : "))


if persentages > 0 and persentages <= 100 :

    if persentages >= 90 :
        grade = 'A'

    elif persentages >= 70 and persentages < 90 :
        grade = 'B'
        
    elif persentages >=50 and persentages <70 :
        grade = 'C'

    elif persentages >=35 and persentages <50 :
        grade = 'D'

    else :
        grade = 'F'
        
    print(f"Your Percntage : -->  {persentages}")
    print(f"Your Grade is  : -->  {grade}")
        
else :
    print("invalid persentage input")

