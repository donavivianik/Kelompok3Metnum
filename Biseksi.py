#Nugraha Adiputra - 2101891
#Codingan SPL metode biseksi

import numpy as np #panggil library

func = lambda x: pow(x,3) - 8 

def func(x):
  return pow(x,3) - 8 

a = 0
b = 3
galat = 0.005
maximal = 200 #batas buat perulangan

if func(a)*func(b)>0:
  print('akar tidak ditemukan')
else:
  for i in range (maximal):
    c = (a+b)/2
    if func(a)*func(c) < 0:
      b = c
    else:
      a = c
    if abs(a-b) < galat:
      akar = c
      print('akar = ', akar)
      print('fungsi akar = ', func(akar))
      break

