def cond(num):
    co=True
    while(num!=1):
        if num%2==0:
            num=num/2
            yield num
        elif (num%2!=0):
            num=(num*3)+1
            yield num
def main():
    num=int(input())
    print(num,end=" ")
    values=cond(num)
    for i in values:
        print(int(i),end=" ")

if __name__ == '__main__':
    main()