from cs50 import get_int
import sys
while True:
    height = get_int("Height:")
    if height < 9 and height > 0:
        break
for i in range(height):
    num_hash = i + 1
    num_spaces = height - num_hash
    print(" " * num_spaces, end="")
    print("#" * num_hash)