#include <iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>

void leerm(int a,int b,int **X);
void imprm(int f,int c,int **a);
void multim(int m,int n, int s,int **b,int **d,int **e);


void leerm(int a, int b, int **X){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<"["<<i<<"] ["<<j<<"]";
            cin>> *(*(X+i)+j);
           }
        }
 }
void imprm(int f,int c,int **a){
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<*(*(a+i)+j);
           }
        cout<<"\n";
        }
 }

void multim(int a,int b,int d,int **X,int **Y,int **Z){
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            for(int k=0;k<b;k++){
                *(*(Z+i)+j)= *(*(Z+i)+j) +(*(*(X+i)+k)) *  (*(*(Y+k)+j));
               }
            }
        }
 }

int ** New_Matriz(int p,int q)
{
    int ** m , j;
    m =(int **)malloc(sizeof(int *)*p);
    for(j=0;j<p;j++)
        m[j]=(int *)malloc(sizeof(int)*q);
    return m;
}

void To_Cero(int ** m,int p,int q)
{
    int i, j;
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            m[i][j]=0;
    return;
}

int main(){
    /* Declaracion de matrices con punteros?
    int (*X)[b];
    int (*Y)[d];

    if(b==c)
    {
     int (*Z)[d];
    }
    */
    int a, b, c, d;
    int **X, **Y, **Z;
    cout<<"Numero de Filas de la Matriz A = ";cin>>a;
    cout<<"Numero de Columnas de la Matriz A = ";cin>>b;
    cout<<"Numero de Filas de la Matriz B = ";cin>>c;
    cout<<"Numero de Columnas de la Matriz B = ";cin>>d;

        X = New_Matriz(a, b);
        Y = New_Matriz(c, d);
        if(b==c){ Z = New_Matriz(a, d);}
        else cout << "Error\n";


            cout<<"\nElemetos de la Matriz A\n";
            leerm(a, b, X);
            cout<<"\nElementos de la Matriz B\n";
            leerm(c, d, Y);


           multim(a, b, d, X, Y, Z);

           // printf("\n");
            imprm(a, d, Z);
           // imprm(c, d, Y);
            //imprm(a, b, X);
return 0;
}
