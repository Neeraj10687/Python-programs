st ="hello world"
freq ={}
for x in st:
    if x in freq:
        freq[x] +=1
    else:
        freq[x] =1

print(freq)
