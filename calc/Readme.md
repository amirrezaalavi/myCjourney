simple calculator written in C that converts a Decimal number using one of the five operations and prints it out.


Pseudo:

declare exit = false
declare number
Loop until exit == true:
  input the number or x for exit
  if input = x:
    exit = true
    break
  input the operator
  if operator == '=':
    print number
  else:
    operate number with input and operator
