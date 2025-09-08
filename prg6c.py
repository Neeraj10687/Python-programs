
    
l1=[int(x) for x in input("enter l1 ").split(",")]
l2=[int(x) for x in input("enter l2 ").split(",")]

 
if set(l1)& set(l2):
    print(f"{set(l1) & set(l2)} occur in both")
else:
    print("no common elements")
