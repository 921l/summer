a=list(int(x) for x in input())
b={}
for i in a:
    if(i not in b):
        b[i]=1
    else:
        b[i]+=1
a=sorted(b.keys())
for i in a:
    print("%d:%d"%(i,b[i]))
