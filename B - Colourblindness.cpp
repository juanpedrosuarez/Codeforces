n = int(input())
 
for i in range(n):
	a = int(input())
 
	x = input()
	y = input()
 
	x = x.replace("B", "G")
	y = y.replace("B", "G")
	if x == y:
		print("YES")
	else:
		print("NO")
