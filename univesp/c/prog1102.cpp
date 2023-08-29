#include <stdio.h>

typedef struct {int Dia,Mes,Ano;} DATA;
typedef struct pessoa
{
char Nome[100];
int Idade;
float Salario;
DATA Nasc;
} PESSOA;

/* Carrega a estrutura passada por parâmetro */
void Ler(PESSOA *ptr)
{
printf("Qual o Nome : ");
scanf("%s", ptr->Nome);
printf("Qual a Idade : "); 
scanf("%d", &ptr->Idade);
printf("Qual o Salário : "); 
scanf("%f", &ptr->Salario);
printf("Qual a Data Nascim. : ");
scanf("%d %d %d",&ptr->Nasc.Dia,&ptr->Nasc.Mes,&ptr->Nasc.Ano);
}

/* Mostra a estrutura passada por parâmetro */
void Mostrar(struct pessoa x)
{
printf("Nome : %s\n",x.Nome);
printf("Idade : %d\n",x.Idade);
printf("Salário : %.2f\n",x.Salario);
printf("Dt. Nasc : %d/%d/%d\n",x.Nasc.Dia,x.Nasc.Mes,
x.Nasc.Ano);
}

int main()
{
struct pessoa p = {"Carlos",23,12345.67,{23,5,1954}};
Mostrar(p);
printf("\n");
Ler(&p);
printf("\n");
Mostrar(p);
}