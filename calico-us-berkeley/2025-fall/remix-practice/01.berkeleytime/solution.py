def solve(time: int) -> int:
    if time >= 180:
        return "canceled"
    elif time == 0:
        return "haha good one"	
    else:
        return "berkeley" * int(time / 10) + "time"

def main():
    T = int(input())
    for _ in range(T):
        time = int(input())
        print(solve(time))


if __name__ == '__main__':
    main()
