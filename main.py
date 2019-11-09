

def main():
    print('Hello world.')


def show_version():
    print('This is a branch with a new function.')


def show_a_new_branch():
    print('This is a f2 branch.')


def add(a, b):
    return a+b


def pos(a, b):
    return a-b


def mul(a, b):
    return a*b


if __name__ == '__main__':
    main()
    show_version()
    show_a_new_branch()

    add(1, 2)
    pos(1, 2)
    mul(2, 3)
