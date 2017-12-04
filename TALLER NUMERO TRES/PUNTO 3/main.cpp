#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[])
    /*next it is requested to enter the size of an array and all the algorithm 
    variables are initialized
    */
{
    cout << "INGRESE EL TAMAÑO DEL ARREGLO BIDIMENCIONAL";
    int m;
    printf("\n");
    cin >> m;
    printf("\n ");
    int matriz[m][m];
    int positivos=0;
    int negativos=0;
    int impares=0;
    int pares=0;
    /*with a for cycle the matrix is filled randomly with numbers from -99 to 99
     to have negative and negative
    */
    // llenar matriz aleatoria con positivos y negativos
    for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
             
                    matriz[i][j] =-99+rand()%(99+100);

                    }
    }
       
    /*with a for cycle the full matrix is printed
    */
   //imprimir matriz
  cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                     cout<<"[";
                     cout<<matriz[i][j];
                     cout<<"]";
            }
       printf("\n");
    }
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    
    /*with a for cycle, the positive ,negative, par e impar variables are
     counted to know how many are in the matriz, all being validated by a conditional
    */
     //pares e impares
    for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                    if (matriz[i][j]%2== 0) 
                    {
                    pares = pares + 1;

                    } else {
                     impares = impares + 1;
                     }     
             }
    }
    //positivos y negativos
    for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                    if (matriz[i][j] >= 0) 
                    {
                    positivos = positivos + 1;

                    } else {
                    negativos = negativos + 1;
            }    
     }
   }
   
   /*with a for cycle they are printed by positive and negative
    separations as well as odd and even, all being validated by a conditional
   */
       // imprimir positivos 
   cout<<"positivos= ";cout<<positivos;
   printf("\n");
   for(int i = 0; i < m; i++) {
           for(int j = 0; j < m; j++) {
           
            if (matriz[i][j] >= 0) 
            {
            cout<<matriz[i][j];
            cout<<",";
           }
           
       }
   } 
    printf("\n");
    printf("\n");
   //imprimir negativos ;
   cout<<"negativos= "; cout<<negativos;
   printf("\n");
   for(int i = 0; i < m; i++) {
           for(int j = 0; j < m; j++) {
           
            if (matriz[i][j] < 0) 
            {
            cout<<matriz[i][j];
            cout<<",";
           }
           
       }
   } 
    printf("\n");
    printf("\n");
    
    
    
    //imprimir pares 
    cout<<"pares= ";cout<<pares;
    printf("\n");
    for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (matriz[i][j]%2 == 0) {
                    cout<<matriz[i][j];cout<<",";
                }
            }
         }
    printf("\n");
    printf("\n");
        
   //imprimir impares
    cout<<"impares= ";cout<<impares;
    printf("\n");
    for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (matriz[i][j]%2 != 0) {
                    cout<<matriz[i][j];cout<<",";
                }
            }
         }
    printf("\n");
         
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
