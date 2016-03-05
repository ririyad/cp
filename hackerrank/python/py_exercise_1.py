# Enter a number n from user
# Using list, enter n values from the user
# Show the summation of the list

res = 0
sum_list = [0]

num = input("How many numbers? ")

for i in range(int(num)):
	ivaL = input()
	sum_list.append(int(ivaL))

for i in sum_list:
	res += i

print(res)