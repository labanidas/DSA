#The round() function returns a floating point number that is a rounded version of the specified number, with the specified number of decimals.
#The default number of decimals is 0, meaning that the function will return the nearest integer.
#Syntax- round(number, digits)

import os

x = round(5.76543, 2)
print(x)

x = round(5.76543)
print(x)

os.system("pause")