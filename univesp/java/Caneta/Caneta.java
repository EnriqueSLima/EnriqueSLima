// Exemplo da disciplina POO Univesp

// Classe Caneta que contém algumas variáveis de instância e metodos

package Caneta;

public class Caneta {
    public String marca;
    public String cor;
    public int tamanho;

    // Construtor padrão
    public Caneta() {
        this.marca = "";
        this.cor = "s/cor";
        this.tamanho = 0;
    }

    // Sobrecarga
    public Caneta(String marca, String cor, int tamanho) {
        this.marca = marca;
        this.cor = cor;
        this.tamanho = tamanho;
    }

    // Setters
    public void setMarca(String _marca)
    {
        this.marca = _marca; 
    }
    public void setCor(String _cor)
    {
        this.cor = _cor;
    }
    public void setTamanho(int _tamanho)
    {
        if (_tamanho >= 0)
        {
            this.tamanho = _tamanho;
        }
    }

    // Getters
    public String getMarca()
    {
        return marca;
    }
    public String getCor()
    {
        return cor;
    }
    public int getTamanho()
    {
        return tamanho;
    }

    @Override
	public String toString()
	{
		return ("Marca: "+ this.getMarca() + ".\n Cor: " + this.getCor() + ".\n Tamanho: " + this.getTamanho() + ".\n");
	}
    public static void main(String[] args)
    {
        
    }
}

/* 
RESOLUÇÃO:

public class Caneta
{ 
    private String marca, cor, tamanho; 

    public Caneta(){} 

    public Caneta(String marca, String cor, String tamanho)
    { 
        this.marca = marca; 
        this.cor = cor; 
        this.tamanho = tamanho; 
    }

    public String getMarca()
    { 
        return marca; 
    } 

    public void setMarca(String marca)
    { 
        this.marca = marca; 
    } 

    public String getCor()
    { 
        return cor; 
    } 

    public void setCor(String cor)
    { 
        this.cor = cor; 
    } 

    public String getTamanho()
    { 
        return tamanho; 
    } 

    public void setTamanho(String tamanho)
    { 
        this.tamanho = tamanho; 
    } 

    public String toString()
    { 
        return "Marca: "+getMarca()+"\nCor: "+getCor()+"\nTamanho: "+getTamanho(); 
    } 
} 
*/