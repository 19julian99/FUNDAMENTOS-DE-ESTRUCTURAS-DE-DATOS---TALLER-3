/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package taller3.punto.pkg5;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 *
 *
 * @author: Julian Peñuela ID:607452 NRC:5813
 * @version: 3/12/2017/A
 *
 */
//
public class Taller3Punto5 {

    /**
     *
     * Next we will see the main where the input data for the search method is
     * requested.
     *
     * @author: Julian Peñuela ID:607452 NRC:5813
     * @version: 2/11/2017/A
     * @see <a href = https://github.com/19julian99" /> </a>
     * @throws IOException
     *
     */
    public static void main(String[] args) throws IOException {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader leer = new BufferedReader(isr);
        //the numbers are read by a comma and stored in a String, then this is
        //divided into a String arreeglo and the initial string is split by the token (","
        System.out.println("\ningrese los numeros SEPARADOS POR COMA");
        String numeros = leer.readLine();
        String pre[] = numeros.split(",");
        //the property .length () is used to obtain the size of the array and
        //this determine the repetitions of the FOR cycle
        int array[] = new int[pre.length];
        //in a FOR structure, you pass the string array to an integer using 
        //the Integer.parseInt () property;
        for (int i = 0; i < pre.length; i++) {
            array[i] = Integer.parseInt(pre[i]);
        }
        //the square root is used to divide the arrangement into equal columns 
        //and rows, it can be with the division but it is not so exact
        int m = (int) Math.sqrt(pre.length);
        int matriz[][] = new int[m][m];
        int copy[][] = new int[m][m];
        int cont = 0;
        //is created a new copy of the array for the conditions
        //copia 
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                copy[i][j] = matriz[i][j];
            }
        }
        System.out.println("copia");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print("[" + copy[i][j] + "]");
            }
            System.out.println("");

        }
        System.out.println("ORIGINAL");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print("[" + matriz[i][j] + "]");
            }
            System.out.println("");

        }

        //in this part the elements of the entire array already separated by 
        //commas are passed to a multidimensional array
        for (int x = 0; x < m; x++) {
            for (int y = 0; y < m; y++) {
                matriz[y][x] = array[cont];
                cont++;
            }
        }
        //in a cicle For our print the original array
        System.out.println("ORIGINAL");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print("[" + matriz[i][j] + "]");
            }
            System.out.println("");

        }
// in this part the diagonals are removed for each part of the diamond, the same
        // conditions are used to generate a diamond for an even or odd size matrix that 
        //only has a small modification
        if (m % 2 == 0) {
//for the conditions it was mainly based on finding the midpoint of each side
            //of the square of the areglo then I realized that the sum of each diagonal or 
            //the numros in it were in an order for example they went from 0 7 t, then this 
            //was used to take out the midpoint (size / 2) and then the sum of the indices or the operation of the diagonal
          for (int i = 0; i < m; i++) {
                        for (int j = 0; j < m; j++) {
                            if (i + j >= (m / 2) - 1 && i + j <= (m / 2) + m - 1) {
                                matriz[i][j] = 0;
                            }
                        }
                    }

                    matriz[0][m - 1] = copy[0][m - 1];
                    matriz[m - 1][0] = copy[m - 1][0];

        } else {
            //for the conditions it was mainly based on finding the midpoint of each side
            //of the square of the areglo then I realized that the sum of each diagonal or 
            //the numros in it were in an order for example they went from 0 7 t, then this 
            //was used to take out the midpoint (size / 2) and then the sum of the indices or the operation of the diagonal

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < m; j++) {
                    if (i + j >= (m / 2) && i + j <= (m / 2) + m - 1) {
                        matriz[i][j] = 0;
                    }
                }
            }
            matriz[0][m - 1] = copy[0][m - 1];
            matriz[0][m - 2] = copy[0][m - 2];
            matriz[1][m - 1] = copy[1][m - 1];
            matriz[m - 1][m - 2] = copy[1][m - 1];

            matriz[m - 1][0] = copy[0][m - 1];
            matriz[m - 2][0] = copy[0][m - 2];
            matriz[m - 1][1] = copy[1][m - 1];
        }
        // in a cicle for our print the numbers out of the Diamond
        System.out.println("\nNUMEORS FUERA DEL ROMBO");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print("[" + matriz[i][j] + "]");
            }
            System.out.println();
        }

    }

}
