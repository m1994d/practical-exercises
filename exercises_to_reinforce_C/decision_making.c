/*
  
  TOMA DE DECISIONES (if) 
  OPERADORES DE IGUALDAD   | OPERADORES DE RELACION
                             > x ES MAYOR QUE y
			     < x ES MENOR QUE y
			     >= x ES MAYOR O IGUAL QUE y
			     <= x ES MENOR O IGUAL QUE y
  == x ES IGUAL QUE y
  /= x ES DIFERENTE QUE y 
  
  
  */

/*INICIA EL PROGRAMA*/


#include <stdio.h>
int main()
{
  int age;
  printf("enter your age\n");
  scanf("%d", &age);
  if(age >=18)
  {
    printf("is of legal age\n");
  }
  else if(age == 17)
  {
	  printf("sorry, you are almost of age\n");
  }  
  else
  {
    printf("is a minor\n");
  }
  return 0; /*TERMINA EL PROGRAMA*/
}
