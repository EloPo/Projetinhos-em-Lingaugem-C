#include <stdio.h> 
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char letra[20];
	char num[20];
	char opcao;
	int x;

   	
	printf ("====================================================================\n");
	printf ("                     Conversão de ASCII                             \n");
	printf ("====================================================================\n");
	

	opcao:

	printf ("\n    Digite uma letra: ");
	gets(letra);
    
    system("CLS");
	
	printf ("====================================================================\n");
	printf ("                     Conversão de ASCII                             \n");
	printf ("====================================================================\n");
		
        
    printf ("\n    Digite uma letra: %s = ",letra);
   
	for (x=0;letra[x] !=0;x++){
	      
	      num[x] = letra[x];
	
	   	printf ("%i ",num[x]);
		
}
      goto opcao;
    
	return 0;
} 
