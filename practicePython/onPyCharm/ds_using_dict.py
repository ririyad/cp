#address book
ab = {
    'riyad': 'riyad@mail.com',
    'rashedul': 'rashedul@mail.com',
    'kamal': 'kamal@mail.com',
    'ahsan': 'ashan@mail.com'
}

print('riyad\'s address is ', ab['riyad'])
del ab['riyad']

print('there are {} contacts in the address book'.format(len(ab)))

for name, address in ab.items():
    print('Contact {} at {}'.format(name, address))
ab['abul'] = 'abulmal@mail.com'
if 'abul' in ab:
    print('Abul\'s address is ', ab['abul'])