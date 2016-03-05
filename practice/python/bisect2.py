def mysqrt(X):
    lo = 0.0
    hi = X

    for step in range(64):
        mid = (lo+hi)/2
        print(lo, hi, mid, mid*mid)
        if mid*mid > X:
            hi = mid
        else:
            lo = mid
    print(mid, mid*mid)

mysqrt(15)
