# See NestedLists.png for problem definition
n = int(raw_input())
nested_list = [[raw_input(), float(raw_input())] for _ in range(n)]
scores = sorted({x[1] for x in nested_list})
second_lowest = sorted(x[0] for x in nested_list if x[1] == scores[1])
print('\n'.join(second_lowest))
