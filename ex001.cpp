#include <iostream>
using namespace std;

int main(){
    	
    int produt = 0, cli = 0;
    double valor = 0, soma = 0, media1 = 0, media2 =  0, soma2 = 0;
    char opc;

    do{
        do{
            cout << "Digite o valor do seu produto: ";
            cin >> valor;
            if(valor < 0){
                break;
            }
            soma = soma +  valor;
            produt++;
            media1 = soma/produt;
        }while(true);

        cli++;

        cout << "A media de valores dos produtos desse cliente foi: " << media1;
        soma2 = soma2 + media1;
        soma = 0;
        media1 = 0;
        produt = 0;
        cout << "\n\n";

        cout << "Deseja adicionar mais um cliente: [S] ou [N]: ";
        cin >> opc;
        cout << "\n\n";

        if(opc == 'N' or opc == 'n'){
            break;
        }
    }while(true);

    media2 = soma2/cli;

    cout << "A media de valores do(s) " << cli << " clientes foi: " << media2;
    
    return 0;
}
