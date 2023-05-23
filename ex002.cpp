#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    	
    int n, c = 1, num_alu = 1, turma = 0, aprovado = 0, reprovado = 0;
    double nota = 0, soma_alu = 0, media_alu = 0, soma_turm = 0, media_turm = 0;
    char sentinel;

    system("cls");

    cout << "Quantas turmas o professor X tem: ";
    cin >> n;

    while(c <= n){
         cout << "\nTurma: " << c << endl;
        while(true){
            for(int control = 1; control <= 3 ; control++ ){
                cout << "Digite a nota " << control << " entre [0-10] do aluno " << num_alu << " : ";
                cin >> nota;
                soma_alu += nota;
            }
            media_alu = soma_alu/3;
            soma_turm += media_alu;
            if(media_alu >= 7){
                aprovado++;
            }else{
                reprovado++;
            }
            media_alu = 0;
            soma_alu = 0;
            turma++;
            cout << "\nAinda tem alunos na turma: [S] ou [N] : ";
            cin >> sentinel;
            if(sentinel == 'N' or sentinel == 'n'){
                break;
            }
            num_alu++;
        }
        media_turm = soma_turm/turma;
        cout << "\nA media da Turma " << c << " eh: " << media_turm << endl;
        turma=0;
        media_turm = 0;
        soma_turm = 0;
        num_alu = 1;
        c++;
    }

    cout << "\nO numero de alunos da(s) " << n << " turmas do professor X que foram aprovados eh: " << aprovado << endl;
    
    cout << "O numero de alunos das " << n << " turmas do professor X que foram reprovados eh: " << reprovado << endl;


    return 0;
}

