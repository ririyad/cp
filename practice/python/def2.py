def ask_ok(prompt, retries = -1, compliant = 'yes or no please'):
    while True:
        ok = input(prompt)
        if ok in ('y', 'ye', 'yes'):
            return True
        if ok in ('n', 'no', 'nop', 'nope'):
            return False
        retries -= 1
        if retries < 0:
            raise OSError('uncooperative user')
        print(compliant)
#ask_ok('Do you really want to quit?')
ask_ok('OK to overwrite the file?', 5, 'Come ON!! only yes or NO')
