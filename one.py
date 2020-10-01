arr[]=list(map(int,input().split()))
bignum=arr[0]
for i in range(1,n):
  if arr[i]>bignum:
    bignum=arr[i]
print("the largest no. is: ",bignum)
  
