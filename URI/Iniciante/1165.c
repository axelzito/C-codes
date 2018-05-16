/* Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo.
 * Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7. */

#include<stdio.h>
#include<math.h>

int main(){

	long long num, n, i, j, flag=0;

	scanf("%lld", &n);

	for(i=1; i<=n; i++){
		scanf("%lld", &num);
        flag = 0;
		for(j=2; j<=sqrt(num); j++){
            if (num%j==0){
                printf("%lld nao eh primo\n", num);
                flag=1;
                break;
            }
        }
        if(flag==0){
                printf("%lld eh primo\n", num);
        }
    }

	return 0;
}
