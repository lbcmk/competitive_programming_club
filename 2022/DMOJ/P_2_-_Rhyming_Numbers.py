# https://dmoj.ca/problem/bsspc22c1p2

n = int(input())

for i in range(n):
	a, b = input().split()

	if(a.endswith("11") and b.endswith("7") and not b.endswith("17")):
		print("YES")
	elif(a.endswith("7") and not a.endswith("17") and b.endswith("11")):
		print("YES")
	else:
		print("NO")
	