def addbeg(value):
    a.insert(0,value)
    print(a)
    
    
def addlast(value):
    a.append(value)
    
def addpos(pos):
    a.insert(pos-1,value)
    
def delete(value):
    a.pop(value)
    
def delast(value):
    a.pop()
    
def delpos(value):
    num=value-1
    a.pop(val)
    
def display():
    for i in range(len(a)):
        print(a[i],end=" ")
    
    
a=[]

while(True):
b=int(input('''1.addbeg()
         2.addlast()
         3.addpos()
         4. delete()
         5.delast()
         6. delpos()
         7.display()'''))
if b==1:
        value=input("enter the value:")
        addbeg(value)
elif b==2:
    value=input("enter the value:")
    addlast(value)
elif b==3:
    pos=input("enter the value:")
    addpos()
elif b==4:
            delete()
elif b==5:
            delast()
elif b==6:
            delpos()
elif b==7:
            display()
elif b==8:
        break
