bool lemonadeChange(int* bills, int billsSize) {
    int i, cinco = 0, dez = 0, vinte = 0;
        for ( i = 0 ;i < billsSize; i++ ){
            if(    bills[i]    ==    5    ){
                cinco++;
            }
            if( bills[i] == 10 ){
                if( cinco >= 1 ){
                    cinco--;
                    dez++;
                } else {
                    return false;
                }
            }
            if( bills[i] == 20 ){
                if( cinco >= 1 && dez >= 1 ){
                    cinco--;
                    dez--;
                    vinte++;
                } else if ( cinco >= 3 ){
                    cinco-=3;
                    vinte++;
                } else {
                    return false;
                }
            }
        }
    return true;
}
