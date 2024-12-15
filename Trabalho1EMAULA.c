bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int numz=0, nump=0, i=0;

    for(i=0; i<flowerbedSize; i++){
        if(flowerbed[i]==0){
            numz++;
            if(numz==2){
                numz=0;
                nump++;
            }
    }
    else{
        numz=-1;
    }
    }

    if(nump>=n){
        return true;
    }
    else{
        return false;
    }
}

//Resultados do Leetcode: 118/130 acertos;
