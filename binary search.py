n = int(input("length of array: "))
arr=list(map(int,input().split()))
k = int(input("Want to find: "))
low = 0
high = n - 1
while low<=high:
    middle = (low+high)//2
    if k<arr[middle]:
        high = middle - 1
    elif k>arr[middle]:
        low = middle + 1
    else :
        c = 0
        break
    c = 1 
if c==0:
    print ("we found the number",k,"it is at position",middle+1," of array")
else : 
    print("It was not found")

j = input("press any key to end the program")
