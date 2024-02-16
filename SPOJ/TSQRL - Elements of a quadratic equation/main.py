import math
from decimal import Decimal, getcontext

def newtonSquare(underSquareValue, floorValue, precision):
    getcontext().prec = 102
    epsilon = Decimal('0.0000000000000000000000000000000000000000000000001')

    precision1 = floorValue - (floorValue ** 2 - underSquareValue) / (2 * floorValue)
    if abs(precision1 - floorValue) < epsilon:
        return precision1
    precision1 = precision1 - floorValue
    return newtonSquare(underSquareValue, precision1 + floorValue, precision)

t = int(input())

for i in range(t):
    a, b, c, precision = map(int, input().split())

    delta = Decimal(b ** 2 - 4 * a * c)
    if delta < 0:
        print(0)
        continue
    elif delta > 0:
        sqrt_delta = newtonSquare(delta, Decimal(math.floor(delta)), Decimal('0.000000000000000000000000000000001'))
        sqrt_delta = sqrt_delta if sqrt_delta > 0 else Decimal(0)
    else:
        sqrt_delta = Decimal(0)


    x1 = (-b - sqrt_delta) / (2 * a)
    x2 = (-b + sqrt_delta) / (2 * a)
    if x1 != x2:
        if x1 > x2:
            x1, x2 = x2, x1
        print(2, round(x1, precision), round(x2, precision))
    else:
        print(1, round(x1, precision))
