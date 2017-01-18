import sys, os

fin = open('in.txt', 'rt')

line = fin.readline().strip().split()

while line:
  for item in line:
    print(item)

  line = fin.readline().strip().split()

fin.close()  

os.system("pause")