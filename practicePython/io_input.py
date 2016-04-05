def reverse(text):
    return text[::-1]


def isPalindrome(text):
    return text == reverse(text)

something = input("Enter Text: ")
if isPalindrome(something):
    print("Yes, It is palindrome")
else:
    print("No, it's not a palindrome")
