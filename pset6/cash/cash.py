from cs50 import get_float
import sys
while True:
    change = get_float("Change owed: ")
    if change > 0:
        break
change = round(change * 100)

count = 0
while change > 0:
    if change >=25:
        change = change - 25
        count = count + 1
    elif change >=10:
        change = change - 10
        count = count + 1    
    elif change >=5:
        change = change - 5
        count = count + 1        
    elif change >=1:
        change = change - 1
        count = count + 1    
    
print(count)        