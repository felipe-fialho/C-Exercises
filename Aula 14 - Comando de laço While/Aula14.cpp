#include <iostream>

using namespace std;

int main()
{
	//while(expressao/teste logico/ comparativo){
	//		comando;
	//	}
	
	/*int n;
	
	n = 0;
	
	while (n++ < 10){
		cout << n << "\n";
		n++;
		cin >> n;
		n+=2;
	}*/
	
	int cont;
	
	cont = 0;
	while(cont++ < 20){
		cout << "\nFaz o L - " << cont << "\n";
		if(cont == 10){
			break;
		}
	}
	
	cout << "\nRotina Finalizada\n";
		
	
	
	return 0;
}