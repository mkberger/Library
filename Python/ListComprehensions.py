# See ListComprehensions.png for problem definition
x, y, z, n = (int(raw_input()) for _ in range(4))
cuboid = ([[a,b,c] for a in range(x+1) for b in range(y+1) for c in range(z+1) if a + b + c != n])
print cuboid
