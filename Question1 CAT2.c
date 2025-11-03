#include <stdio.h>
int main(){
	int a,b,c,scores[2][2]={{{65,92},{84,72}},{{35,70},{59,67}}};
	
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
            for(c=0;c<2;c++){
		        printf("%d\t",scores[a][b]);
                }
                printf("\n");
                }
                printf("\n");
	}

return 0;
}