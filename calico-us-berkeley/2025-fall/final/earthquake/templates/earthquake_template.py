def solve(N: int, persons: list[tuple[float, float, float, str]]) -> tuple[int, int, int, int]:
    """
    Return a tuple with 4 values denoting the floor and ceil bounds of the
    epicenter of the earthquake: floor_xE, floor_yE, ceil_xE, ceil_yE
    
    N: the number of persons
    persons: a list of N tuples (Xi, Yi, Si, Ri) denoting a person
    """
    # YOUR CODE HERE
    return 0, 0, 1, 1

def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        persons = []
        for _ in range(N):
            Xi, Yi, Si, Ri = input().split()
            persons.append((float(Xi), float(Yi), float(Si), Ri))
        floor_x_E, floor_y_E, ceil_x_E, ceil_y_E = solve(N, persons)
        print(floor_x_E, floor_y_E, ceil_x_E, ceil_y_E)

if __name__ == '__main__':
    main()
