def find_missing(num,emp):
    num=num-1
    total=(num+1)*(num+2)/2
    sumof=sum(emp)
    print(int(total-sumof))


def main():
    num=int(input())
    emp=list(map(int, input().split()))
    find_missing(num,emp)
if __name__ == '__main__':
    main()