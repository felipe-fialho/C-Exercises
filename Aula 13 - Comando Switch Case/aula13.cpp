#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	/*switch (expressão){
		
		case const1:
			comandos;
			break;
		case const2:
			comandos;
			break;
		default
			comandos
	}*/
	
	int valor;
	
	cout << "indique uma cor: \n";
	cout << "[1,2.3] = Verde. [4,5,6] = Azul\n";
	cin >> valor;
	
	switch(valor){
		case 1:
		case 2:
		case 3:
			cout << "Cor Selecionada: Verde\n";
			break;
		case 4:
		case 5:
		case 6:	
			cout << "Cor Selecionada: Azul\n";
			break;
		default:
			cout << "Valor Selecionado Invalido\n";
	}
	
	cout << "\nPrograma Finalizado\n";
	
	
	return 0;
}
