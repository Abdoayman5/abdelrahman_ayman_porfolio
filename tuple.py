v=('it','cs','js','cpp',5,'python')
print(v)
print(type(v))
print(v[0])
print(v[0:5])
print(len(v))
print(v[-1:-5:-1])

if 'it' in v :
    print("found")
else :
    print("not found")

v2=v+("php"," flutter")
print(v2)
v=tuple(v2)
print(type(v2))

# v2=list(v)
# v2.remove('php')
# print(v2)

# v2.remove('php')
# print(v2)
v= list(v)
print(v)
v=tuple(v)
print(v)


t=("ai","it","cyber","ml","web","mob")
for i in range (len(t)):
    print(t[i])


i=0 
while i<len(t):
    print(t)
    i+=1

x1,x2, *x3=t
print(x1) 
print(x2)
print(x3)

 

x=["c","is",5,5.5,"false"]
12 =x+["ai"]
print(12) 
13=[1,2,3]
x=12+13
print(x)



x[4]=True
print(x)
x[0]=["cs","it"]
print(x)
x[1:3]=[ "abdo","ayman"]
print(x)
x[1:2]=[1,2,3]
print(x)