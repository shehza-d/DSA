def solve(E: str, D: int, M: int, Y: int) -> str:
    """

    E: The name of the event
    Y: Year
    M: Month
    D: Day
    """
    # YOUR CODE HERE
    return ""

def main():
    T = int(input())
    for _ in range(T):
        E = input()
        temp = input().split()
        Y, M, D = int(temp[0]), int(temp[1]), int(temp[2])
        print(solve(E, Y, M, D))

if __name__ == 'main':
    main()