# Generate multiples of n
while True:
    n = int(input())
    data = [1,n]
    for i in range(2, int((n//2)/2)-1 ):
        if n%i == 0:
            data.append(i)
            data.append(n//i)
    print(data)
