def solve(S: str, K: int) -> int:
    """
    Return the score of S amplified K times
    
    S: string to amplify
    K: integer for number of times to amplify
    """
    # YOUR CODE HERE
    return 0


def main():
    T = int(input())
    for _ in range(T):
        temp = input().split()
        S, K = temp[0], int(temp[1])
        print(solve(S, K))

if __name__ == '__main__':
    main()
