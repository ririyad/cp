dictionary = {}
a = int(input())

for i in range(a):
	b = input()
	c = b.split()

su = float(c[1]) + float(c[2]) + float(c[3])
av = su/3
dictionary[c[0]] = av
e = input()

print('%.2f'% dictionary[e])