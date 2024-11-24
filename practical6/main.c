#include<stdio.h>
void matmult(int n,int p, int q,double A[n][p],double B[p][q],double C[n][q]);
int main(){
        int n=5,p=3,q=4;
        double A[n][p],B[p][q],C[n][q];
        int i,j,k; //Loop indices

        //Intialize A,B,C
        for(i=0;i<n;i++){
                for(j=0;j<p;j++){
                        A[i][j]=i+j;
                }
        }

        for(i=0;i<p;i++){
                for(j=0;j<q;j++){
                        B[i][j]=i-j;
                }
        }

        // Calling the function matmult
        matmult(n,p,q,A,B,C);

        //Printing the matrices A,B,C
        printf("Matrix A:\n");
        for(i=0;i<n;i++){
                for(j=0;j<p;j++){
                        printf("%3.0lf",A[i][j]);
                }

                printf("\n");
        }
        printf("Matrix B:\n");
        for(i=0;i<p;i++){
                for(j=0;j<q;j++){
                        printf("%3.0lf",B[i][j]);
                }

                printf("\n");
        }
        printf("Matrix C:\n");
        for(i=0;i<n;i++){
                for(j=0;j<q;j++){
                        printf("%3.0lf",C[i][j]);
                }

                printf("\n");
        }
        return 0;
}