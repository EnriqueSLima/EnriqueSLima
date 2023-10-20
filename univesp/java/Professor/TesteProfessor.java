// Exemplo disciplina COM230 UNIVESP

package Professor;

/* public class TesteProfessor {
    public void main(String[] args)
    {
        ProfessorCursando cursandoProf = new ProfessorCursando("João", 001);
        ProfessorHorista horistaProf = new ProfessorHorista("Maria", 002);

        cursandoProf.calcSalario(1000);
        horistaProf.calcSalario(1000);
    }
} */

// RESOLUÇÃO
public class TesteProfessor
{
    public static void main(String[] args)  
    { 
        ProfessorConcursado profconcur = new ProfessorConcursado(); 
        ProfessorHorista profhora = new ProfessorHorista(); 
            
        profconcur.setMatricula(2011); 
        profconcur.setNome("Julio"); 
        profconcur.setSalario(1000);
        profhora.setMatricula(2021); 
        profhora.setNome("João"); 
        profhora.setValorHora(70); 
        profhora.setNumeroHoras(15); 
        
        System.out.println("Salario Professor Concursado = "+profconcur.getSalario()); 
        System.out.println("Matrícula Professor Horista = "+profhora.getMatricula()); 
        System.out.println("Salario Professor Concursado = "+profconcur.getSalario()); 
        System.out.println("Matrícula Professor Horista = "+profhora.getMatricula()); 
    } 
}