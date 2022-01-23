import time
import random
start = time.time()
n=int(input())
M1=[[0]*n]*n
M2=[[0]*n]*n
M=[[0]*n]*n
for i in range(n):
    for j in range(n):
        M1[i][j]=random.randint(0,10)
        M2[i][j]=random.randint(0,10)
for k in range(n):
    for l in range(n):
        p=0
        for m in range(n):
            p+=M1[k][m]*M2[m][l]
        M[k][l]=p
end = time.time()
print("The time of execution of above program is :", end - start)

















































