/*Samir Cerrato
COMP211
Professor Manfredi
September 18, 2022
*/

#include <stdio.h>

int main(void){
  //Enter non-negative integer and get its binary representaton.

  //Non-negative integer that the user enters when prompted.
  int decimal;
  int bitplace = 16;

    //Print a prompt.
  printf("Please enter a non-negative decimal integer to convert: ");

    //Read an integer from the keyboard and store the value in decimal.
  scanf(" %d", &decimal);

  if(decimal >= 65536){
    printf("1111111111111111\nError");
    return(0);
  }

  int total;
  do{
    int start=1;
    for(total = 0; total < bitplace-1; total++){
      start = start * 2;
    }
    bitplace = bitplace - 1;
    if(decimal >= start){
      printf("1");
      decimal = decimal - start;
    }else{
      printf("0");
    }
  }while(bitplace>0);
}
