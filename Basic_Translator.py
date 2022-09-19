#translate vowels to g
#GIRAFFE LANGUAGE
#solution 1 
phrase = ""
def translate(phrase):
    vowels = "aAeEiIoOuU"
    for i in range(len(phrase)):
        for j in vowels:
            if phrase[i] == j:
                phrase = phrase.replace(phrase[i], 'g')
    return phrase

print(translate(input("please enter a string: ")))

#solution 2
def translate1(phrase):
    translate=""
    for i in phrase:
        if i in "AaeEiIoOuU":
            translate=translate+ "g"
        else:
            translate=translate+i
    return translate

print(translate1(input("please enter a string: ")))
#solution 3
def translate2(phrase):
    vowels = ['a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U']
    for i in vowels:
        phrase = phrase.replace(i, 'g')
    print(phrase)

print(translate2(input("please enter a string: ")))





        