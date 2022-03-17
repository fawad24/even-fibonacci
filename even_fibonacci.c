#include<stdio.h>
#include<stdlib.h>


int main (){

int back_i = 1;

int i =2;

int temp;

int sum = 2;



while( i < 4000000){




    back_i = back_i + i;

    temp = back_i;
    back_i = i;
    i = temp;

    printf("s>>%d\n",i);

        if(i%2==0){

                sum = sum + i;

        }
}

    printf(" s>> %d",sum);



    return 0;

}