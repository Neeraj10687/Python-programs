li=[]
while True:

    n=input("enter numbers ")

    if n=='':
        break

    if int(n)>100:
        li.append('over')
    else:
        li.append(n)

print(li)
