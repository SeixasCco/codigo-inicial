#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Pedido {
	string sanduiche;
	string wooper;
	string hamburguer;
	string bacon;
	string salada;
	string fritas;
	string endereco;
	
};

int main(){
	Pedido pedido;
	char answer,answer1, answer2, answer3, answer4;
	
	cout << "Bem vindo ao atendimento online Burguer King, posso anotar seu pedido ?" << endl;
	cout << "Por favor digite 1 para WOOPER R$10 , 2 para sanduiche R$ 5 e 3 para entrega se voce ja tem um pedido cadastrado" << endl;
	cin >>answer;
	if(answer== '1'){
		cout << "Voce selecionou WOOPER, gostaria de adicionais ? (S/N)" << endl;
		cin >>answer1;
		if (answer1 =='S'){
			cout << "1 - Bacon R$ 3,00 , 2 - Hamburguer R$ 4,00,  " << endl;
		cin >>answer2;
			if (answer2=='1'){
				cout << "Voce adicionou bacon, seu pedido ficou em 13 R$ " << endl;
				cout << "Siga para o caixa finalizar seu pedido" << endl;
			}
			else{
				cout << "Voce adicionou hamburguer, seu pedido ficou em 14 R$ " << endl;
				cout << "Siga para o caixa finalizar seu pedido" << endl;
			}
		}
			
		else {
		cout<< "Seguimos para a finalizacao do pedido" << endl;
		cout <<"Pedido finalizado" << endl;
		cout <<"Favor passe no caixa fazer o pagamento" << endl;
		}
	}
	else if (answer =='2'){
		cout << "Voce selecionou sanduiche, gostaria de adicionais ? (S/N)" << endl;
		cin >>answer3;
		if (answer3 =='S'){
			cout << "1 - Salada R$ 2,00 , 2 - Fritas R$ 7,00,  " << endl;
		cin >>answer4;
			if (answer4=='1'){
				cout << "Voce adicionou salada, seu pedido ficou em 7 R$ " << endl;
				cout << "Siga para o caixa finalizar seu pedido" << endl;
			}
			else{
				cout << "Voce adicionou fritas, seu pedido ficou em 12 R$ " << endl;
				cout << "Siga para o caixa finalizar seu pedido" << endl;
			}
		}
		else {
		cout<< "Seguimos para a finalizacao do pedido" << endl;
		cout <<"Pedido finalizado" << endl;
		cout <<"Favor passe no caixa fazer o pagamento" << endl;
		}
	}
	else {
		cout << "Precisamos do endereço para entrega, favor digitar abaixo " << endl;
		getline(cin, pedido.endereco );
		cout << "Seu pedido sera entregue no endereco: " << pedido.endereco << endl;
		Sleep(1000);
		cout << "Saindo do sistema de pedidos, Obrigado" << endl;
			
	return 0;
	}	
	
return 0;	
}
