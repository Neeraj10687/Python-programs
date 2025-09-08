    
l1=[int(x) for x in input("enter l1 ").split(",")]
l2=[int(x) for x in input("enter l2 ").split(",")]

 
if sum(l1)==sum(l2):
    print("they have same sum")
else:
    print("sum of the lists are different")

