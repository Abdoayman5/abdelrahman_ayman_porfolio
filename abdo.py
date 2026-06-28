# first code

# grade=int(input("enter your grade "))
# if (grade >= 90):
#     print("A")
# elif (grade >= 80):
#     print("B")
# elif (grade >= 70):
#     print("C")
# elif (grade >= 60):
#     print("D")
# else:
#     print("F")
# print(" welcome")


# second code
# grade=int(input("enter your grade "))
# if (grade>=90 and grade<=100):
#     print(" grade is A")
# elif(grade>=80 and grade <=90):
#     print(" grade is B")
# elif( grade >=70 and grade<=80):
#     print(" grade is C")
# elif(grade>=60 and grade <=70):
#     print(" grade is D")
# elif(grade>=50 and grade <=60):
#     print(" grade is f")

    # third code 
# grade=int(input("enter your grade "))
# if (grade in range(90,101)):
#     print(" grade is A")
# elif(grade in range(80,90)):
#     print(" grade is B")
# elif( grade in range(70,80)):
#     print(" grade is C")
# elif(grade in range(60,70)):
#     print(" grade is D")
# elif(grade in range(50,60)):
#     print(" grade is f")

#  fourth
# number= int(input(" enter you3 number"))
# if ( number in range(0,10)):
#     print("number is between 0 and 10")
# else:
#     print("invalid number")
 

#  fifth
# number=int(input("enter your number"))
# if ( number %2==0):
#     print("number is even")
# else:
#     print("number is odd")

# number six
"""
num1=int(input("enter  number1  "))
num2=int(input("enter  number2  "))  
num3=int(input("enter  number3  "))  
if( num1>num2 and num2> num3):
    print("number 1 is the max and = ",num1)
elif(num2>num1 and num2>num3):
   print("number 2 is the max and = ",num2)

else:
  print("number 3 is the max and = ",num3)"""
#"""
"""
total =0
count =0

possitive=0
negative=0

print("Enter integers (0 to stop):")

while True:
    num= int(input(" enter your number : "))
    if num==0:
        break
    total = total +num
    count = count +1
    if num >0 :
      possitive +=1
      print(" possitive number is : ",possitive)
    else :
      negative+=1 
      print(" negative number is : ",negative)
if count>0 :
  average=total/count
  print(" average of this number is : ",average) # pyright: ignore[reportUndefinedVariable]


miles=int(input(" your miles : "))
kilometer=miles*1.609

print(f"{miles}is equal to {kilometer}")
"""
# small=0
# n=input("enter your number : ")
# for i in range(3):
#     if i[0]<i[1] and i[1]<i[2]:
#         small=i[0]
#         print(" small number is : ",small)
#     elif i[1]<i[0] and i[0]< i[2]:
#       small=i[1]
#       print(" small number is : ",small)
#     else :
#         small=i[2]
#         print(" small number is : ",small)
# a={1,3,4,5}
# b={3,4,5}
# print(a.issuperset(b))
# print (a.issubset(b))

#                dictionary
# user ={
#     "name ": "abdelrahman ",
#     "age ": 19,
#     "country ": " egypt",
#     "skills ": ["html", "js", "css","python"]
# }
# language={
#     'one':{
#         "name ": " html",
#         "progress" :" 90%"
#     },
#     'two' : {
#       "name ": " javascript",
#         "progress" :" 90%"
        
#     },
#     'three' :{
#         "name ": " python",
#         "progress" :" 90%"
#     },

# }
# all_language={
#     'four ':'one'
# }
# print(user )
# print(user["country "])
# print(language)
# print(language["one"])
# print(language["three"])
# print(len(language))









#      clear dictionary

# user={
#     'name':"abdelrahman"
# }
# print(user)
# user.clear()
# print(user)
# member={
#     'name': ' Roaa'
# }
# print(member)
# member['age']=19
# print(member)
# member.update({" country":" lehleb"})
# print(member)



# number = float(input("Enter a number: "))

# if 0 <= number <= 10:
#     print("The number is in the period [0, 10]")
# else:
#     print("The number is not in the period [0, 10]")


# name =input("enter your name : "  ).strip().capitalize()
# email=input("enter your email : ")
# userName =email[:email.index("@") ]
# website=email[email.index("@")+1:]

# print(f"hollo your name is {name} and your email is {email}")
# print(f"your username is {userName} ")
# print(f"your website is {website}")




# admin=["abdelrahman","roaa","heba","menna","mazen","mostafa"]

# name=input("enter your name : ")
# if name in admin:
#     print(f"hello  {name} you are admin")
#     option=input ("delete or update ").strip().capitalize()
#     if option ==  'Update' :
#         theNewName=input("enter your new name : ").strip().capitalize()
#         admin[admin.index(name)]= theNewName
#         print(admin)

#     elif option == "Delete" :
        
#         admin.remove(name)
#         print(admin)
# else:
#     print("name not found")

 
#
# def FUll_name(first, middle,last) :
#     print(f"hello{first} {middle:.1s} {last.capitalize()}")

# FUll_name(" abdelrahman","ayman","abo_galil")


# def say_hello(n1,n2,n3,n4):
#      peoples = [n1,n2,n3,n4]
#      for name in peoples :
#           print (f"hello {name}")
# say_hello("abdo", "ayman","abogalil","atya")

# def say_hello(*peoples):
#      for name in peoples :
#           print (f"hello {name}")
# say_hello("abdo", "ayman","abogalil","atya","roaa","menna")
# number=int(input("enter your first number :"))
# number2=int(input("enter your second number :"))
# operator=input("enter your operator :")
# if operator == "+" :
#     print(number+number2)
# elif operator == "-" :
#     print(number-number2)
# elif operator == "*" :
#     print(number*number2)
# elif operator == "/" :
#     print(number/number2)

  # dictionary

# from enum import member


# user= {
#     "name": "abdleraham",
#     "age": 19,
#     "collage":"elhada",
#     "skills" :  ["html","css","js","python"]
# }

# print(user)
# print(user.values())
# print(user.keys())
# print(user.clear())
# member={
#     "name":"roaa"
# }
# member["age"]=20
# print(member)
# member.update({"country": "beniKesis"})
# print(member)

# def greet():
#     print("hello")
#     print("abdelrahman")

# greet()

# def say_hello(name, age, country):
#     print(f" hello {name} Your age is {age} and your country is {country}")

# say_hello("abdelrahman", 19 , "egypt")






# def skills(name,*myTuple, **skill2):
#     for skill,value in skills.items():
     
#      print (f"{skill} =>{value}")
     
# skills("abdelrahman"  ,*myTuple,**myDic)
# myTuple=("one","two","three","four")
# myDic ={
#    "num":"one",
#    "num2":"two",
#    "num3":"three",
#    "num4":"four"
# }


# def show_skills(name, *skills,  **skill2):
#     print(f"hello {name} \nskills without progress  is .")
#     for skill in skills :
#         print(f" -> {skill}  ")

#     print(f"\nskills with progress  is .")
#     for skill_key , skill_value in skill2.items():
#             print(f" - {skill_key} => {skill_value}")

# show_skills("abdelrahman",*myTuple,python = "90%", java ="80%", c ="60%")
 
                                                                                    #  recursion             
# def cleanWord(word):
#     if len(word)==1 :
#         return word 
#     if word[0]== word[1]:
#         return cleanWord(word[1:])
#     return word[0]+cleanWord(word[1:])
# print(cleanWord("wwwwoooorrrrllllldddd"))






