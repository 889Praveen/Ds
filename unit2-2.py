pre='A'
next='B'
sum1=""
num=input("Enter term:")
while(1):
 if(not num.isnumeric()):
    num=input("Enter term:")
 else:
    break
num=int(num)
print(pre,"",next,end="")
for i in range(num):
    print(sum1,end=" ")
    sum1=next+pre
    pre=next
    next=sum1