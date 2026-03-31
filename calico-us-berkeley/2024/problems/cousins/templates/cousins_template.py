def solve(N: int, M: int, A: list[int], G: list[list[int]]) -> None:
    """
    For each game, output who wins the game in one line
    
    N: size of the game board
    M: number of different games
    A: game board
    G: description of each game
    """
    # YOUR CODE HERE
    return



def main():
    N, M = [int(x) for x in input().split()]
    A = [int(x) for x in input().split()]
    G = []
    for i in range(M):
        G.append([int(x) for x in input().split()])
    solve(N, M, A, G)


if __name__ == '__main__':
    main()
