s =  input("Enter a string: ")
char_count = 0
for c in s:
	char_count +=1
print(char_count)

print(s.upper(), s.lower())
print(s.replace(' ', '_'))
if 'Python' in s:
	print('Python is in the sentence') 
else: 
	print('Python is not in the sentence') 
