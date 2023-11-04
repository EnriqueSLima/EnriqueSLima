import java.util.LinkedHashSet;
import java.util.Set;

public class TesteHashSet {
   public static void main(String [] args) {
	Set<String> nomes = new LinkedHashSet<String>();
		nomes.add("Ana");
		nomes.add("Joao");
		nomes.add("Jose");
		nomes.add("Heloisa");
		nomes.add("Maria");
		nomes.add("Julio");
		nomes.add("Fernanda");
		nomes.add("Ana");
	
	for (String nome : nomes) {
		System.out.println(nome);
		}
	}
} 

