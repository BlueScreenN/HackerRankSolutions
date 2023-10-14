import math

if __name__ == "__main__":
    N, M = map(int, input().split())

    if N%2 != 0 and M%2 != 0 and 5 < N and N < 101 and 15 < M and M < 303 and M/N == 3:

        dividedNumber = math.floor(M/2)
        dividedNumberMiddle = dividedNumber + math.floor(M/2) + 1
        variableOne = 0
        variableTwo = 0
        variableThree = 1

        for i in range(1, N):

            if math.floor(N/2) >= i:
                print((dividedNumber-(i+variableOne)) * "-" + (variableOne+1) * ".|." + (dividedNumber-(i+variableOne)) * "-")
                variableOne += 2
                variableTwo = variableOne-2

            if i == math.floor(N/2)+1:
                print((dividedNumber - 3) * "-" + "WELCOME" + (dividedNumber - 3)* "-")

            if math.floor(N/2) < i:
                print((dividedNumber-(i+variableTwo)+variableThree) * "-" + (variableTwo+1) * ".|." + (dividedNumber-(i+variableTwo)+variableThree) * "-")
                variableTwo -= 2
                variableThree += 2