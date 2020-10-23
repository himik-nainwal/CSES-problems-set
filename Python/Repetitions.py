string_ch= list(input())

count = 0
k= 0

for i in range(len(string_ch)-1):

    if string_ch[i] == string_ch[i+1]:
        count += 1
        if k <= count:
            k = count
    elif string_ch[i] != string_ch[i+1]:
        count = 0

print(k+1)