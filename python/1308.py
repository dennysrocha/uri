if __name__ == '__main__':
    for _ in range(int(input())):
        N = int(input())
        if N == 1:
            print(1)
        else:
            print(int(1/2*(-1 + (1 + 8*N)**0.5)))

# to solve the problem, note that the sum of warriors can be written as:
# S_n =  1 + 2 + 3 + ... + (n-2) + (n-1) + n
# S_n = (1 + n) + (2 + (n-1)) + (3 + (n-2)) + ...
# S_n = (n/2)*(1 + n)
# then, we need to find maximum that satisfies S_n <= N:
# (n/2)(1 + n) - N <= 0
# n^2 + n - 2N <= 0
# (1/2)*(-1 - sqrt(1 + 8N)) <= n <= (1/2)*(-1 + sqrt(1 + 8N))
# the maximum occurs at n = (1/2)*(-1 + sqrt(1 + 8N))