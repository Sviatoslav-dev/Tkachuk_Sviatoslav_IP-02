from math import pow, log

a = float(input())
n = 1

if a >= 0 and a <= 2:
    eps = 0.000001
    f = pow((a - 1), n) / n

    while True:
        f0 = f
        n = n + 1

        if (n % 2 == 1):
                f = f0 + pow((a - 1), n) / n
        else:
            f = f0 - pow((a - 1), n) / n

        if f - f0 < eps:
            break

    print("Ln(a) = ", f)
    print("the value obtained by the standart function", log(a))