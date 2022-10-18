# SIMPLE _PRINTF PROJECT  
## NAME  
**_printf** - format and prints data but for fewer flags than printf.
## PROTOTYPE  
```
int _printf(const char *format, ...); 
```  
## DISCRIPTION  
Collects a constant string ***format*** and listens for '%' flag followed by a format specifier:  
1. **c**: insert character from argument array.
1. **s**: insert string from argument array.
1. **i**: insert integer from argument array.
1. **d**: Same as **i**.
1. **%**: print '%'.  
### RETURN:  
Returns the number of characters printed to stdout.
A manual is created as "man_3_printf"
The format funtions are stored in the functions.c file
