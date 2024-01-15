if __name__ == '__main__':

    n = int(input())
    studentMarks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        studentMarks[name] = scores
    queryName = input()

    queryNotes = sum(studentMarks[queryName]) / 3
    print("{:.2f}".format(queryNotes))