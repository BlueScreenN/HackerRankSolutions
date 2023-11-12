def is_leap(year):
    leap = False
    
    
    if year%400 == 0 and 1990 <= year and year <= 1000000:
        leap = True
    
    elif year%100 == 0:
         leap = False
        
    elif year%100 != 0 and year%4 == 0 and 1990 <= year and year <= 1000000:
        leap = True
        
    return leap
year = int(input())