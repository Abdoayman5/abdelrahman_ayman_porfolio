# tuple1 =(11,22)
# tuple2=(99,88)
# temp=tuple1
# tuple1=tuple2
# tuple2=temp
# print("tuple1", tuple1)
# print( "tuple2",tuple2)




# tuple1=(11,22,33,44,55,66)
# tuple2=(tuple1[3],tuple1[4])
# print("tuple2 :" ,tuple2)


# tuple1 =(10,20,30,40)
# a,b,c,d=tuple1
# print(a)
# print(b)
# print(c)
# print(d)
# def is_even(i):
#     return i % 2 == 0

# i =5

# print(is_even(i))
# def func_a():
#     print ('inside func_a')
# def func_b(y):
#     print ('inside func_b')
#     return y
# def func_c(z):
#     print ('inside func_c')
#     return z()
# print (func_a())
# print (5 + func_b(2))
# print (func_c(func_a))
# def mult(a, b):
#     if b == 1:
#         return a
#     else:
#      return a + mult(a, b-1)
    
# print(mult(5, 3))


# num=[1,2,4,5,6,7,8,9]
# even=0
# odd=0
# for i in num :
#     if i%2==0 :
#         even +=1
#     else:
#          odd+=1

# print("even number is : ",even)
# print("odd number is : ",odd)

# j={1,3,4,5,6}
# j.update([9])
# print
# n=int(input("enter your numbers : "))
# for i in range( 1, n):
#     print('*'*i)
# print('*'*n)
# for i in range ( n , 1 , -1):
#     print('*'* i )
# number = int(input("Enter a four-digit number: "))

# Make sure the number is positive
# number = abs(number)

# digit1 = number // 1000
# digit2 = (number // 100) % 10
# digit3 = (number // 10) % 10
# digit4 = number % 10

# sum_of_digits = digit1 + digit2 + digit3 + digit4

# print("Sum of digits:", sum_of_digits)
def my_function(name): # name is a parameter
  print("Hello", name)

my_function("Emil") # "Emil" is an argument