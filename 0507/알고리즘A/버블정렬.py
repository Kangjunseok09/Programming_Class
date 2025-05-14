def bubble_sort(a):
    n = len(a)
    while True:
        change = False

        for i in range(n-1):
            if a[i] > a[i+1]:
                a[i], a[i+1] = a[i+1], a[i]
                change = True

        if change == False:
            return

s = list(map(int, input().split()))
bubble_sort(s)
print(s)
