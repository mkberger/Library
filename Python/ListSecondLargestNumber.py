# See ListSecondLargestNumber.png for problem definition
n = int(raw_input())
my_list = list(map(int,raw_input().split()))
max_element = max(my_list)
while max(my_list) == max_element:
    my_list.remove(max_element)
print max(my_list)
