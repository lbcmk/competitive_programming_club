n = int(input())

for i in range(n):
	a = input();
	b = input();
	c = input();

	if(a.startswith(b) or a.startswith(c) or b.startswith(a) or b.startswith(c) or c.startswith(a) or c.startswith(b) or a.endswith(b) or a.endswith(c) or b.endswith(a) or b.endswith(c) or c.endswith(a) or c.endswith(b)):
		print("No")
	else:
		print("Yes")