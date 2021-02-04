'''Memoization solution of the 'edit-distance' problem'''

import sys

# If not using OOP, simply use c_i for insert cost, c_d for deletion cost, 
# and c_s for substitution cost. 
c_i = 2
c_d = 2
c_s = 3
EMPTY_STATE = -1

def edit_distance(s1, s2):
    '''Edit-Distance memoization algorithm
    Parameters: 
        s1: <str>
        s2: <str>
    Returns: Total edit-distance cost
    '''
    a, b = len(s1), len(s2)
    if a == 0:
        return 0 # TODO: Replace 0 with something meaningful
    if b == 0:
        return 0 # TODO: Replace 0 with something meaningful
    
    if memo[a - 1][b - 1] == EMPTY_STATE:
        memo[a - 1][b - 1] = edit_distance(s1[:-1], s2[:-1])
    
    # TODO: Fill in additional code here
    
    if s1[-1] == s2[-1]:
        # TODO: Replace <pass> with something meaningful
        pass

    return min(0, 0
        # TODO: Replace 0s with something meaningful
    )


# Declare test cases (you may change this)
str1 = 'ALGORITHM'
str2 = 'ALTRUISTIC'

# Command line arguments for using substrings from Macbeth/Hamilton scripts
if len(sys.argv) > 1:
    len1 = int(sys.argv[1])
    len2 = int(sys.argv[2]) if len(sys.argv) > 2 else len1
    str1 = open('macbeth.txt').read(len1)
    str2 = open('hamilton.txt').read(len2)
    if max(len1, len2) > 990:
        sys.setrecursionlimit(max(len1, len2) + 100)

# Create empty memoization table
memo = [[EMPTY_STATE 
    for i in range(len(str2) + 1)] 
        for j in range(len(str1) + 1)]

# Run function and print output
print(edit_distance(str1, str2))

# Expected output for this example: 
#    15
