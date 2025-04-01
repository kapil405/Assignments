# Write a Python program to create a lambda function
#  with two expressions

fun = lambda n : (n / 2 , n * 2)

result = fun(10)
print(type(result))

print("half ".ljust(8), result[0])
print("double ".ljust(8), result[1])

