def solve(A: int, P: list[float]) -> None:
    """

    P: list of floating point numbers. Each floating point number represents 
    the probability between 0 and 1 of a successful reaction.

    Prints a sequence of actions to standard output that represents the best
    strategy to maximize the number of successful reactions.
    """

    # YOUR CODE HERE
    print("NEXT")

def main():
    P = []
    A = int(input())
    for _ in range(A):
        P.append(float(input()))
    solve(A, P)

if __name__ == '__main__':
    main()
