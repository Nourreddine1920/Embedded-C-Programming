#include<stdio.h>


int main(){
    unsigned char distanceA2B = 10 ; 
    unsigned char distanceB2C = 15 ; // unsigned char ---> 8 bits (size)
    unsigned char distance ;
    distance = distanceA2B + distanceB2C ; 
    printf("the distance is : %x" , distance); // x ---> hex format 

}