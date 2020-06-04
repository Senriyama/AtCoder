#decimalは小数のこと.
import math
import decimal

a, b = map(decimal.Decimal, input().split())
print(math.floor(a * b))
