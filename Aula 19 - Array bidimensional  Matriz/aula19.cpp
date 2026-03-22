#include <iostream>

#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	
	
	char palavra[50];
	
	int matriz [3][4];// exemplo: "Uma Matriz ade 3 linhas e 4 Colunas."
	int L, C;
	for(L = 0; L < 3; L++){		
		for(C = 0; C < 4; C++){			
			cin >> matriz[L][C]; //Posso inserir ou Deixar ser inserido automaticamente.
	}
	}
	
/*	
	matriz[0][0] = 0; //indices
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;
	
	matriz[1][0] = 1; 
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;
			                                                                 
	matriz[2][0] = 2; 
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;
*/	
	for(L = 0; L < 3; L++){		
		for(C = 0; C < 4; C++){			
			cout << matriz[L][C] << "  ";
		}
		cout << "\n";				
	}
	
		
	return 0;
}
