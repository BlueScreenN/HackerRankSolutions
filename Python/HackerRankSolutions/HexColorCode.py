import re

n = int(input())

if 1 <= n <= 50:
    allMatches = []

    for _ in range(n):
        matches = re.findall(r':?.(#[0-9a-fA-F]{6}|#[0-9a-fA-F]{3})', input())
        if matches:
            allMatches.extend(matches)

    print(*allMatches, sep='\n')

else:
    print(1-50)
