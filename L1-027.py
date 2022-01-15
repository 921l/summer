a=list(int(x) for x in input())
arr=set()
index=[]
for i in a:
    if i in arr:
        continue;
    else:
        b=int(i)
        arr.add(b)
arr=sorted(arr,reverse=True)
for i in range(0,11):
      for x in range(0,len(arr)):
        if(arr[x]==a[i]):
             j=x
             index.append(j)
             break
print("int[] arr = new int[]{",end="")
for i in range(len(arr)):
    if(i!=len(arr)-1):
        print(arr[i],end=",")
    else:
        print(arr[i],end="};")
        print("\n",end="")
print("int[] index = new int[]{",end="")
for i in range(len(index)):
    if(i!=len(index)-1):
        print(index[i],end=",")
    else:
        print(index[i],end="};")
