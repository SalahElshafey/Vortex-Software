from re import M


secret_word="Hay"
x=""
max=0
out=False
while x!=secret_word and not(out):
 if max<3:
   x=input("please enter a word: ")
   max+=1
 else:
    out=True
    
if not(out) :
    print("you winn")
else:
    print("you lost")