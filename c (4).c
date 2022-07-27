#include<stdio.h>

int a,b1000,b500,b100,b50,b20,b10,b5,b2,b1,b05,b025;

main(){
	printf("Enter Final Majikite : ");
	scanf("%d",&a);
	
	printf("-----------------------------------------------");
	
	printf("\nThis %d Majikite can chance To... \n\n",a);

	b1000 = a/1000;
	printf("Bank 1000 %d bank\n",b1000);
	b500 = (a%1000)/500;
	printf("Bank  500 %d bank\n",b500);
	b100 = ((a%1000)%500)/100;
	printf("Bank  100 %d bank\n",b100);
	
	b50 = (((a%1000)%500)%100)/50;
	printf("Bank   50 %d bank\n",b50);	
		
	b20 = ((((a%1000)%500)%100)%50)/20;
	printf("Bank   20 %d bank\n",b20);
	
	b10 = (((((a%1000)%500)%100)%50)%20)/10;
	printf("Bank   10 %d bank\n",b10);
	
	b5 = ((((((a%1000)%500)%100)%50)%20)%10)/5;
	printf("Bank    5 %d bank\n",b5);
	
	b2 = (((((((a%1000)%500)%100)%50)%20)%10)%5)/2;
	printf("Bank    2 %d bank\n",b2);
	
	b1 = ((((((((a%1000)%500)%100)%50)%20)%10)%5)%2)/1;
	printf("Bank    1 %d bank\n",b1);	

//don't know how to do krub TT
	/*b05 = (a%1)/0.50;
	printf("Coin 2 %d bank\n",b05);
	b025 = (a%0.5)/0.25;
	printf("Coin 1 %d bank\n",b025);
	*/
	
	getch();
}


