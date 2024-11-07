/* cat 2.2.b
Author:Brian Njoroge
reg no:CT101/G/23290/24
date:7/11/24
*/
// an array is a data structure in c that stores a collection of elements of the same data type in contiguous memory loocations
#include<stdio.h>
int main(){
int scores[2][2][2]={
{{65,92},{84,72}},
{{35,70},{59,67}}
};
for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		for(int k=0;k<2;k++){
			printf("scores[%d][%d][%d]=%d\n",i,j,k,scores[i][j][k]);
			
		}
	}
}
return 0;
}
