import os
from collections import Counter


# the Counter(list) functions counts the number of times each element has occured in the list .It takes the list as argument that we want to count ; while the count(x) function takes exactly one argument -> the KEY whose number of occurences we want to count in a list 

list1 = ['x','y','z','x','x','x','y', 'z']
print(Counter(list1))
print(list1.count('x'))

os.system("pause")