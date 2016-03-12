number_string = input("Enter some numbers: ")
# Create List
number_list = [0]

# Create variable to use as accumulator
total = 0

# Use for loop to take single int from string and put in list
for num in number_string:
    number_list.append(int(num))

# Sum the list
for value in number_list:
    total += value

print(total)