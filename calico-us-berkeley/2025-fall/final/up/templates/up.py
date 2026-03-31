def solve(N: int, M: int, G: list[str]) -> int:
    """
    Return the top-down area of the shape
    
    N: number of rows
    M: number of columns
    G: an N by M grid representing the front-view and depths of the character
    """
    # YOUR CODE HERE
    return 0


def main():
    T = int(input())
    for _ in range(T):
        temp = input().split()
        N, M = int(temp[0]), int(temp[1])
        G = []
        for _ in range(N):
            row = input()
            G.append(row)
    print(solve(N, M, G))

if __name__ == '__main__':
    main()
