print('Simple Assignment')
shopList = ['apple', 'mango', 'carrot', 'banana']
myList = shopList

del shopList[0]
#they refer to the same object
#so, result will be same
print('shoplist is:',shopList)
print('mylist is', myList)

print('Copy by making full slice')
myList = shopList[:]

del myList[0]
print('shoplist is: ', shopList)
print('mylist is: ', myList)