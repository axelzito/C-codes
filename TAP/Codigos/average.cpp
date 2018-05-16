#include<iostream>

using namespace std;

int main(){
  int n, num, valor1[1000], valor2[1000], cont=0;
  double aux[51];
  cin >> n;

  for(int i = 0; i<n; i++){
    cin >> num;
    double soma = 0;

    for(int j=0; j<num; j++){

      cin>>valor1[j];
      soma+=valor1[j];
    }

    for(int j=0; j<num; j++){

      cin>>valor2[j];
      soma+=valor2[j];
    }

    for(int j=0; j<num; j++){

      aux[j]=valor1[j]+valor2[j];
    }

    double media = 0;

    media = soma / (double)max(num, 1);

    for(int j=0; j<num; j++) {
      if(aux[j] < media) {
        cont++;
      }
    }

    cout<<cont<<"\n";
    cont=0;
  }

  return 0;
}
