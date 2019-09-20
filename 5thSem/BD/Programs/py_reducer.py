from operator import itemgetter
import sys

current_word = None
current_count = 0
word = None

#mappers output and reducers input
for line in sys.stdin:
    # remove all the leading and trailing whitespace
    line = line.strip()
    # Split the input to get the word and its count
    # as given by mapper 
    word, count = line.split('\t', 1)

    # typecast string count to integer
    try:
        count = int(count)
    except ValueError:
        #discard if it wasn't really a number
        continue
    
    # Hadoop Mapreduce Framework has sorted the output
    # sum up total count of the word
    if current_word == word:
        current_count += count
    else:
        if current_word:
            # output to STDOUT
            print('{0}\t{1}'.format(current_word, current_count))
        
        current_count = count
        current_word = word

# IMPORTANT
# Its the last word which too needs to be printed
if current_word == word:
    print('{0}\t{1}'.format(current_word, current_count))