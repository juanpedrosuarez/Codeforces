n = int(input())
 
for i in range(n):
	nl = int(input())
	p = input()
	pi = "Timur"
	p = list(p)
	pi = list(pi)
	pi.sort()
	p.sort()
	
	if(pi == p and nl ==5):
		print("YES")
	else:
		print("NO")
