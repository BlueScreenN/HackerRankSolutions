if __name__ == '__main__':

    studentList = []
    studentNumber = int(input())
    runnerUpList = []

    if studentNumber <= 5 and studentNumber >= 2:
        for i in range(studentNumber):
            name = input()
            no = float(input())

            studentList.append([name, no])

    sortedResult = sorted(studentList, key=lambda x: x[1])

    lowestGrade = sortedResult[0][1]
    countOfLowestGrade = sum(1 for _, grade in studentList if grade == lowestGrade)

    runnersUpGrade = sortedResult[countOfLowestGrade][1]
    runnersUpLowestGrade = sum(1 for _, grade in studentList if grade == runnersUpGrade)


    for i in range (countOfLowestGrade, runnersUpLowestGrade+countOfLowestGrade):
        runnerUpList.append(sortedResult[i][0])


    runnerUpList = sorted(runnerUpList, key=lambda x: x[0])

    for i in runnerUpList:
        print(i)