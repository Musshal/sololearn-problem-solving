# problem solver: musshal

import re

link = input()
id = re.search(r'[^=/]*$', link).group()
print(id)
