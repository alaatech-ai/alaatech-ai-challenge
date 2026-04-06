programming_language = ['c', 'java', 'python', 'c++']
print(programming_language[0])  # accessing the first element of programming_language
another_prog_lang = 'java script'
print(list(another_prog_lang)) # convert an iterable into a list

numbers = [1, 2, 3, 4, 5, 6]
len(numbers) # to get the total number of elements in a list
numbers[1] = 7 # to update a value at a particular index
print(numbers)

developer = ['Aya', 25, 'python developer']
del developer[2]
print(developer) # to remove an element from a list
print('Aya' in developer)
print('java' in  developer) # to check if an element is inside the list

ages = [12, 13, 15, [0, 22, 34, 3]]
print(ages[2]) # to access the nested list



teacher = ['Lea', 27, 'scientist']
name, *res  = teacher
# unpacking values from a list & collect any remaining elements from a list using *
print( name)
print(res)

desserts = ['pie', 'cake', 'jello', 'brownie']
print(desserts[1:4]) # access portions of a list by :
