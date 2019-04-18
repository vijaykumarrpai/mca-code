# 1. Return the characters of the given string
import re
string = 'vijaykumar'
print(re.split("",string,maxsplit=0))

# 2. Return each word of given string
string = 'i am a MCA student'
print(re.split(r'\s', string))

# 3. Return the first word of the given string
string = 'Vijay kumar'
print(re.findall(r'^\w+', string))

# 4. Return the last word of the given string
string = 'Vijay Kumar'
print(re.findall(r'\w+$', string))

# 5. Return every two characters of each word of a given string
string = """
Welcome 
to 
MCA 
Department"""
print(re.findall(r'^\w\w', string, re.MULTILINE))

# 6. Return consecutive two characters available at start of word boundary
string = "Vijay kumar"
pattern = '^[A-Za-z][A-Za-z]'

for i in string.split(' '):
    print(re.findall(pattern, i))

# 7. Return max two characters available after the start of word boundary
string = "Hi i am a PES MCA Student"
pattern = '^[A-Za-z][A-Za-z]'

for i in string.split(' '):
    print(re.findall(pattern, i))

# 8. Return the domain types of given email ids.
emailId = 'vijaykumarrpai@gmail.com'
print(re.findall(r'(?<=@)[^.]+(?=\.)', emailId))

# 9. Return the domain types with extensions of given email ids
emailId = 'vijaykumarrpai@gmail.com'
domain = (re.split('@', emailId, maxsplit=0))
print(domain[1])

# 10. Return the domain of given email ids
emailId = 'vijaykumarrpai@gmail.com'
print(re.findall(r'\.[\w].+', emailId))

# 11. Return the date from a given string
string = '15-08-1995 is my birthday'
print(re.findall(r'[0-9]{2}[-|\/]{1}[0-9]{2}[-|\/]{1}[0-9]{4}', string))

# 12. Return the year of the date from a given string
string = '15-08-1995 is my birthday'
print(re.findall(r'.*([1-3][0-9]{3})', string))

# 13. Return the words that start with a vowel
string = "Aye, said Mr. Gibenson Stark"
print(re.findall(r'(\b[AaEeIiOoUu]\w+\b)?', string))

# 14. Return the words that start with a consonant
string = "Aye, said Mr. Gibenson Stark"
print(re.findall(r'(\b[^AaEeIiOoUu]\w+\b)?', string))

# 15. Validating a phone number
string = '1234567890isaca'
print(re.findall(r'\+?\d[\d -]{8,12}\d', string))

# 16. Split with multiple delimiters
string = 'This-is-a-test-for-delimiters'
pattern = input("Enter the delimiters: ")
print(re.split(pattern, string))

# 17. Replaces the substring with the pattern and counts how many times it has done the same

# 18. Matches a string that has an a followed by zero or more b's
string = "abbott"
print(re.findall('ab*?', string))

# 19. Find sequences of lowercase letters joined with a underscore
string = "lower_case"
print(re.findall('^[a-z]+_[a-z]+$', string))

# 20. Matches a string that has an 'a' followed by anything, ending in 'b'
string = "afaffdffefdfefafb"
print(re.findall('a.*?b$', string))

# 21. Matches a word containing 'z', not start or end of the word.
string = "The quick brown fox jumps over the lazy dog"
print(re.findall(r'\Bz\B', string))

# 22. Extract year, month and date from an url
url = "www.google.com/11/10/2018/"
print(re.findall(r'/(\d{1,2})/(\d{1,2})/(\d{4})/', url))

# 23. Separate and print the numbers of a given string
string = "Today is 11th October"
print(re.findall(r'\d+', string))