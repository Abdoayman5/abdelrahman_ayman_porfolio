
# number 1
number=int (input("enter your number : "))
fact=1

for i in range(1,number+1):
    fact=fact*i
print(fact)
    

# number2 
# sum1=0
# for i in range (1,101):
#     sum1=sum1+i 

# print(sum1)

# sum2=0
# for i in range (5,51,2):
#     sum2+=i

# print(sum2)
# sum3=0
# for i in range (0, 21) :
#     sum3 += 2**i-1

# print(sum3)

# product = 1
# for n in range(1,21):
#     product *= 2**n

# print(product)



# number 3

pos = 0
neg = 0
sum_values = 0
count_values  = 0

while True:
    num = int(input("Enter an integer (0 to stop): "))
    
    if num == 0:
        break
    
    if num > 0:
        pos += 1
    else:
        neg += 1
    
    sum_values += num
    count_values += 1

if count_values != 0:
    average = sum_values / count_values
else:
    average = 0.0

print("Number of positive values:", pos)
print("Number of negative values:", neg)
print("Average:", float(average))

