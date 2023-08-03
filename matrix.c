#include<stdio.h>
#include<stdlib.h>
int **multiply_matrices(int**matrix1,int**matrix2,intn){
int **product=malloc(n*sizeof(int*));
for(int i= 0; i<n;i++){
product[i] = malloc(n*sizeof(int));
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
for(int k=0;k<n;k++){
product[i][j]+=matrix1[i][k]*matrix2[k][j];
}
}
}
return product;
}
