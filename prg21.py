def fib(n):
    if n==0:
        return 0
    elif n ==1:
        return 1
    else:
        return fib(n-1)+fib(n-2)

te=int(input("enter num"))
for i in range(te):
    print(fib(i),end=' ')
