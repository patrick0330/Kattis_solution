from ast import Str


Str = input()

ans = len(str)
for i in range(len(str)):
    for j in range(i+1, len(str)):
        macro = str[i:j]
        replaced = str.replace(macro, "M")
        ans = min(ans, len(replaced) + len(macro))

print(ans)