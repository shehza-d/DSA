def solve(N: int, X: list[int]) -> int:
    """
    Return the best number to "zero out" in order to
    minimize the expected value of a dice roll.
    
    N: the number of faces on the die
    X: the list of numbers on each face of the die
    """
    # YOUR CODE HERE
    return 0


def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        X = [int(x) for x in input().strip().split(' ')]
        print(solve(N, X))

if __name__ == '__main__':
    main()
