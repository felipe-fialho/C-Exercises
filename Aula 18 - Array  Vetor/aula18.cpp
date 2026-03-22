#include <iostream>

#include <windows.h>

using namespace std;

int main(){
 	SetConsoleOutputCP(CP_UTF8);//ALELUIA
	
	// Array / Vetor;
	// COMO DECLARAR = tipo nome [posicôes];  
	// comeca sempre por zero
	
	
	//int vetor[5] = {10,20,30,40,50};	-> CORRETO
	//int vetor[tam] = {10,20,30,40,50}; -> ERRRO
	// Pode ser inserir os elementos da array tambem desta forma, sem necessidade de especificalos posteriormente.
	// Neste Caso e necessario que o numero de posiçôes seja fixo não podendo usar uma variavel do tipo inteira para especificar a quantidade de posições.
	
	cout << "Olá\n";
	int vetor[7];
	int i;
	
	//int tam = 5;
	//int vetor[tam]; Outra forma de alterar a quantidade de posicoes sem prejudicar a estrutura for.
	
	//for(i=0; i < tam; i++){
	//cout << vetor[i] << "\n";
	//}
	
	vetor[0] = 10; // Indices
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	vetor[5] = 60;
	vetor[6] = 70;
	
	for(i=0; i < sizeof(vetor)/4; i++){
	cout << vetor[i] << "\n";
	}
	// sizeof(vetor) conta a quantidade de bytes, no caso de uma variavel inteira de 4 bytes com 5 posicoes seria 20 bytes por isso a divisao por 4;
	// sizeof permite que ao alterar a quartidade de posições de uma array/vetor a estrutura de repetição continue a imprimir todas as posições da array
	
	return 0;
}