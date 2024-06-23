bool lemonadeChange(int* bills, int billsSize) {
    int i, cinco=0, dez=0, vinte=0;
    bool troco=0;
    for(i=0;i<billsSize;i++){
        if(bills[i]==5){
            cinco++;
            troco+=5;
        }
        if(bills[i]==10){
            if(cinco<1){
                return false;
            } 
            troco-=5;
            troco+=10;
            dez++;
        }
        if(bills[i]==20){
            if(cinco<3){
                return false;
            }
            if(dez<1 && cinco<1){
                return false;
                }
            troco-=15;
            troco+=20;
            vinte++;
            }
        }
        return troco;
}
