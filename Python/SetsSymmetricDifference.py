raw_input()
set1 = set(map(int,raw_input().split()))
raw_input()
set2 = set(map(int,raw_input().split()))
symmetric_difference = set1.symmetric_difference(set2)
for i in sorted(list(symmetric_difference)):
    print i
