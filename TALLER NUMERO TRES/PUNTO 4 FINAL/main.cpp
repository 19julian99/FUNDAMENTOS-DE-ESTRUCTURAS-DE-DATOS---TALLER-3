#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    /*
    it is requested by the screen to choose one of the possible sizes for the
     matrices since they must be numbers with an exact root to create an equal matriz
    */
    cout<<"bienvenido esta es la cantidad de numeros que puede ingresar\n";
    cout<<"elija el de su preferencia: 1 , 2 , 4 , 9 , 16 , 25 , 36 , 49 , 64 , 91 , 100\n";
    cout<<"cuantos numeros va a ingresar?\n";
    int cantidad=0;
    cin>>cantidad;
    
    int num[cantidad];
    int a=0;
    /*it is requested by the screen to choose one of the possible sizes for the matrices since they must be numbers with an exact root to create an equal matrix
    numbers are requested for the matrix in a one-to-one cycle
    */
    for(int i=0;i<cantidad;i++){
            cout<<"ingrese el numero";cout<<i+1;cout<<" : ";
            int numa;
            cin>>numa;
            num[a]=numa;
            a=a+1;
    }
    
    /*by means of the reason the columns and rows are removed
    */
    int m =(int)(sqrt(cantidad));
    int n=cantidad/2;
    
    cout<<"filas de a ";cout<<m;
    int matriz[m][m];
    int lleva = 0;     
 
    int cont = 0;
/*then the numbers are passed from an array to a matrix by means of a FOR cycle
*/
         for (int x = 0; x < m; x++) {
             for (int y = 0; y < m; y++) {
                 matriz[y][x] = num[cont];
                 cont++;
             }
         }
         
         cout<<"\n";
         /*in a cilce FOR is printed the original matriz*/
        for (int x = 0; x < m; x++) {
            for (int y = 0; y < m; y++) {
            cout<<"[";
            cout<<matriz[y][x];
            cout<<"]";
                
            }
            cout<<"\n";
        }
        cout<<"\n";
         /*in a cilce FOR for print the trasnpuest matriz is reversed the index in the matriz */
        for (int x = 0; x < m; x++) {
            for (int y = 0; y < m; y++) {
            cout<<"[";
            cout<<matriz[x][y];
            cout<<"]";
                
            }
            cout<<"\n";
        }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
