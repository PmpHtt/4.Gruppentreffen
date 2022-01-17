 
int qs(int n){
    int helpvar = n;
    int quers = 0;
    int stelle = 10;
    while (helpvar > 0){
        quers += (helpvar%stelle);
        helpvar -= (helpvar%stelle);
        helpvar /= 10;

    }
    return quers;

}
//hui hui
//weitere Huis
