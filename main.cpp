#include "Banco.h"

using namespace std;

void menu(){
    system("clear");
    cout << "1 - Inserir Cliente \n";
    cout << "2 - Excluir Cliente \n";
    cout << "3 - Listar Clientes Preferenciais \n";
    cout << "4 - Listar Clientes Comuns \n";
    cout << "5 - Listar Quantidads Referenciais \n";
    cout << "6 - Listar Quantidades Comuns \n";
    cout << "7 - Sair \n";
    cout << "Escolha sua opção: ";
};

int main(){
    Banco **P, **C, B;
    P = new Banco*[2];
    C = new Banco*[2];

    P[0] = NULL;
    P[1] = NULL;
    C[0] = NULL;
    C[1] = NULL;
    string nome;
    int idade, op, tipo;
    do{
        menu();
        cin >>op;
        switch(op){
        case 1:
            cout << "Informe o nome: ";
            cin >> nome;
            cout << "Infome a idade: ";
            cin >> idade;
            if(idade >= 60)
                P = B.inserir(P,nome, idade);
            else
                C = B.inserir(C, nome, idade);
            cout << "Inserido com sucesso";
            break;
        case 2:
            cout << "Informe o tipo: 1 ou 2: " ;
            cin >> tipo;
            if (tipo == 1)
                P[0] - B.excluir(P[0]);
            else
                C[0] = B.excluir(C[0]);
            cout << "Excluído com sucesso";
            break;
        case 3:
            if(P[0] != NULL)
                B.listar(P[0]);
            else
                cout << "Fila Vazia" ;
            break;
        case 4:
            if(C[0] != NULL)
                B.listar(C[0]);
            else
                cout << "Fila vazia";
            break;
        case 5:
            if(P[0] != NULL)
                cout << "Total Preferenciais" << B.Quantidade(P[0]);
            else
                cout << "Fila Vazia" ;
            break;
        case 6:
            if(C[0] != NULL)
                cout << "Total Preferenciais" << B.Quantidade(C[0]);
            else
                cout << "Fila Vazia" ;
            break;
        case 7:
            cout << "TCHAU!!";
            break;
        default:
            cout << "Obra inválida";
        }
        cin.ignore().get();
       } while (op != 7);
            return 0;
}


