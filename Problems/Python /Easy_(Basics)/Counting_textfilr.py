f=open('my.txt','r')
c=f.read()
d={}
print(1)
while c!='':
    count=1
    e=c
    while c!=' ':
        e=e+c
        c=f.read(1)
    if e in d.keys() :
        count+=1
    d.update({e:count})
    print(d) 
f.close()
  
    '''Not Completed Yetttttttttttttttttttttttt'''
