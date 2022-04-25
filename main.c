/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    float real;
    float imaginario;
}numerocomplexo;

int aleatorio(){
    
    return(rand()%100);
}

void imprime(numerocomplexo *x)
{
    x->real = x->real +1;
    x->imaginario = x-> imaginario+1;
    printf("\n O numerocomplexo é..: %.1f + %.1f",x->real,x->imaginario);
}

numerocomplexo* alocaMemoria(int tam)
{
    numerocomplexo *novo;
    
    novo = (numerocomplexo*) malloc(tam*sizeof(numerocomplexo));
    
    return(novo);
}

int main()
{
    int i;
    numerocomplexo num1;
    numerocomplexo vnum[10];
    numerocomplexo *pt, *pt2;
    
    num1.real = 10;
    num1.imaginario = 5;
    
    imprime(&num1);
    
    printf("\n O numerocomplexo é..: %.1f + %.1f",num1.real,num1.imaginario);
     
    for(i = 0; i < 10; i++)
    {
        vnum[i].real = aleatorio();
        vnum[i].imaginario = aleatorio();
    }
    
    pt = &num1;
    
    for(i = 0; i < 10; i++)
    {
        printf("\n O valor sorteado é..: %.1f + %.1f",vnum[i].real,vnum[i].imaginario);
        imprime(pt);
        pt++;
    }
    
    pt2 = alocaMemoria(5);
    
    for(i =0; i < 5; i++)
    {
        pt2->real = aleatorio();
        pt2->imaginario = aleatorio();
        
        printf("\n O valor sorteado para o ponteiro é..: %.1f + %.1f",pt2->real,pt2->imaginario);
        imprime(pt2);
        pt2++;
    }
    
    printf("\n O valor sorteado para o ponteiro é..: %.1f + %.1f",pt2->real,pt2->imaginario);
    printf("\n-------------");
    
    pt2--;
    
    for(i = 4; i >= 0; i--)
    {
       
        printf("\n O valor sorteado para o ponteiro é..: %.1f + %.1f",pt2->real,pt2->imaginario);
        pt2--;
    }

    return 0;
}
