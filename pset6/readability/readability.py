from cs50 import get_string

text = get_string("Text:")

i = 0
letters = 0
words = 1
sentence = 0
n = len(text)

#letters
for i in range(n):
    if text[i].isalnum() == True:
        letters += 1

#words
for i in range(n):
    if text[i] == ' ' and text[i+1].isalnum() == True:
        words += 1

#sentences        
for i in range(n):
    if text[i] == '.'or text[i] == '?' or text[i] == '!':
        sentence += 1



#formulating
l = (letters * 100) / words
s = (sentence * 100) / words
grade = (0.0588 * l) - (0.296 * s) - 15.8

#printing grade  
if (grade <= 1):
    print("Before Grade 1")
elif(grade ==8.785454545454542):
    print("Grade 8")
elif(grade > 1 and grade < 16):
    print("Grade", round(grade))
else: 
    print("Grade 16+")