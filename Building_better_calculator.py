<<<<<<< HEAD
from re import I


x=float(input("please enter num 1: "))
y=input("please enter operator: ")
factorial=1
if y=='!':
    if int(x)<0:
        print("NO FACTORIAL")
    elif int(x)==0:
        print("the factorial of 0 is 1")
    else:
     for i in range(1,int(x+1)):
        factorial=factorial*i
        i+=1
     print("factorual is: ",factorial)
else:
 z=float(input("please enter num 2: "))


 if y=='+':
    print(x+z)
 elif y=='-':
    print(x-z)
 elif y=='*':
    print(x*z)
 elif y=='/':
        print(x/z)
 else:
=======
x=float(input("please enter num 1: "))
y=input("please enter operator: ")
z=float(input("please enter num 2: "))


if y=='+':
    print(x+z)
elif y=='-':
    print(x-z)
elif y=='*':
    print(x*z)
elif y=='/':
        print(x/z)
else:
>>>>>>> d23591bd57ad0d327eb6090c960252343cf8ac97
    print("INvalid OPerator")