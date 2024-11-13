def solve(N: int, S: int, E: int, P: list[int]) -> int:
    """
    Return the expected length of a path that starts at node 1 in the pachinko.

    N: number of nodes in the pachinko
    S: starting node of the flipper
    E: ending node of the flipper
    P: list of parent nodes in the pachinko
    """
    # YOUR CODE HERE
    return 0


def main():
    T = int(input())
    for _ in range(T):
        N, S, E = [int(x) for x in input().split()]
        P = [int(x) for x in input().split()]
        print(solve(N, S, E, P))


if __name__ == '__main__':
    main()
