arr[]=list(map(int,input().split()))
big=arr[0]
for i in range(1,n):
  if arr[i]>=big:
    big=arr[i]
print("the largest no. is: ",big)
  
