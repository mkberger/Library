# Enter your code here. Read input from STDIN. Print output to STDOUT
"""
Input Format

The first line contains the integer N, the number of students. The next N lines contains the name and marks obtained by that student separated by a space. The final line contains the name of a particular student previously listed.

Output Format

Print one line: The average of the marks obtained by the particular student correct to 2 decimal places.
"""
# mkberger
from __future__ import division
dic = {};
n = int(raw_input());
for i in range(0,n):
    string = raw_input();
    mylist = string.split(" ");
    avg = (float(mylist[1]) + float(mylist[2]) + float(mylist[3]))/ 3.00;
    dic[mylist[0]] = format(avg, '.2f');
print(dic[raw_input()]);
#
