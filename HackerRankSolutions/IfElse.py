def evaluate_number(n):
    if 1 <= n <= 100:
        if n % 2 != 0:
            print("Weird")
        elif n % 2 == 0 and 2 <= n <= 5:
            print("Not Weird")
        elif n % 2 == 0 and 6 <= n <= 20:
            print("Weird")
        elif n % 2 == 0 and n > 20:
            print("Not Weird")
    else:
        print("Input is out of constraints.")

n = int(input())
evaluate_number(n)