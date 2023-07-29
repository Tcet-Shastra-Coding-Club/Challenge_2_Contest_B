for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    sum = 0
    flag  = True
    for i in range(n):
        if sum >= arr[i]:
            flag = False
            break
        sum += arr[i]
    
    if flag: 
        print(1)
    else:
        print(0)