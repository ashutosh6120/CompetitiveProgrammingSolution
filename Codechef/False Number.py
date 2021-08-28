#https://www.codechef.com/LTIME97C/problems/FALSNUM
#Author - Ashutosh Dodamani, SJCE Mysore
#@ ashutosh6120

# cook your dish here
try:
    for _ in range(int(input())):
        a=input()
        if(a[0]=='1'):
            b=a[0] + "0" + a[1:]
            print(b)
        else:
            b = "1" + a
            print(b)
except:
    pass