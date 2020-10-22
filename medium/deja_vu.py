# problem solver: musshal

letter = input()
char_dict = {}

for char in letter:
  if char in char_dict:
    char_dict[char] += 1
  else:
    char_dict[char] = 1
    
dejavu = False
for char, value in char_dict.items():
  if (value>1):
    dejavu = True
    break
    
if dejavu:
  print("Deja Vu")
else:
  print("Unique")
