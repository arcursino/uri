# tags: separação de string, separa string, cálculo de área, triângulo, círculo, trapézio, quadrado, retângulo

a, b, c = input().split()
a, b, c = float(a), float(b), float(c)

print('TRIANGULO: {:.3f}'.format(a * c / 2))
print('CIRCULO: {:.3f}'.format(3.14159 * (c ** 2)))
print('TRAPEZIO: {:.3f}'.format((a + b) * c / 2))
print('QUADRADO: {:.3f}'.format(b * b))
print('RETANGULO: {:.3f}'.format(a * b))
