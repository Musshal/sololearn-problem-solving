# problem solver: musshal

sales = int(input())
revenue = sales*3000000

if (revenue > 21000000):
  print("Profit")
elif (revenue == 21000000):
  print("Broke Even")
else:
  print("Loss")
