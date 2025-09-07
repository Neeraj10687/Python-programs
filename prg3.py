line='hello is hello'

count={ }
for i in line.split(' '):
    count[i] =count.get(i,0)+1
    
    
print(count)
