poem = '''\
Programming is fun
When work is done
if you wanna make your work also fun
use python!
'''

# open for writing
f = open('poem.txt', 'w')
f.write(poem)
f.close()

# Here no mode is selected; by default, read mode will be selected
f = open('poem.txt')
while True:
    line = f.readline()
    if len(line) == 0:
        break
    print(line, end='')

f.close()
