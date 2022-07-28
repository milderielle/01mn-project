#include<stdio.h>
 
int main()
{
    float mjk;
    int mjk_baht;
    float mjk_satang;    
      
    printf("Enter Final Majikite : ");
    scanf("%f", &mjk);
     
    mjk_baht = (int)mjk;
    mjk_satang = mjk - mjk_baht;
      
    if(mjk_baht >= 1000){
        printf("\n 1000 Baht = %d ", mjk_baht/1000);
        mjk_baht = mjk_baht % 1000;
    }
      
    if(mjk_baht >= 500){
        printf("\n  500 Baht = %d", mjk_baht/500);
        mjk_baht = mjk_baht % 500;
    }
      
    if(mjk_baht >= 100){
        printf("\n  100 Baht = %d", mjk_baht/100);
        mjk_baht = mjk_baht % 100;
    }
      
    if(mjk_baht >= 50){
        printf("\n   50 Baht = %d", mjk_baht/50);
        mjk_baht = mjk_baht % 50;
    }
      
    if(mjk_baht >= 20){
        printf("\n   20 Baht = %d", mjk_baht/20);
        mjk_baht = mjk_baht % 20;
    }
      
    if(mjk_baht >= 10){
        printf("\n   10 Baht = %d", mjk_baht/10);
        mjk_baht = mjk_baht % 10;
    }
      
    if(mjk_baht >= 5){
        printf("\n    5 Baht = %d", mjk_baht/5);
        mjk_baht = mjk_baht % 5;
    }
      
    if(mjk_baht >= 2){
        printf("\n    2 Baht = %d", mjk_baht/2);
        mjk_baht = mjk_baht % 2;
    }
      
    if(mjk_baht >= 1){
        printf("\n    1 Baht = %d", mjk_baht);
    }
     
    if(mjk_satang >= 0.50)
    {
        printf("\n   50 Satang = %d", (int)(mjk_satang / 0.50));
        mjk_satang = mjk_satang - 0.50;
    }
     
    if(mjk_satang >= 0.25)
    {
        printf("\n   25 Satang = %d", (int)(mjk_satang / 0.25));
        mjk_satang = mjk_satang - 0.25;
    }
     
    if(mjk_satang >= 0.01)
    {
        printf("\n    1 Satang = %.0f (can't change) ", (mjk_satang * 100));
    }
      
    return 0;
}
