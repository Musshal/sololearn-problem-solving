# problem solver: musshal

dict = [
  'zero', 'one',
  'two', 'three',
  'four', 'five',
  'six', 'seven',
  'eight', 'nine',
  'ten'
]

phrase = input().replace('10', dict[10])

for i in range(10):
  phrase = phrase.replace(str(i), dict[i])
  
print(phrase)
