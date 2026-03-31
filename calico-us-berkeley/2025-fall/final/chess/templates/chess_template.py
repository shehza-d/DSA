def solve(N: int, M: int, K: int, P: list[tuple[str, int, int]]) -> int:
    """
    
    N: Number of rows of the board
    M: Number of columns of the board
    K: Number of pieces
    P: list of tuples. Each tuple contains (piece type, x position, y position)
    """
    # YOUR CODE HERE
    return 0


def main():
    T = int(input())
    for _ in range(T):
        temp = input().split()
        N, M = int(temp[0]), int(temp[1])
        K = int(input())
        P = []
        for _ in range(K):
            temp = input().split()
            temp_tuple = (str(temp[0]), int(temp[1]), int(temp[2]))
            P.append(temp_tuple)
        print(solve(N, M, K, P))

if __name__ == '__main__':
    main()
