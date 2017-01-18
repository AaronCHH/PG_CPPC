with open('class1.in','rt',encoding = 'utf-8') as fin:
  with open('class2.out2','wt',encoding = 'utf-8') as fout:
    line = fin.readline()
    while line:
      fout.write(line)
      line = fin.readline()
