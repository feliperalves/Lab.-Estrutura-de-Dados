#include "Banco.h"

Banco** Banco:: inserir(Banco **R, std::string N, int I){
    Banco *novo = new Banco();
    novo -> nome = N;
    novo -> idade = I;
    if (novo -> idade >= 60)
        novo -> tipo = 1;
    else
        novo -> tipo = 2;
    if (R[0] == NULL)
        R[0] = novo;
    else
        R[1] -> elo = novo;
    R [1] = novo;
    return R;
}
Banco* Banco:: excluir (Banco *I){
    Banco *aux = I;
    I = I -> elo;
    delete(aux);
    return I;
}
void Banco::listar(Banco *I){
    Banco *aux = I;
    std::string T;
    if (aux->tipo == 1)
        T = "Cliente Preferencial";
    else
        T = "Cliente Comum";
    while(aux != NULL){
        std::cout << aux->nome << " " << aux -> idade << " " << T << "\n" << std::endl;
        aux = aux -> elo;
    }
}
int Banco::Quantidade(Banco *I){
    Banco *AUX = I;
    int quant = 0;
    while (AUX!= NULL){
        quant ++;
        AUX = AUX -> elo;
    }
    return quant;
};
