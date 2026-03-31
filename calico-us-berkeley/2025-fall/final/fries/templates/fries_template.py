def solve(L: int, N: int, S: str) -> int:
    """
    
    L: Length of bag string
    N: Target depth
    S: Bag string (characters can be '(', ')', '|', or 'O')
    """
    # YOUR CODE HERE
    return 0


def main():
    T = int(input())
    for _ in range(T):
        temp = input().split()
        L, N = int(temp[0]), int(temp[1])
        S = input()
        print(solve(L, N, S))

if __name__ == '__main__':
    main()