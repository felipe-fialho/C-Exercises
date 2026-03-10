#include <iostream>>
using namespace std;

int main()
{
	
	//TIPO NOME;
	//TIPO NOME - VALOR;
	
	int vidas = 0; //10, 25, 3000. Recebe Números
	char letra = 'B'; // 'B' 'A' Recebe Letras
	double decimal = 5.2; //"2,5" 
	float decimal2 = 5.2;  // Do mesmo tipo que Double mas com uma menor precisão
	bool vivo = true; // Verdadeiro ou Falso/ True or False
	string nome="Felipe"; // recebe um texto vindo entre aspas

	/* */
	//
	
	cout << "DIgite o numero de vidas: ";
	cin >> vidas;
	cout << "DIgote uma letra: ";
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "DIgite o seu nome: ";
	cin >> nome;
	
	//vidas=100;
	
	cout << "\nVidas " << vidas << "\nLetras " << letra << "\nDinheiro " << decimal <<  "\nVivo " << vivo << "\nNome " << nome << "\n";
	return 0;
}