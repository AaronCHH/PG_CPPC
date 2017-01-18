import sys, os

fin = open('in.txt', 'rt')

line = fin.readline()

while line:
  print(line)
  line = fin.readline()

fin.close()  
