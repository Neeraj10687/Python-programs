curr=int(input("enter current year "))
final=int(input("enter final year"))

for year in range(curr,final+1):
    if(year % 4==0 and year %100 !=0) or (year %400 ==0):
        print(year,)
