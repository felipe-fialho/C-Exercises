#include <iostream> 

#include <windows.h>

#include <stdlib.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;
    
    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;
    
    cout << "                                                - JOGO DA FORCA -   \n\n";
    cout << "Diga ao seu amigo tampar os olhos e digite a palavra secreta(digite a palavra toda maiuscula):  ";
    cin >> palavra;
    system("cls");
    
    while(palavra[i] != '\0') {
        i++;
        tam++;    
    }
    
    for(i=0; i < 30; i++){
        secreta[i] = '_';
    }
    
    while((chances > 0) && (acertos < tam)){
        cout << "Jogos da Forca - Chances restantes: " << chances << "\n\n";
        
   
        switch(chances){
            case 6:
                cout << "  _______" << endl;
                cout << " |/      |" << endl;
                cout << " |      " << endl;
                cout << " |      " << endl;
                cout << " |       " << endl;
                cout << " |      " << endl;
                cout << " |      " << endl;
                cout << "_|___" << endl;
                break;
            case 5:
                cout << "  _______" << endl;
                cout << " |/      |" << endl;
                cout << " |      (_)" << endl;
                cout << " |      " << endl;
                cout << " |       " << endl;
                cout << " |      " << endl;
                cout << " |      " << endl;
                cout << "_|___" << endl;
                break;
            case 4:
                cout << "  _______" << endl;
                cout << " |/      |" << endl;
                cout << " |      (_)" << endl;
                cout << " |       |" << endl;
                cout << " |       |" << endl;
                cout << " |      " << endl;
                cout << " |      " << endl;
                cout << "_|___" << endl;
                break;
            case 3:
                cout << "  _______" << endl;
                cout << " |/      |" << endl;
                cout << " |      (_)" << endl;
                cout << " |      \/|" << endl;
                cout << " |       |" << endl;
                cout << " |      " << endl;
                cout << " |      " << endl;
                cout << "_|___" << endl;
                break;
            case 2:
                cout << "  _______" << endl;
                cout << " |/      |" << endl;
                cout << " |      (_)" << endl;
                cout << " |      \/|\\" << endl;
                cout << " |       |" << endl;
                cout << " |      " << endl;
                cout << " |      " << endl;
                cout << "_|___" << endl;
                break;
            case 1:
                cout << "  _______" << endl;
                cout << " |/      |" << endl;
                cout << " |      (_)" << endl;
                cout << " |      \/|\\" << endl;
                cout << " |       |" << endl;
                cout << " |      / " << endl;
                cout << " |      " << endl;
                cout << "_|___" << endl;
                break;
        }
        
        cout << "\nPalavra Secreta: ";
        for(i=0; i<tam; i++){
            cout << secreta[i];
        }
        
        cout << "\n\nDigite Uma Letra: ";
        cin >> letra[0];
        
        acerto = false; // Resetar a variável acerto a cada tentativa
        for(i=0; i < tam; i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                if(secreta[i] == '_'){ // Só conta acerto se a letra não foi descoberta ainda
                    secreta[i] = palavra[i];
                    acertos++;
                }
            }
        }
        
        if(!acerto){
            chances--;
        }
        system("cls");
    }
    
	//Telinha Final
    system("cls");
    if(acertos == tam){
        cout << "Parabéns! Você Venceu!\n\n";
        cout << "A palavra era: ";
        for(i=0; i<tam; i++){
            cout << palavra[i];
        }
        cout << "\n\n";
    } else {
      //Desenho ao perder o jogo.
        cout << "  _______" << endl;
        cout << " |/      |" << endl;
        cout << " |      (_)" << endl;
        cout << " |      \/|\\" << endl;
        cout << " |       |" << endl;
        cout << " |      / \\" << endl;
        cout << " |      " << endl;
        cout << "_|___" << endl;
        
        cout << "\nVocê Perdeu!\n\n";
        cout << "A palavra era: ";
        for(i=0; i<tam; i++){
            cout << palavra[i];
        }
        cout << "\n\n";
    }
    
    system("pause");
    return 0;
}

		
	
	
	
	
	
	
	
	
	

