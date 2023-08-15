"""   
    Código para desafio da Semana 03 - COM200 - Turma 007

    Desafio: 
    1    Multiplicar os 9 primeiros dígitos pelo índice de sua posição.

    2    Somar os resultados e dividir por 11 e guardar o resto.

        Exemplo: 123.456.789-09
        1*1+2*2+3*3+4*4+5*5+6*6+7*7+8*8+9*9 = 285/11 = 25
        Resto = 10
    
    3    A unidade do resto deverá ser igual ao primeiro digito verificador.

    4    Repetir passo 1 com os 10 primeiros dígitos, só que agora começando a sequência de multiplicador em zero.

        Exemplo: 1*0+2*1+3*2+4*3+5*4+6*5+7*6+8*7+9*8+0*9= 240/11 = 21
        Resto = 9

    5    Se o resto for igual ao segundo dígito verificador, e o resto da operação do passo 2 for igual ao primeiro digito verificador, o CPF é correto.

""" 

entrada_cpf = input('Digite o CPF:')  # Pergunta ao usuário o número do CPF

remove_char = ['.', ',', ' ', '-']   #   Define possíveis caracteres no CPF que não desejamos

#   Cria outra 'string' e remove os caracteres definidos na lista 'remove_char'
numerico_cpf = entrada_cpf.translate(str.maketrans({ord(x): '' for x in remove_char}))    

print('CPF sem pontuação: ', numerico_cpf)      #   Imprime CPF sem pontuação

if len(numerico_cpf) == 11:     #   Verifica se o CPF sem a pontuação possui 11 caracteres  

    somador_etapa1 = 0     #   Criando uma variável inteira para representar a soma dos indices multiplicados

    #   Criando looping de 'for' para iteração de multiplicação

    for i in range(10):     #   Iteração até o elemento 9

        #   Transforma o valor 'i' em inteiro e multiplica por ele mesmo
        multiplicador_etapa1 = int(i) * int(i)

        #   Atribui o valor da multiplicação de forma recursiva na variável 'somando_passo2' 
        somador_etapa1 = multiplicador_etapa1 + somador_etapa1

    #   Imprime o valor da 'somando_passo2'
    print('Resultado da primeira soma: ', somador_etapa1)

    #   Dividindo o valor de 'somando' por 11 e atribuindo ao resto
    resto_etapa1 = somador_etapa1 % 11
    print('Resto da primeira divisão: ', resto_etapa1)

    somador_etapa2 = 0     #   Criando uma variável inteira para representar a soma dos indices multiplicados

    #   Criando looping de 'for' para iteração de multiplicação

    for i in range(10):     #   Iteração até o elemento 9
        #   Transforma o valor 'i' em inteiro e multiplica por ele mesmo
        multiplicador_etapa2 = int(i) * (int(i) - 1)
        #   Atribui o valor da multiplicação de forma recursiva na variável 'somando_passo2' 
        somador_etapa2 = multiplicador_etapa2 + somador_etapa2
    #   Imprime o valor da 'somando_passo2'
    print('Resultado da segunda soma: ', somador_etapa2)

    #   Dividindo o valor de 'somando' por 11 e atribuindo ao resto
    resto_etapa2= somador_etapa2 % 11
    print('Resto da segunda divisão: ', resto_etapa2)

    verif = resto_etapa1//10
    print(verif)
    verif_2 = resto_etapa2
    print(verif_2)
    print(numerico_cpf[-1])
else:
    print('CPF inválido.')
