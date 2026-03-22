 #include <iostream>
 
 #include <windows.h>
 
 #include <stdlib.h>
 using namespace std;
 
 int main()
 {
 	SetConsoleOutputCP(CP_UTF8);
 	
 	char palavra[30],letra [1],secreta[30];
	int tam, i , chances, acertos; 
	bool acerto;
	
	chances = 6;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;
	
	cout << "                 ==== JOGO DA FORCA === \n\n";
	cout << "Diga ao seu amigo tampar os olhos e digite a palavra secreta:  ";
	cin >> palavra;
	system("cls");
	
	//'\0' e igual a ENTER para indicar que a string/conteudo digitado termina ali
	// Lê as treclas digitadas pelo usuario ate o ENTER, e inclementa na variavel tam.
	while(palavra[i] != '\0') {
		i++;
		tam++;	
	}
 	
 	//Da o feedback ao jogador de quantos acertos e o tamanho da palavra.
 	for(i=0; i < 30; i++){
 		secreta[i] = '_';
	 }
 	
 	//Estrutura Principal
 	while((chances > 0) && (acertos < tam)){
 		cout << "Ainda restam " << chances << " Chances\n\n";
 		cout << "Palavra Secreta: ";
 		
 		for(i=0; i<tam;i++ ){
 			cout << secreta[i];
			 }
			 
			 cout << "\n\nDigite Uma Letra: ";
			 cin >> letra[0];
			 for(i=0; i < tam; i++){//Verifica a letra digitada pelo usuario
			 	if(palavra[i] == letra[0]){
			 		acerto = true;
			 		secreta[i] = palavra[i];
			 		acertos++;
				 }
			 }
			 if(!acerto){
			 	chances--;
			 }
			 acerto = false;
			 system ("cls");
		 }
	 
 	if(acertos == tam){
 		cout << "Você Venceu!\n\n";
	 }else{
	 	cout << "Você Perdeu!\n\n";
	 }
 	
 	system("pause");
 	return 0;
	 }
