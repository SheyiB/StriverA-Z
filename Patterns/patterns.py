def pattern_one():
    for i in range(5):
        print("*" * 5)


def pattern_two():
    for i in range(5):
        k = int(i) + 1
        print("*" * k)

def pattern_three():
    num = []
    for i in range(5):
        num.append(str(i+1))
        print(''.join(num))

def pattern_three_v2():
#User function Template for python3
    for i in range(5):
        for x in range(i+1):
            print(x+1, end = ' ')
        print(" ")


class Solution:
    def printTriangle(self, N):
        for i in range(1, N+1, 1):
            for j in range(1, i+1, 1):
                print (j, end = ' ')
            print('')


def pattern_four():
    for i in range(1,6,1):
        print(str(i) * i )

def pattern_five():
    for i in range(5,0,-1):
        print("*" * i)

def pattern_six():
    for i in range(5,0,-1):
        for x in range(1, i+1):
            print(x, end="")
        print(' ')

def pattern_seven():
    y = 5 
    for i in range(1,y+1):
        spaces = y-i
        stars = 2*i - 1  
        print(" "*spaces+"*"*stars+" "*spaces)
    
#User function Template for python3
N = 5
for i in range(1,N+1):
    c=2*i-1
    for j in range(N-i):
        print(' ',end='')
    for j in range(c):
        print('*',end='')
    print()

p = 5
for i in range(p, 0, -1):
    stars = (2*i) - 1
    spaces = p - i
    print(' '*spaces + '*' * stars + ''*spaces)

n=5
for i in range(1,n+1):
    print("*" * i)
for i in range(n-1,0,-1):
    print("*" * i)

n=5
for i in range(1,n+1):
    for x in range(i,0,-1):
        print(x%2, end=' ')
    print("")

n = 4
for i in range(1,n+1):
    spaces = 2*(n -i)
    for x in range(1,i+1):       
        print(x,  end=' ')
    for x in range(spaces,0,-1):       
        print(" ",  end=' ')
    for x in range(i,0,-1):
        print(x,  end=' ')
    print("")

N = 6
val = 0
for i in range(1,N+1):
    for x in range(i):
        val+=1
        print(val, end=" ")
    print("")

N=5
val = 65
for i in range(1,N+1):
    for x in range(i):
        current = chr(val+x)
        print(chr(val+x), end='')
    print(" ")

N=5
val = 65
for i in range(N,0,-1):
    for x in range(i):
        current = chr(val+x)
        print(chr(val+x), end='')
    print(" ")

N=5
val = 65
for i in range(N):
    mult = i+1
    print(chr(val+i) * mult)
    

N = 4

for i in range(1,N+1):
    inc = 0
    spaces = N-i
    reducing_point = (2*i-1)//2 
    print("*" * spaces, end='')
    for x in range(2*i-1):
        
        print(chr(65+inc), end='')
        if x < reducing_point:
            inc+=1
        else:
            inc-=1
    print("*" * spaces, end='')
    print(" ")


N = 3
for i in range(0,N):
    for x in range(i, -1, -1):
        print(chr(65+(N-x-1)), end=" ")
    print(" ")

N=2
y = 0
l = N
for i in range(N, 0, -1):
    print("*" * l+" " * y+"*" * l )
    y +=2
    l -=1
y = 1
l = N-1
for i in range(1,N+1):
    print("*" * y+(" " * (l*2))+"*" * y )
    y +=1
    l -=1

N=10
y = 1
l = N-1
for i in range(1,N+1):
    print("*" * y+(" " * (l*2))+"*" * y )
    y +=1
    l -=1
y = 2
l = N-1
for i in range(N, 1, -1):
    print("*" * l+" " * y+"*" * l )
    y +=2
    l -=1

N=4
print("*" * N)
for i in range(N-2,0, -1):
    print("*" +  (" " * (N-2)) + "*")
print("*" * N)



N=5
y = 1
l = N-1
for i in range(1,N+1):
    print("*" * y+(" " * (l*2))+"*" * y )
    y +=1
    l -=1
y = 2
l = N-1
for i in range(N, 1, -1):
    print("*" * l+" " * y+"*" * l )
    y +=2
    l -=1

N= 4
for i in range(2*N-1 ):
    for x in range(2*N-1):
        top = i
        left = x
        down = (2*N -2 ) - x;
        right = (2*N-2) - i;
        val = min(top, left, down, right)
        print(N-val, end=" ")

    print(" ")

"""



# print(int("-0123"))

# name = "-123"
# lint = [i for i in name]

# print(lint)

# class Solution:
#     def reverse(self, x: int) -> int:
#         rev = int(str(abs(x))[::-1])
#         return (-rev if x < 0 else rev) if rev.bit_length() < 32 else 0

# N = 123
# rev = 0
# for i in range(len(str(N))):
#     last = N%10
#     N = N//10
#     rev = rev * 10 + last
# print(rev) 

N = 170
N_len = len(str(N))
total = 0
da_list = [int(i) for i in str(N)]
for i in da_list:
    print(i, N_len, int(i) ** N_len)
    total += (int(i) ** N_len)
if total == N:
    print(True, total, N)
else:
    print(False, total, N)