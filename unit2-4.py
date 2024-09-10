def  binarysearch(l,sEle):
    low=1
    high=len(l)
    mid=1
    l.sort()
    while(high>=low):
        mid=int((high+low)/2)
        if(l[mid]==sEle):
             print("{} is available in array And index is {}".format(sEle,mid))
             break 
        elif(l[mid]<sEle):
            low=mid+1
        else:
            high=mid-1
    if(low>high):
        print("{} is not available in array:".format(sEle))
l=list()
choice=0
while(True):
    print("\n1:insert")
    print("2:BinarySearch")
    print("3:display")
    print("4:exit")
    choice=int(input("Enter your choice:"))
    
    if(choice==1):
        val=int(input("Enter value for list:"))
        l.append(val)
    
    elif(choice==2):
        sele=int(input("Enter value for search:"))
        binarysearch(l,sele)
    elif(choice==3):
        l.sort()
        for i in l:
            print(i,end=" ")
    elif(choice==4):
        break
        
