//@AsherLucRen
// Insira alunos num arquivo "Alunos.dat". Não pode haver dois alunos com o mesmo nome

#include <stdio.h>
#include <string.h>
#include <locale.h>

// = = = = = = = = = = = = = = = = = = = = =

// Definição da estrutura
struct Aluno
{
	unsigned int RA;
	char nome[40];
	char siglaCurso[5];
	float nota1, nota2;
};

float getNotaAluno();


int main()
{
	setlocale(LC_ALL, "portuguese");
		
	FILE *archive;
	archive = fopen("C:\\Users\\2830482311005\\Desktop\\LogicProgram\\Exercicios\\alunos.dat", "a++");
	
	if(archive == NULL)
	{
		printf("num deu meu patrão, tá com muita restrição bixo");
		return 0;
	}
	
	puts("arquivo aberto/criado com sucesso...");
	
	
	
	// Declaração da estrutura (as variable)
	struct Aluno student;
	
	// Gravação de dados
	puts("_ _ _ _ ENTRADA DE DADOS _ _ _ _");
	
	do
	{
		char quit = 'n';
		
		puts("INFORMAÇÕES DO ALUNO");
		
		printf("\nRA: ");
		scanf("%d", student.RA);
		
		printf("\nNome: ");
		scanf("%s", student.nome);
		
		printf("\nAbreviação do curso: ");
		scanf("%s", student.siglaCurso);
		
		printf("\nPrimeira nota: ");
		student.nota1 = getNotaAluno();
			
		printf("\nSegunda nota: ");
		student.nota2 = getNotaAluno();
		
		
		if(feof(archive))
		{
			fwrite(&student, sizeof(Aluno), 1, archive);
		}
		
		
		fread(&student, sizeof(Aluno), 1, archive);
		
		printf("\nDeseja sair? (s/n)\n");
		scanf("%c", &quit);
	}while(1);
	
	return 0;
}

float getNotaAluno()
{
	float nota = -1.0f;
	
	while(nota < 0 || nota > 10)
		scanf("%f", nota);
	
	return nota;
}
