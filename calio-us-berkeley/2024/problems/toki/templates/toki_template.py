def solve(W: str) -> str:
    """
    Determine if the word W follows the rules of toki pona phonotactics.
    
    W: the word to check
    """
    # YOUR CODE HERE
    return 'pona'

def main():
    T = int(input())
    for _ in range(T):
        W = input()
        print(solve(W))

if __name__ == '__main__':
    main()
