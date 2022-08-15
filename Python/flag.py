#Created by Ankit Yadav on 15/08/2022 

import turtle
t=turtle.Turtle()
turtle.bgcolor('white')
t.color('black')
l=850
b=l*2/9
R=b/2
t.speed(5)

#Start of creating function for chakra
def getpright(l):
    t.right(90)
    t.penup()
    t.fd(l)
    pright = t.pos()
    t.bk(l)
    t.pendown()
    t.left(90)
    return pright

def drawmid(R,r,n):
    t.circle(r,360/(2*n))
    pmid = t.pos()
    t.penup()
    t.right(90)
    t.fd(R)
    pend = t.pos()
    t.bk(R)
    t.pendown()
    t.left(90)
    return pmid,pend

def getpleft(r,n,l):
    t.circle(r,360/(2*n))
    return getpright(l)

def draw(R,r,n,w):
    t.fillcolor('navyblue')
    pleft = t.pos()
    l = R/3
    for i in range(n):
        if i == 0:
            pright = getpright(l)
        else:
            pright = pleft
        if i==0:
            pright0 = pright
        pmid,pend = drawmid(R,r,n)
        
        t.begin_fill()
        t.setpos(pright)
        t.setpos(pend)
        t.penup()
        t.setpos(pmid)
        t.pendown()
        
        if i==n-1:
            pleft = pright0
        else:
            pleft = getpleft(r,n,l)
        
        pnext = t.pos()
        t.penup()
        t.setpos(pmid)
        t.pendown()
        t.setpos(pleft)
        t.setpos(pend)
        t.end_fill()
        t.penup()
        t.setpos(pnext)
        t.pendown()
    t.circle(r,360/(2*n))
    t.begin_fill()
    t.circle(r)
    t.end_fill()
    t.penup()
    t.setpos(pend)
    t.pendown()
    t.right(360/(2*n))
    t.width(w)
    t.circle(R+r)

def chakra(R,n,w):
    t.color('#000080')
    r = R/8
    draw(R-r,r,n,w)
t.penup()
t.setpos(-800,-450)
t.left(90)
t.pendown()
#End of chakra

 #code for flag tricolour   
for j in range(3):
    for i in range(1,6):
        if i%2==1:
            if i==5:
                t.fd(b)
                t.left(90)
                i+=1
            else:
                if i==1:
                    if j==0:
                        t.fillcolor('#FF9933')   #saffron
                    elif j==1:
                        t.fillcolor('white')     #white
                    else:
                        t.fillcolor('#138808')   #india green
                    t.begin_fill()
                t.fd(l)
                t.right(90)
                i+=1
        else:
            t.fd(b)
            if i==4:
                t.end_fill()
                t.right(180)
            else:
                t.right(90)
            i+=1
#Setting position for chakra
t.penup()
r = R/8
t.fd(l/2+r)
t.left(90)
t.fd(b+R)
t.pendown()
t.speed(0)
chakra(R,24,R/500)      #calling chakra function to design it

#setting positions for Alphabets
t.penup()
t.goto(50,-400)
t.left(360/48)
t.pendown()
t.speed(0)

l = 100
w = 65
d = 20

t.pensize(10)
t.pencolor("#FF9933")  

begin = t.pos()
 
    #Defining each alphabet function and calling it
def H():
    t.fd(l)
    t.penup()
    t.bk(l/2)
    t.pendown()
    t.right(90)
    t.fd(w)
    t.left(90)
    t.fd(l/2)
    t.left(180)
    t.fd(l)
    t.left(90)
    t.penup()
    t.fd(d)
    t.left(90)
    t.pendown()
H()
p = t.pos()

def A():
    t.setpos(p+(-l,w/2))
    t.setpos(p+(0,w))
    t.left(20)
    t.fd(43)
    t.left(70)
    t.fd(36)
    t.penup()
    t.setpos(p+(0,w+d))
    t.right(90)
    t.pendown()
A()
p = t.pos()

def P():
    t.fd(l/2)
    t.right(90)
    t.circle(w/2,180)
    t.left(90)
    t.fd(l)
    t.penup()
    t.setpos(p+(0,w+d-20))
    t.left(180)
    t.pendown()
P()
p = t.pos()
P()
p = t.pos()

def Y():
    t.penup()
    t.fd(l)
    t.pendown()
    t.right(180-45)
    t.fd(l/2)
    t.left(90)
    t.setpos(p+(-l,w))
    t.setpos(p)
    t.penup()
    t.left(45)
    t.setpos(p+(0,w+d))
    t.pendown()

Y()
t.penup()
t.setpos(begin+(l+d*2,0))
begin = t.pos()
p = t.pos()
t.pendown()
t.color('#cccccc')

def I():
    t.fd(l)
    t.penup()
    t.setpos(p+(0,d))
    t.pendown()
I()
p = t.pos()

def N():
    t.fd(l)
    t.setpos(p+(0,w))
    t.fd(l)
    t.penup()
    t.setpos(p+(0,w+d))
    t.pendown()

N()
p = t.pos()

def D():
    t.right(90)
    t.circle(l/2,180)
    t.left(90)
    t.fd(l)
    t.penup()
    t.left(90)
    t.fd(w+d-20)
    t.left(90)
    t.pendown()

D()
p = t.pos()

def E():
    t.fd(l)
    t.right(90)
    t.fd(w)
    t.penup()
    t.right(90)
    t.fd(l/2)
    t.right(90)
    t.pendown()
    t.fd(w)
    t.left(90)
    t.fd(l/2)
    t.left(90)
    t.fd(w)
    t.penup()
    t.fd(d)
    t.left(90)
    t.pendown()
E()
p = t.pos()
P()
p = t.pos()-(0,d)
E()
p = t.pos()
N()
p = t.pos()
D()
p = t.pos()
E()
p = t.pos()
N()
p = t.pos()

def C():
    t.right(90)
    t.penup()
    t.fd(w)
    t.circle(l/2,15)
    t.pendown()
    t.circle(l/2,-210)
    t.penup()
    t.right(90-15)
    t.setpos(p+(0,d+w+10))
    t.pendown()
C()
p = t.pos()
E()
t.penup()
t.setpos(begin+(l+d*2,0))
t.pendown()

t.color('#138808')

D()
p = t.pos()
A()
p = t.pos()
Y()
p = t.pos()

turtle.done()
