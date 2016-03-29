#Explicit is better than implicit
#tuples are immutable
zoo = ('a', 'b', 'c', 'd', 'e')
print('Number of animal in zoo is', len(zoo))

new_zoo = ('f', 'g', zoo)
print('Number of animal in zoo is', len(new_zoo))

print(zoo)
print(new_zoo)
print(zoo)