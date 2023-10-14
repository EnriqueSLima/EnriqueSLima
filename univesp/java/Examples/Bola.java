public class Bola  
{ 
	private String material; 
	private String cor; 
	private int tamanho; 
	private boolean cheia;    

	// Construtor "padrão" 
	public Bola()  
	{
		this.material = ""; 
		this.cor = "s/cor"; 
		this.tamanho = 0; 
		this.cheia = false; 
	} 

	// Sobrecarga 
	public Bola(String material, String cor, int tamanho, boolean cheia)  
	{
		this.material = material; 
		this.cor = cor; 
		this.tamanho = tamanho; 
		this.cheia = cheia; 
	}
	
	// Sobrecarga 
	public Bola(String cor, int tamanho)  
	{ 
		this(); 
		this.cor = cor; 
		this.tamanho = tamanho; 
	}

	// Método Pintar
	public void pintar(String cor)  
	{ 
		this.cor = cor; 
	}

	// Método Encher
	public void encher()  
	{
		cheia = true;
	}

	// Método Esvaziar
	public void esvaziar()
	{
		cheia = false; 
	}

	// Setters
	public void setMaterial(String material)  
	{ 
		this.material = material; 
	}
	public boolean setTamanho(int tamanho)  
	{
		if (tamanho >= 0) 
		{
			this.tamanho = tamanho;
			return true;
		}
		return false;
	}
	
	// Getters
	public String getMaterial()
	{
		return material; 
	}
	public String getCor()
	{ 
		return cor; 
	}
	public int getTamanho()
	{ 
		return tamanho; 
	}
	public boolean getEstado()
	{
		return cheia;
	}
	public String getEstadoStr()
	{
		return (cheia ? "CHEIA" : "VAZIA");
	}
}