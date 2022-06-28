import math
n,g = input().split()
num = int(n)
gue = int(g)

if pow(2,gue) >= num:
    print("Your wish is granted!")
else:
    print("You will become a flying monkey!")