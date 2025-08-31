def variables_numericas():
    print("Función de variables numericas \n")
variable_char = 'A';
print(type(variable_char))
print("Ejemplo de variable CHAR :", variable_char)
variables_string = 'Cadena de Caracteres';
print("Ejemplo de variable STRING :", variables_string)
print(type(variables_string))
#variable_bool = True;
variable_bool = False;
print("Ejemplo de variable BOOLEANA :", variable_bool)
print(type(variable_bool))

def variables_otras():
    print("Funcion de Otras Variables \n")
    numero_int = 10
    print("Ejemplo de variable tipo INT :", numero_int)
    print(type(numero_int))
    numero_float = 3.14
    print("Ejemplo de variable tipo FLOAT :", numero_float)
    print(type(numero_float))
numero_double= 3.123567890123456789012345
print("Ejemplo de variable tipo DOUBLE :", numero_double)
print(type(numero_double))


def main():
    variables_otras()
    variables_numericas()

if __name__ =="__main__":
    main()