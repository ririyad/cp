#my shoppiing list
shopList = ['a', 'b', 'c', 'd', 'e']
print('I have', len(shopList), 'items to purchase')
print('This items are:', end=' ')
for item in shopList:
    print(item, end=' ')

print()
print('Also, I have to buy f')
shopList.append('f')
print('my shoplist is now', shopList)

print('I will sort mylistn now')
shopList.sort()
print('The first item I will buy is ', shopList[0])
oldItem = shopList[0]
del shopList[0]
print('I bought the', oldItem)

shopList.append('hi')
print(shopList)