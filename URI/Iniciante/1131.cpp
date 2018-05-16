/*A Federa��o Ga�cha de Futebol contratou voc� para escrever um programa para fazer uma estat�stica do resultado de v�rios GRENAIS.
Escreva um programa para ler o n�mero de gols marcados pelo Inter, o n�mero de gols marcados pelo Gr�mio em um GRENAL.
Logo ap�s escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta.
Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o n�mero de gols marcados pelos times em uma nova partida,
caso contr�rio deve ser encerrado imprimindo:
- Quantos GRENAIS fizeram parte da estat�stica.
- O n�mero de vit�rias do Inter.
- O n�mero de vit�rias do Gr�mio.
- O n�mero de Empates.
- Uma mensagem indicando qual o time que venceu o maior n�mero de GRENAIS (ou "Nao houve vencedor", caso termine empatado).*/

#include<iostream>

using namespace std;

int main(){

    int inter=0, gremio=0, empate=0, golInter, golGremio, grenais=0, op=0, vencedor=0;

    cin>>golInter>>golGremio;
    grenais++;
    if(golInter>golGremio){
        inter++;
    }
    if(golGremio>golInter){
        gremio++;
    }
    if(golInter==golGremio){
        empate++;
    }
    while(op!=2){
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>op;
        if(op==1){
            cin>>golInter>>golGremio;
                grenais++;
            if(golInter>golGremio){
                inter++;
            }
            if(golGremio>golInter){
                gremio++;
            }
            if(golInter==golGremio){
                empate++;
            }
        }
    }

    if(inter>gremio){
        cout<<grenais<<" grenais\nInter:"<<inter<<"\nGremio:"<<gremio<<"\nEmpates:"<<empate<<"\n"<<"Inter venceu mais\n";
    }else if(gremio>inter){
        cout<<grenais<<" grenais\nInter:"<<inter<<"\nGremio:"<<gremio<<"\nEmpates:"<<empate<<"\n"<<"Gremio venceu mais\n";
    }else if(inter==gremio){
        cout<<grenais<<" grenais\nInter:"<<inter<<"\nGremio:"<<gremio<<"\nEmpates:"<<empate<<"\nNao houve vencedor\n";
    }

    return 0;
}
