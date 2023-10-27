class Sol:
    def Triangle(self, N):
        for i in range(N):
            for j in range(N - i):
                print(j + 1, end="")
            print()

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        obj = Sol()
        obj.Triangle(N)
