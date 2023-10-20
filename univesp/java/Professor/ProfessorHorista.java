// Exemplo disciplina COM230 UNIVESP

package Professor;

/* package Professor;

public class ProfessorHorista extends Professor{
    public ProfessorHorista(String _nome, long _matricula)
    {
        super(_nome, _matricula);
    }
    protected double salario;
    protected float valorHora = 100;
    protected int qtdHoras = 8;

    // Getters
    public double getSalario(double salario)
    {
        return salario;
    }
    // Setters
    public void setSalario(double _salario)
    {
        this.salario = _salario;
    }
    // Metodo 1
    public double calcSalario(double _salario)
    {
        _salario = salario + (qtdHoras * valorHora);
        return _salario;
    }
} */

// RESOLUÇÂO
public class ProfessorHorista extends Professor
{
    private float valorHora;
    private float numeroHoras;
    
    public ProfessorHorista(){}
    public ProfessorHorista(int matricula, String nome)
    {
        super(matricula,nome);
    }
    public ProfessorHorista(int matricula, String nome, float valorHora, float numeroHoras)
    {
        super(matricula,nome);
        this.valorHora = valorHora;
        this.numeroHoras = numeroHoras;
    }
    public float getValorHora()
    {
        return this.valorHora; 
    }
    public void setValorHora(float valorHora)
    {
        this.valorHora = valorHora;
    }
    public float getNumeroHoras()
    {
        return this.numeroHoras;
    }
    public void setNumeroHoras(float numeroHoras)  
    {
        this.numeroHoras = numeroHoras;
    }
    public float getSalario()
    {
        return this.valorHora *  this.numeroHoras;
    }
}