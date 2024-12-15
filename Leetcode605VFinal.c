#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers();

int main(){
    int flowerbed[] = {0,0,1};
    int flowerbedSize = sizeof(flowerbed)/sizeof(flowerbed[0]);
    int n = 1;
    if(canPlaceFlowers(flowerbed, flowerbedSize, n)){
        printf("É possível plantar %d flores", n);
    }  else {
        printf("Não é possível plantar %d flores", n);
    };


};



bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
   
    int numpotes = 0, i = 0;

    for ( i = 0; i < flowerbedSize; i++ ) {
       if ( flowerbed[i] == 0 ){
        if ( i == 0 ) {
        numpotes += 2;
        }  else {
        if ( flowerbed[i-1] == 0 ) {
           numpotes++;
        }
        }
        if ( i == flowerbedSize - 1 ) {
            numpotes+=2;
        }  else {
        if ( flowerbed[i+1] == 0 ) {
            numpotes++;
        }
        }

        if( numpotes >= 3 ) {
            flowerbed[i] = 1;
            numpotes = 0;
            n--;
        }    
      
     }  else {
        numpotes = 0;
     }
    }
    if( n <= 0 ) {
        return true;
    }  else {
        return false;
    }
}