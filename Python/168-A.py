ninput = input() #これはstr型
n = int(ninput) #これでint型に直す
digit = n % 10
if digit == 3:
  print('bon')
elif digit == 0 or digit == 1 or digit == 6 or digit == 8:
  print('pon')
else:
  print('hon')
