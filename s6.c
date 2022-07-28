#include<stdio.h>
 
int main()
{
    float mjk;
    int mjk_baht;
    float mjk_satang;    
    
	//  
    printf("Enter Final Majikite : ");
    scanf("%f", &mjk);
    //
    
    printf("--------------------------------");
	
	printf("\nThis %f Majikite can chance To... \n\n",mjk);
	 
    mjk_baht = (int)mjk;
    mjk_satang = mjk - mjk_baht;
      
    if(mjk_baht >= 1000){
        printf("\n Bank 1000 Majikite = %d ", mjk_baht/1000);
        mjk_baht = mjk_baht % 1000;
	}
	else{
		printf("\n Bank 1000 Majikite = 0 ");
	}
	
    if(mjk_baht >= 500){
        printf("\n Bank  500 Majikite = %d", mjk_baht/500);
        mjk_baht = mjk_baht % 500;
    }
	else{
		printf("\n Bank  500 Majikite = 0 ");
	}
      
    if(mjk_baht >= 100){
        printf("\n Bank  100 Majikite = %d", mjk_baht/100);
        mjk_baht = mjk_baht % 100;
    }
	else{
		printf("\n Bank  100 Majikite = 0 ");
	}
      
    if(mjk_baht >= 50){
        printf("\n Bank   50 Majikite = %d", mjk_baht/50);
        mjk_baht = mjk_baht % 50;
    }
	else{
		printf("\n Bank   50 Majikite = 0 ");
	}
      
    if(mjk_baht >= 20){
        printf("\n Bank   20 Majikite = %d", mjk_baht/20);
        mjk_baht = mjk_baht % 20;
    }
	else{
		printf("\n Bank   20 Majikite = 0 ");
	}
      
    if(mjk_baht >= 10){
        printf("\n Coin   10 Majikite = %d", mjk_baht/10);
        mjk_baht = mjk_baht % 10;
    }
	else{
		printf("\n Coin   10 Majikite = 0 ");
	}
      
    if(mjk_baht >= 5){
        printf("\n Coin    5 Majikite = %d", mjk_baht/5);
        mjk_baht = mjk_baht % 5;
    }
	else{
		printf("\n Coin    5 Majikite = 0 ");
	}
      
    if(mjk_baht >= 2){
        printf("\n Coin    2 Majikite = %d", mjk_baht/2);
        mjk_baht = mjk_baht % 2;
    }
	else{
		printf("\n Coin    2 Majikite = 0 ");
	}
      
    if(mjk_baht >= 1){
        printf("\n Coin    1 Majikite = %d", mjk_baht);
    }
	else{
		printf("\n Coin    1 Majikite = 0 ");
	}
     
    if(mjk_satang >= 0.50)
    {
        printf("\n Coin 0.50 Majikite = %d", (int)(mjk_satang / 0.50));
        mjk_satang = mjk_satang - 0.50;
    }
	else{
		printf("\n Coin 0.50 Majikite = 0 ");
	}
     
    if(mjk_satang >= 0.25)
    {
        printf("\n Coin 0.25 Majikite = %d", (int)(mjk_satang / 0.25));
        mjk_satang = mjk_satang - 0.25;
    }
	else{
		printf("\n Coin 0.25 Majikite = 0 ");
	}
     
      
    return 0;
}
