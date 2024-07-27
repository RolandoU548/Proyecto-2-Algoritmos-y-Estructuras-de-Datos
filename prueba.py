soluciones = []


class arbol:
    talado = False

    def __init__(self, identificador, siguiente):
        self.identificador = identificador
        self.siguiente = siguiente


def limpiar(bosque):
    for arbol in bosque:
        arbol.talado = False


def comprobar(bosque):
    for arbol in bosque:
        if arbol.talado == False:
            return False
    return True


def posible_talar(bosque, arbol):
    arbol.talado = True
    if comprobar(bosque):
        return True
    if arbol.siguiente and arbol.siguiente.talado == False:
        return posible_talar(bosque, arbol.siguiente)
    return False


arbol1 = arbol("AA", None)
arbol2 = arbol("AB", arbol1)
arbol3 = arbol("AC", arbol2)
arbol4 = arbol("AD", arbol3)
arbol1.siguiente = arbol4
bosque = [arbol1, arbol2, arbol3, arbol4]
print(posible_talar(bosque, bosque[3]))
