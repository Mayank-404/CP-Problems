f=open('my.txt','r')
# Read the first character from the file
c=f.read(1)
# Initialize an empty dictionary to store words and their counts
p={}
count=1
# Loop until the end of the file
while c!='':
    d='' # Initialize an empty string to build the current word

   # Build the word until a space or end of file is reache
    while c != ' ' and c != '':
        d+=c
        c=f.read(1)
   # Increment the word count if the word is already in the dictionar
    if d in p:
        p.update({d:p[d]+1})
    # Add the word to the dictionary with a count of 1 if it's not already there    
    else:
        p.update({d:1})
        
    c=f.read(1)
print(p)
f.close()# Close the file
