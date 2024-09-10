
term=int(input("Enter term:"))
i=1
j=0
num=1
while(i<=term):
    sum=0
    for j in range(1,num):
        if(num%j==0):
            sum+=j
    if(sum==num):
         i+=1
         print(num)
    num+=1
