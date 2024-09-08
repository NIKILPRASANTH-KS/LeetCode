int countDigits(int num) {
    int count=0,org=num;

    while(num>0){
        int digit = num % 10;
        if(digit != 0 && org % digit==0) count++;
        num /= 10;
    }
    return count;
}