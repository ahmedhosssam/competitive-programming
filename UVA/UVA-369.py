import math

while True:
    n, m = map(int, input().split())
    #n = input()
    #m = input()
    if n == 0 and m == 0:
        break
    res = math.factorial(n) // (math.factorial(n-m) * math.factorial(m))
    print(n ,"things taken", m ,"at a time is", res ,"exactly.")
    #100 things taken 6 at a time is 1192052400 exactly.
