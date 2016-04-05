def reverse(text):
    return text[::-1]


def isPalindrome(text):
    return text == reverse(text)

fchars = (
    '.', '?', '!', ';', '-', '_', ':',
    '()', '[]', '...', ' ', '/', ','
    )
something = input("Enter text: ")

for i in something:
    if i in fchars:
        something = something.replace(i, "")
if isPalindrome(something):
    print('Yes, It is palindrome')
else:
    print('No, it is not a palindrome')
