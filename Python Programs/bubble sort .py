l=[]
n=int(input("Enter number of elemnets : "))
for i in range(0,n):
    l.append(int(input("Enter elements ; ")))
for i in range(0,n):
    for i in range(0,n-i-1):
        if l[i]>l[i+1]:
            l[i],l[i+1]=l[i+1],l[i]
print("Sorted list\n",l)