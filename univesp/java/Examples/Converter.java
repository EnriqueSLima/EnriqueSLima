// Aplicação para converter temperatura

import java.util.Scanner;	// Importando classe Scanner

public class Converter	// Início da classe Converter
{
	public static void main(String[] args)	// Método main iniciando aplicação java
	{
		try (Scanner input = new Scanner(System.in)) {
			float TempInput,TC = 0, TF = 0;;		// Variável para temperatura

			System.out.print ("Digite o valor da temperatura: ");	// Pergunta valor ao usuário
			TempInput = input.nextFloat();		// Atribui o valor inserido a variável TempInput
			// Calculo das conversões
			TC = TempInput;		// Atribuindo o valor de TempInput a TC
			TF = (TC * 9/5) + 32;	// Calculando o valor como Celsius
			System.out.printf("%.2f Celsius são %.2f Fahrenheit\n", TempInput, TF);	// Imprime ao usuário
			TF = TempInput;		// Atribuindo o valor de TempInput a TF
			TC = ((TF-32)/9)*5;	// Calculando valor como Fahrenheit
			System.out.printf("%.2f Fahrenheit são %.2f Celsius\n", TempInput, TC);
		}	
	}
}
