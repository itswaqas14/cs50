from csv import reader, DictReader
from sys import argv

if len(argv) < 3:
    print("usage error dna.py data.csv sequence.txt")
    exit()

with open(argv[2]) as dnafile:
    dnareader = reader(dnafile)
    for row in dnareader:
        dnalist = row

dna = dnalist[0]
sequences = {}

with open(argv[1]) as peoplefile:
    people = reader(peoplefile)
    for row in people:
        dnaSequences = row
        dnaSequences.pop(0)
        break

for item in dnaSequences:
    sequences[item] = 1

for key in sequences:
    l = len(key)
    tempmax = 0
    temp = 0
    for i in range(len(dna)):
        while temp > 0:
            temp -= 1
            continue
        if dna[i: i + l] == key:
            while dna[i -l: i] == dna[i: i + l]:
                temp += 1
                i += l
            if temp > tempmax:
                tempmax = temp
    
    sequences[key] += tempmax            
    
    
with open(argv[1], newline = '') as peoplefile:
    people = DictReader(peoplefile)
    for person in people:
        match = 0
        for dna in sequences:
            if sequences[dna] == int(person[dna]):
                match += 1
        if match == len(sequences):
            print(person["name"])
            exit()
    
    print("No match")        