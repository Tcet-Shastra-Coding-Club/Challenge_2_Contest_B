for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    brr = list(map(int, input().split()))    
    
    arr.sort()
    brr.sort()
    flag = True
    for i in range(n):
        if arr[i] != brr[i]:
            flag = False
            break
        
    if(flag):
        print("true")
    else:
        print("false")