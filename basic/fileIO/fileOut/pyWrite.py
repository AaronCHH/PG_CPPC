import os, sys

ar = [6,15,95,98,23]

outf = open("outPy.txt","w")

for i in range(0,5):
  outf.write(str(ar[i])+'\n')

outf.close()  