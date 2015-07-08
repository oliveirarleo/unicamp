#include <stdio.h>
#include <stdlib.h>



void imprime_vetor(int vetor[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", vetor[i]);
	printf("\n");
}

void combinacao_simples(int n, int r, int temp[], int next, int size) {
	int i;
	imprime_vetor(temp, size);
	if(r != size){
		for ( i=next ; i<=n ; i++ ) {
			temp[size] = i;
			combinacao_simples(n, r, temp, i + 1, size + 1);
		}
	}
}

int main() {
	int n, r, *temp;
	
	printf("Entre com o valor de n: ");
	
	scanf("%d", &n);
	printf("Entre com o valor de r: ");
	scanf("%d", &r);
	
	temp = malloc(r * sizeof(int));

	combinacao_simples(n, r, temp, 1, 0);
	
	free(temp);
	return 0;
}