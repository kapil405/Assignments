# Write a Python program to insert elements into an empty list using a for loop and append().

l1 = []

for i in range(5):
    e = int(input(f"enter element {i+1} : "))
    l1.append(e)


print(l1)