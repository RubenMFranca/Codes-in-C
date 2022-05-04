#include <iostream>

int cont;
char* p;
void permuta_geral(char vet[], int n);

void permuta(char vet[]) {
	int tam;
	tam = strlen(vet);
	p = (char *) malloc(tam * sizeof(char));
	permuta_geral(vet, 0);
}
void imprime() {
	int tam_p;
	tam_p = 3;
	printf("( %i ) : ",cont);
	for (int i = 0; i < tam_p; i++) printf("%c ",p[i]);
	printf("\n");

} 
void permuta_geral(char vet[], int n) {
	int tam;
	bool achou;
	tam = strlen(vet);
	if (n == tam) {
		cont++;
		imprime();

	}
	else {

		for (int i = 0; i < tam; i++) {

			achou = false;

			for (int j = 0; j < n; j++) {

				if (p[j] == vet[i]) 
					achou = true;
			}

			if (!achou) {

				p[n] = vet[i];
				permuta_geral(vet, n + 1);
			}

		} 

	} 

} 

int main()
{
	cont = 0;
	char v[] = { 'A','B','C', '\0' };
	permuta(v);
}