import re
s = input()
 
if("WUB" in s):
	s = re.sub("WUB"," ",s)
	print(s)
else:
    print(s)
