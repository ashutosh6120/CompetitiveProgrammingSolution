#https://www.codechef.com/COOK129C/problems/MARARUN
#Author - Ashutosh Dodamani, SJCE Mysore
#@ ashutosh6120

# cook your dish here
t=int(input())

while t:
    D,d,A,B,C = map(int, input().split())
    
    a=10
    b=21
    c=42
    
    count=0
    toggle = False
    
    check = D*d
    if(check>=a):
        count=A
        toggle=True

    if(check>=b):
        count=B
        toggle=True
        
    if(check>=c):
        count=C
        toggle=True
    if toggle == True:
        print(count)
        
    else:
        print(0)
    
    t-=1
    