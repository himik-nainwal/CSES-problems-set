string_ch= list(input())

count = 0
ma = 0

for i in range(len(string_ch)-1):

    if string_ch[i] == string_ch[i+1]:
        count += 1
        if ma <= count:
            ma = count
    elif string_ch[i] != string_ch[i+1]:
        count = 0

print(ma+1)