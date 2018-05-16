/*A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS.
Escreva um programa para ler o número de gols marcados pelo Inter, o número de gols marcados pelo Grêmio em um GRENAL.
Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta.
Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida,
caso contrário deve ser encerrado imprimindo:
- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).*/

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
