def maxi(x):
    if len(x)==1:
        return x[0]
    else:
        rest_max =maxi(x[1:])

        return x[0] if x[0] > rest_max else rest_max


pp=[1,3,5,4]
print(maxi(pp))
