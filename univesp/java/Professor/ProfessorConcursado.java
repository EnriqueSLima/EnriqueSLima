// Exemplo disciplina COM230 UNIVESP

package Professor;
/*
public class ProfessorCursando extends Professor
{
    public ProfessorCursando(String _nome, long _matricula)
    {
        super(_nome, _matricula);
    }
    protected double salario;

    // Getter
    public double getSalario(double salario)
    {
        return salario;
    }
    // Setter
        public void setSalario(double _salario)
    {
        this.salario = _salario;
    }
    // Metodo 1
    public double calcSalario(double _salario)
    {
        _salario = salario;
        return _salario;
    }
} */

// RESOLUÇÂO

public class ProfessorConcursado extends Professor
{
    private float salario;
    public ProfessorConcursado(){}
    
    public ProfessorConcursado(int matricula, String nome)  
    {  
         super(matricula,nome); 
    } 
    public ProfessorConcursado(int matricula, String nome, float salario)  
    { 
         super(matricula,nome); 
         this.salario = salario; 
    } 
    public float getSalario()  
    {
    return salario; 
    } 
    public void setSalario(float salario)  
    { 
         this.salario = salario; 
    }
}
