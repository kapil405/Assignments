# Write a Python program to demonstrate string slicing. 

string = "python is awesome"

print(string[:6])  # slice first 6 characters
print(string[1:6]) # slice 1 to 6 characters, 5 characters
print(string[-6:-2]) # sice a part from last 6th position to last 2nd  position
print(string[:5:2]) # 0th index to 5th index element with taking 2 steps
print(string[5::-1]) #sice position 6 to 0 but take steps backward

substr = string[:6]
print(substr)

