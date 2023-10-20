// Exemplo disciplina COM230 UNIVESP

package Professor;

/* package Professor;

public class Professor
{
    // Variáveis de instância
    protected String nome;
    protected long matricula;

    // Construtor padrão
    public Professor(String _nome, long _matricula) {
        this.nome = _nome;
        this.matricula = _matricula;
    }

    // Setters
    public void setNome(String nome)
    {
        this.nome = nome;
    }
    public void setMatricula(long matricula)
    {
        this.matricula = matricula;
    }
    // Getters
    public String getNome()
    {
        return nome;
    }
    public double getMatricula()
    {
        return matricula;
    }
} */


//RESOLUÇÃO:

public class Professor
{ 
       private int matricula; 
       private String nome; 

       public Professor(){}

       public Professor(int matricula, String nome)
       {  
              this.matricula = matricula; 
              this.nome = nome; 
       } 
       public int getMatricula()  
       { 
              return matricula; 
       } 
       public void setMatricula(int matricula)  
       { 
              this.matricula = matricula; 
       } 
       public String getNome()  
       { 
              return nome; 
       } 
       public void setNome(String nome)  
       { 
              this.nome = nome; 
       } 
       public float getSalario()  
       { 
              return 0; 
       }
}
