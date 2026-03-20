#include <iostream>

using namespace std;

int main()
{
	
    int pessoa1;
    int pessoa2;
    
    
    std::cout << "Para jogar em dupla" << std::endl;
    std::cout << "Cada pessoa, em segredo, escolha uma das tres opcoes a seguir e insira aqui:" << std::endl;
    
    std::cout << "- 1 (para Pedra)" << std::endl;
    
    std::cout << "- 2 (para Papel)" << std::endl;
    
    std::cout << "- 3 (para Tesoura)" << std::endl;
    
	std::cout << "Escolha do Jogador 1\n";
	std::cin >> pessoa1;

    
	std::cout << "Escolha do Jogador 2\n";
	std::cin >> pessoa2;

    if (pessoa1 == pessoa2){
    	
   	 std::cout << "Empate" << std::endl;
	
				
	}else if (pessoa1 == 1 && pessoa2 == 2)	{
	  std::cout << "Papel ganha, vencedor é o jogador 1" << std::endl;
	
	}
    
    

    

    return 0;
}



  /* if (jogador == v1 && opcao2 == v3) 
    
    std::cout << "Pedra ganha, vencedor é o player 2" << std::endl;
    
 else if (opcao1 == v3 && opcao2 == v1) 
    
    std::cout << "Pedra ganha, vencedor é o player 1" << std::endl;
    
    if (opcao1 == v2 && opcao2 == v3) 
    
    std::cout << "Tesoura ganha, vencedor é o player 2" << std::endl;
    
 else if (opcao1 == v3 && opcao2 == v2)
    
    std::cout << "Tesoura ganha, vencedor é o player 1" << std::endl;
    
    if (opcao1 == v1 && opcao2 == v1) 
    
    std::cout << "Empate" << std::endl;
    
 else if (opcao1 == v2 && opcao2 == v2) 
    
    std::cout << "Empate" << std::endl;
    
 else (opcao1 == v3 && opcao2 == v3) 
    
    std::cout << "Empate" << std::endl*/