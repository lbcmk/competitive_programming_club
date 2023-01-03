import re

txt = input();
while(txt != "The End"):
	x = re.search("<A HREF=.*\">", txt) 
	
	if(x is not None):
		print(x.span())
		print(txt[x.span()[0]:x.span()[1]])
		# print(re.search)
	
	txt = input();
