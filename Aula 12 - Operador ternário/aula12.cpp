#include <iostream>

using namespace std;

int main()
{
	
	//(expressao)	? valor1 : valor2;
	
	
	int n1,x;
	
	x = 5;
	
	inicio:
		
	cout << "Digite um valor: ";
	cin >> n1;

	//  OPerador ternarios poder ser "empilhados" Exemplo 
	// string res = (n1 >= 10) ? x++:
	//				(n1 <= 20) ? x--: x++;

	// (nota >= 60 ) ? res="Aprovado" : res="Reprovado";
	(n1 >= 10) ? x++ : x-- ;
	
	cout << "\nNovo Valor do X: " << x << "\n";
	
	goto inicio;
	
	return 0;
}