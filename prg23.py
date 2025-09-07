import math

results =[]
for x in range(1000,10000):
    root =int(math.sqrt(x))
    if root* root ==x:
        if all(int(d)%2==0 for  d in str(x)):
            results.append(x)

print(results)

