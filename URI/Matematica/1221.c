/* numero primo rapido */

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
                printf("Not Prime\n");
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Prime\n");
        }
    }

	return 0;
}
