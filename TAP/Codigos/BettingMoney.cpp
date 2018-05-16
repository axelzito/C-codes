#include<iostream>
#include<vector>

using namespace std;

int main(){

    int k,t;
    cin>>t;
    for(k=0; k<t; k++){

		//int moneyMade(vector<int> amounts, vector<int> centsPerDollar, int finalResult)
			int netgain=0;
			int resAmount, resCentsPerDollar;
			vector<int> amounts;
			vector<int> centsPerDollar;
			int numA, a, numC, c;
			int finalResult;

			cin>>numA;
			for(int i=0; i<numA; i++){
                cin>>a;
                amounts.push_back(a);
            }

            cin>>numC;
			for(int i=0; i<numC; i++){
                cin>>c;
                centsPerDollar.push_back(c);
            }

			cin>>finalResult;

            resAmount = amounts[finalResult];
			resCentsPerDollar = centsPerDollar[finalResult];

			for (int i=0; i < amounts.size() ; i++){
				if (i == finalResult)
					continue;
				netgain += amounts[i];
			}

			netgain = (netgain*100) - (resAmount * resCentsPerDollar);
			cout<<netgain<<"\n";
    }
    return 0;
}
/*
int main(int argc, char *argv[])
{
	BettingMoney obj;
	vector<int> v1, v2;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);

	int finalResult=1;
	cout<<obj.moneyMade(v1,v2,finalResult);

}*/
