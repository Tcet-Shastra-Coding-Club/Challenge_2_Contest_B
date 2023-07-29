for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    
    mx = 0
    for i in range(n):
        if arr[i] > mx:
            mx = arr[i]
            
    for i in range(n):
        arr[i] += mx
        
    print(' '.join(map(str, arr)))