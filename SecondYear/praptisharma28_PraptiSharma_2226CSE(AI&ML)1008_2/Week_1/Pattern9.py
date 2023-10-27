class Sol:
    def Triangle(self, N):
        for i in range(1, 2*N):
            for j in range(1, 2*N):
                if j <= N - i or j >= N + i:
                    print(" ", end="")
                else:
                    print("*", end="")
            print()

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input().strip())
        obj = Sol()
        obj.Triangle(N)
