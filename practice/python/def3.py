def ask_user(prompt, retries, message):
    while True:
        ok = input(prompt)
        if ok in ('y', 'ye', 'yes'):
            return True
        if ok in ('n', 'no', 'nop', 'nope', 'never'):
            return False
        retries-= 1
        if retries < 0:
            raise OSError('Fuck off, stupid user!')
        print(message)


ask_user('Do you want to quit?', 3, 'Hey, just type yes or no! Nothing else!')
