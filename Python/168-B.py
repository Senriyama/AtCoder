inputk = input()
k = int(inputk)
s = input()
#len()は文字数取得
if(len(s) <= k): print(s)
else: print(s[0 : k] + "...")
