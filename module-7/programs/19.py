# Write a Python program to merge two lists into one dictionary using a loop.

my_dict = {}

keys = ["name","age","subjects"]
value = ["kapil",23,"python"]

for i in range(len(keys)):
    my_dict[keys[i]] = value[i]

print(my_dict)

