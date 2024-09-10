def recr(l):
    if(l!=[]):
        print(l[0],end=" ")
        recr(l[1:])
list1=[10,20,30,40,50,60]
recr(list1)