def solve(a):
    """
    Solves the sequence problem.

    Args:
      a: The sequence of 0s and 1s.

    Returns:
      A list of integers representing the sequence of operations to be performed.
    """

    n = len(a)
    b = [0] * n  # Initialize b with all zeros
    p = []

    for i in range(n):
        if a[i] != b[i]:
            for j in range(i, -1, -1):
                b[j] = 1 - b[j]
            p.append(i)

    if b == a:
        return p
    else:
        return []


def main():
    """
    Main function.
    """

    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        p = solve(a)
        if p:
            print("YES")
            print(*p)
        else:
            print("NO")


if __name__ == "__main__":
    main()
