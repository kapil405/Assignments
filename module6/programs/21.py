# Write a Python program that manipulates and prints strings using various string methods.

string = "Python"


print(string.capitalize())

print(string.upper())

print(string.lower())

print(string.title())

print()
# ---------------------------------------------
string = "Python is most popular programing language"
   
print(string.index("popular"))

print(string.find("popular"))

print(string.find("popular",0,15))   #passing additional paraameters as index range to find substinrg

print(string.replace("Python","java",1)) #reaplce only first occurance

print()
# ----------------------------------------------

string = "Python"

print(','.join(string))

print(string.ljust(20,"-"))
print(string.rjust(20,"-"))

print(string.center(20,"*"))

print(string.zfill(20))

print()
# ----------------------------------------------

string = "       Python        "

print(string.lstrip())

print(string.rstrip())

print(string.strip())

print()
# ----------------------------------------------

string = "user"

if string.isalpha() :
    print("string is alphabets\n")
else :
    print("string is not fully alphabetic\n")
# ----------------------------------------------

string = "user123"

if string.isalnum() :
    print("string is alpha numberic\n")
else:
    print("string is not alpha numberic\n")

# ----------------------------------------------

string = "3454545"

if string.isdigit() :
    print(f"{string} is digits\n")
else :
    print(f"{string} is not digits\n")

# ----------------------------------------------

string = "PYTHON"

if string.isupper() :
    print(f"{string} is uppercase\n")
else:
    print(f"{string} is not uppercasae\n")

# ----------------------------------------------

string = "python"

if string.islower() :
    print(f"{string} is lowercase\n")
else:
    print(f"{string} is not lowercase\n")


