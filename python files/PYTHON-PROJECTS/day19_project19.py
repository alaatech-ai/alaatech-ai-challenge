full_dots = '●'
empty_dots = '○'
def create_character (name, strength, intelligence, charisma):
    if not isinstance(name, str):
      return 'The character name should be a string'
    if not name:
        return 'The character should have a name'
    if len(name) >10 :
        return 'The character name is too long'
    if' ' in name:
        return 'The character name should not contain spaces'
    stats = [strength, intelligence, charisma]
    if not all(isinstance(s, int) for s in stats):
        return 'All stats should be integers'
    if any( s< 1 for s in stats):
        return 'All stats should be no less than 1'
    if any(s>4 for s in stats):
        return 'All stats should be no more than 4'
    if sum(stats) != 7:
        return 'The character should start with 7 points'
    line1 = name 
    line2 = "STR " + (full_dots*strength) + (empty_dots*(10-strength))  
    line3 =   "INT " + (full_dots*intelligence) + (empty_dots*(10-intelligence))
    line4 =   "CHA " + (full_dots*charisma) + (empty_dots*(10-charisma)) 
    return f"{line1}\n{line2}\n{line3}\n{line4}"  
result = create_character('ren', 4, 2, 1)
print(result)

      

   

