def solve(N: int,  M: int, X: list[int], Y: list[int], Z: list[int]) -> int:
    """
    Return the minimum amount of extra money needed to pay off all debts
    N: number of people
    M: number of debts
    X[i]: person in debt
    Y[i]: person who is owed the debt
    Z[i]: amount of money that is owed
    """
    # YOUR CODE HERE
    return 0


def main():
    T = int(input())
    for _ in range(T):
        N, M = map(int, input().split())
        X, Y, Z = [], [], []
        for i in range(M):
            x, y, z = map(int, input().split())
            X.append(x)
            Y.append(y)
            Z.append(z)
        print(solve(N, M, X, Y, Z))

if __name__ == '__main__':
    main()