a=list(input())
b=len(a)
for i in range(len(a)):
    if a[i]=="-":
        print("fu",end="")
    elif a[i]=="1":
        print("yi",end="")
    elif a[i]=="2":
        print("er",end="")
    elif a[i]=="3":
        print("san",end="")
    elif a[i]=="4":
        print("si",end="")
    elif a[i]=="5":
        print("wu",end="")
    elif a[i]=="6":
        print("liu",end="")
    elif a[i]=="7":
        print("qi",end="")
    elif a[i]=="8":
        print("ba",end="")
    elif a[i]=="9":
        print("jiu",end="")
    elif a[i]=="0":
        print("ling",end="")
    if(i!=len(a)-1):
        print(" ",end="")
