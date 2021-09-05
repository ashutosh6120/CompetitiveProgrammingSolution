#https://www.codechef.com/AUG21C/problems/PROBDIFF
#Author - Ashutosh Dodamani, SJCE Mysore
#@ ashutosh6120


# cook your dish here
t = int(input())
for i in range(t):
    l = list(map(int, input().split( )))
    a = set(l)
    if(len(a)==4):
        print(2)
    elif(len(a)==3):
        print(2)
    elif(len(a)==2):
        l.sort()
        b = l[0]
        if(l.count(b)==2):
            print(2)
        else:
            print(1)
    else:
        print(0)