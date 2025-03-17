# # Write a Python program that filters out even numbers using the filter() function.

l1 = [1,2,3,4,5,6,7,8,9,10,11,12,13]

l2 = list(filter(lambda n : n%2 == 0, l1))

print(l2)

