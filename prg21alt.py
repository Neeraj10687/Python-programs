n=int(input("enter range "))
a=0
b=1
for i in range(n+1):
    print(a)
    a,b= b,a+b
    