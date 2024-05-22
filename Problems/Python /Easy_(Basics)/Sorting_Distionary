def points(d):
    keys = list(d.keys())

# Loop over the list in a way that for each pass the maximum element is bubbled to the end
    for i in range(len(keys)):
        for j in range(len(keys) - i - 1):
            if d[keys[j]] < d[keys[j + 1]]:
                # Swap keys
                keys[j], keys[j + 1] = keys[j + 1], keys[j]

# Now keys list is sorted according to their corresponding values in the dictionary
    sorted_dict = {key: d[key] for key in keys}

    print(sorted_dict)



d={}
for i in range(8):
    n=input().split(',')
    d.update({n[0]:(len(n)-1)})
print(points(d))

'''A round-robin tournament is one in which each team competes with every other team. Consider a version of the IPL tournament in which every team plays exactly one game against every other team. All these games have a definite result and no match ends in a tie. The winning team in each match is awarded one point.

Eight teams participate in this round-robin cricket tournament: CSK, DC, KKR, MI, PK, RR, RCB and SH. You are given the details of the outcome of the matches. Your task is to prepare the IPL points table in descending order of wins. If two teams have the same number of points, the team whose name comes first in alphabetical order must figure higher up in the table.

'''