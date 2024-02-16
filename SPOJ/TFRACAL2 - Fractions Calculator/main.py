from fractions import Fraction

def split_equation(equation):
    equation = list(str(equation))
    final_equation = []
    toAppend = ""
    for i in equation:
        if i.isalpha():
            toAppend += i
        elif (i == "_" or i == "/" or i == "*" or i == "+") and len(toAppend) != 0:
            final_equation.append(toAppend)
            toAppend = ""
            if i != '_':
                final_equation.append(i)
        elif i == "/" or i == "*" or i == "+":
            final_equation.append(i)
    return final_equation

def op(a,b, operator):
    if operator == '/':
        return b/a
    elif operator == '*':
        return a*b
    elif operator == '+':
        return a+b



for i in range(1000):
    stack = [input()]
    variables = {}
    to_print = []

    while True:
        temp = input()
        stack.append(temp)
        if any(char.isdigit() for char in temp):
            break

    temp = stack.pop()
    fraction = temp.split('=')
    variables[fraction[0]] = Fraction(fraction[1])

    while len(stack) != 1:
        stack2 = []
        temp = stack.pop().split('=')
        var_name = temp[0]
        equation = split_equation(temp[1])
        counter = 0
        while counter < len(equation):
            temp = equation[counter]
            if temp.isalpha():
                stack2.append(variables[temp])
                temp = equation[counter+1]
                counter += 1
            else:
                var1 = stack2.pop()
                var2 = stack2.pop()
                stack2.append(op(var1, var2, temp))
                counter += 1
        variables[var_name] = stack2.pop()
    print(stack.pop() + " Y")
    for key, value in sorted(variables.items()):
            print(key, value.numerator, value.denominator)





