import time
import random
n=64
M1=[[0.1]*n]*n
M2=[[0.1]*n]*n
M=[[0.1]*n]*n
start1 = time.time()
for i in range(n):
    for j in range(n):
        M1[i][j]=random.uniform(0,10)
        M2[i][j]=random.uniform(0,10)
for k in range(n):
    for l in range(n):
        p=0
        for m in range(n):
            p+=M1[k][m]*M2[m][l]
        M[k][l]=p
end1= time.time()
print("The time of execution of meat portion of program is :", end1 - start1)



















































