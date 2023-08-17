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

###     Este código possui diversas formas de ser feito, nessa versão usaremos funções

###     Definindo funções

###     Função para calcular o resto do primeiro digito verificador
def resto_digito1():

    somador_etapa1 = 0              #   Criando uma variável inteira para representar a soma dos indices multiplicados

    for i in range(9):                                                  #   Iteração até o elemento 9
        multiplicador_etapa1 = int(numerico_cpf[i]) * (int(i)+1)        #   Transforma o valor 'i' em inteiro e multiplica por 'i + 1'
        somador_etapa1 = multiplicador_etapa1 + somador_etapa1          #   Atribui o valor da multiplicação de forma recursiva na variável 'somador_etapa1' 

    #print('Resultado da primeira soma: ', somador_etapa1)              #   Imprime o valor da 'somador_etapa1' (OPCIONAL)

    resto_etapa1 = somador_etapa1 % 11                          #   Dividindo o valor de 'somador_etapa1' por 11 e atribuindo a 'resto_etapa1'
    if resto_etapa1 >= 10:                                      #   Verifica se o 'resto_etapa1' é maior ou igual a 10
        resto_etapa1 = resto_etapa1%10
    
    #print('Resto da primeira divisão: ', resto_etapa1)         #   Imprime o valor da 'resto_etapa1' (OPCIONAL)
    return  resto_etapa1                                        #   Retorna o valor de 'resto_etapa_1'

###     Função para calcular o resto do segundo digito verificador
def resto_digito2():

    somador_etapa2 = 0              #   Criando uma variável inteira para representar a soma dos indices multiplicados

    for i in range(10):                                                 #   Iteração até o elemento 10
        multiplicador_etapa2= int(numerico_cpf[i]) * int(i)             #   Transforma o valor 'i' em inteiro e multiplica por ele mesmo
        somador_etapa2 = multiplicador_etapa2 + somador_etapa2          #   Atribui o valor da multiplicação de forma recursiva na variável 'somador_etapa2' 

    #print('Resultado da segunda soma: ', somador_etapa2)               #   Imprime o valor da 'somador_etapa2' (OPCIONAL)

    resto_etapa2= somador_etapa2 % 11                           #   Dividindo o valor de 'somador_etapa2' por 11 e atribuindo a 'resto_etapa2'
    if resto_etapa2 >= 10:                                      #   Verifica se o 'resto_etapa2' é maior ou igual a 10
        resto_etapa2 = resto_etapa2%10

    #print('Resto da primeira divisão: ', resto_etapa2)         #   Imprime o valor da 'resto_etapa2' (OPCIONAL)
    return resto_etapa2                                         #   Retorna o valor de 'resto_etapa_2'

###     Função para validar os valores dos digitos verificadores
def valida_digito(resto_etapa1, resto_etapa2):

    if resto_etapa1 == int(numerico_cpf[-2]) and resto_etapa2 == int(numerico_cpf[-1]):      #   Verificando os digitos verificadores
        print('CPF válido.')
    else:
        print('CPF inválido.')                                     #   Caso não ocorra verificação correta dos digitos

###     Entrada de dados pelo usuário

numerico_cpf = ''           #   Criando variáveis para analisar a entrada do usuário
numerico_cpf_inv = ''

while(len(numerico_cpf) != 11 or numerico_cpf_inv == numerico_cpf):
    
    entrada_cpf = input('Digite o CPF:')                #   Pergunta ao usuário o número do CPF e atribui a variável 'entrada_cpf'.
    remove_char = ['.', ',', '/', '-', ' ']             #   Define possíveis caracteres no CPF que não desejamos

    #   Atribui a 'numerico_cpf' o valor de 'entrada_cpf' e remove os caracteres definidos na lista 'remove_char'
    numerico_cpf = entrada_cpf.translate(str.maketrans({ord(x): '' for x in remove_char}))
    numerico_cpf_inv = numerico_cpf[::-1]           #   Cria uma string e inverte os valores dos indices de 'numerico_cpf'

    if len(numerico_cpf) != 11:                     #   Verifica se o CPF sem a pontuação possui 11 caracteres
        print('CPF deve conter 11 números.')
    if numerico_cpf_inv == numerico_cpf:            #   Verifica se 'numerico_cpf' é igual a 'numerico_cpf_inv'
        print('CPF não deve conter muitos digitos iguais consecutivos.')

#print('CPF sem pontuação: ', numerico_cpf)          #   Imprime CPF sem pontuação para verificação (OPCIONAL)

if len(numerico_cpf) == 11:         #   Verifica se o CPF sem a pontuação possui 11 caracteres
    resto_etapa1 = resto_digito1()          #   Atribui o valor de retorno da função a 'resto_etapa1'
    resto_etapa2 = resto_digito2()          #   Atribui o valor de retorno da função a 'resto_etapa2'
    valida_digito(resto_etapa1, resto_etapa2)           #   Chama função que valida os digitos verificadores