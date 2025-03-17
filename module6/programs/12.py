#  Write a Python program to check if a person is eligible to donate blood using a nested if. 


age = int(input("Enter your age : "))
weight = int(input("Enter your weight(in pounds) : "))
gender = input("Enter your gender[ m(male) / f(female) ] : ").lower()
himoglobin = float(input("Enter himoglobin level : "))


if age >= 17 :
    if weight >= 110 :

        if (gender == 'male' or gender == 'm') and himoglobin >= 13.0 :
            print("\nYour condition is healthy you can donate blood") 

        elif (gender == 'female' or gender == 'f') and himoglobin >= 12.5 : 
            print("\nYour condition is healthy you can donate blood")

        else : 
            print("\nYour helth is not okey you can not donate blood") 

    else :
        print("\nYou have to mentain menimum weight of : 110 pounds to dontate blood")
        
else :
    print("\nyou are under age you can not donate blood")

