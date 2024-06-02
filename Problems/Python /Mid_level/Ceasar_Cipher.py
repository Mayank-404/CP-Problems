import string 
def creat_caser_dictionary():
  l=string.ascii_lowercase #all lower case letters
  l=list(l)
  d={}
  for i in range(len(l)):
    d[l[i]]=l[(i+3)%26] #shifting character
  return d
