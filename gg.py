import math

def main():
    t = int(input())
    while t > 0:
        t -= 1
        n = int(input())
        x = []
        y = []
        for i in range(n):
            xi, yi = map(int, input().split())
            x.append(xi)
            y.append(yi)
        
        xs, ys, xt, yt = map(int, input().split())
        
        a = []
        for i in range(n):
            dist = math.sqrt((x[i] - xt) ** 2 + (y[i] - yt) ** 2)
            a.append(dist)
        
        a.sort()
        g = math.sqrt((xs - xt) ** 2 + (ys - yt) ** 2)
        
        print(g)
        print(a[0])
        if g < a[0]:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()
