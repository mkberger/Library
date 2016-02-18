# See Lists.png for problem description
n = int(raw_input());
L = [];
for x in range(0, n):
    str_list = (raw_input()).split();
    cmd = str_list[0];
    if cmd == 'insert':
        L.insert(int(str_list[1]), int(str_list[2]));
    elif cmd == 'print':
        print(L);
    elif cmd == 'remove':
        L.remove(int(str_list[1]));
    elif cmd == 'append':
        L.append(int(str_list[1]));
    elif cmd == 'sort':
        L.sort();
    elif cmd == 'pop':
        L.pop();
    elif cmd == 'reverse':
        L.reverse();
