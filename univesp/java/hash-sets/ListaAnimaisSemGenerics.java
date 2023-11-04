import java.util.*;

public class ListaAnimaisSemGenerics {

  public static void main(String[] args) {

    int total = 0;

    List lista = new LinkedList();

    lista.add("Leão");
    lista.add("Sapo");
    lista.add("Cachoro");

    System.out.println(lista);

     for (int i = 0; i < lista.size(); i++){
            total += (int) lista.get(i);
     }

     System.out.println(total);
  }
}
