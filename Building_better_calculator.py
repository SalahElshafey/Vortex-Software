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
    print("INvalid OPerator")