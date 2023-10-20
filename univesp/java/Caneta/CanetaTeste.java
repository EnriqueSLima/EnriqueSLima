// Classe CanetaTeste cria e manipula objeto Caneta

package Caneta;

public class CanetaTeste {
    public static void main(String[] args)
    {
        // Cria novos objetos Caneta e atribui a caneta0 e caneta1
        Caneta caneta0 = new Caneta("Bic","Azul", 5);
        Caneta caneta1 = new Caneta("Stabilo","Verde",3);

        System.out.printf("Marca: %s%nCor: %s%nTamanho: %d%n", caneta0.getMarca(), caneta0.getCor(), caneta0.getTamanho());
        // Print a new line
        System.out.println("");
        System.out.printf("Marca: %s%nCor: %s%nTamanho: %d%n", caneta1.getMarca(), caneta1.getCor(), caneta1.getTamanho());

    }   
}

/* 
import java.util.Scanner; 

import Caneta; 

public class CanetaTeste { 
    public static void main(String[] args) { 
        Caneta kilometrica = new Caneta(); 
        bic.setMarca("kilometrica"); 
        bic.setCor("vermelha"); 
        bic.setTamanho("12cm");     

        System.out.println("Tamanho: "+kilometrica.getTamanho()); 
        System.out.println("Cor: "+kilometrica.getCor()); 
        System.out.println("Marca: "+kilometrica.getMarca()); 
    }    
}
*/