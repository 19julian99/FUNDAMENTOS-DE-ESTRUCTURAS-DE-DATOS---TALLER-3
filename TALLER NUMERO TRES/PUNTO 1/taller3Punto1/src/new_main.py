#!/usr/bin/env python2
#encoding: windows-1252

# To change this license header, choose License Headers in Project Properties.
# To change this template file, choose Tools | Templates
# and open the template in the editor.
import random
if __name__ == "__main__":
    """in this part, the user is asked for the screen to enter the size of the
    matrix and then it is filled in a repetitive FOR structure"""
    print "ingrese el tamaño de la matriz"
    m=input()
    f=m
    c=m
    matriz=[]
    info="Cada vez que usamos el método append de las listas se crea una copia de la lista original y se añade un elemento a esa copia para luego borrar el array original."
    for i in range (f):
      matriz.append([0]*c)
    
        
    """is a FOR cycle a random number is generated in a range from 1 to 100
    for each index of the matriz
    """
    for i in range (f):
        for j in range(c):
            matriz[i][j]=random.randint(1,100)
            
    """in this part the original matrix is  print '[',matriz[i][j],']',
        print
   
            