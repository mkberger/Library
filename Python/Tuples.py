# See Tuples.png for problem description
n = int(raw_input());
tup = ();
my_list = (raw_input()).split();
for i in range(0, n):
    tup2 = (int(my_list[i]),);
    tup = tup + tup2;
print(hash(tup));
