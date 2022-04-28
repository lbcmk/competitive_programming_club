arr = [];
psa = [];

from random import randint
for i in range(randint(5, 10)):
    arr.append(randint(0, 1000))

psa.append(arr[0])

for i in range(len(arr) - 1):
    psa.append(arr[i+1]+psa[i])

def q(start, end):
    start-=1
    return psa[end] - psa[start];

print(q(2, 4))
print(arr)
print(psa)