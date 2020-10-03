int tadd_ok(int x,int y){
    int sum = x+y;
    int k = x<0 && y<0 && sum >0;
    int j = x> 0 && y > 0 && sum < 0;
    return !k && !j;
}