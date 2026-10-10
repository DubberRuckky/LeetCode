bool isPalindrome(long long int x) {
    if(x >= 0){
        long long int rev_x = 0;

        for(long long int i = x; i > 0; i /= 10) {
            rev_x = (rev_x * 10) + (i % 10);
            }

        if(rev_x == x) {
            return true;
        }

        else {
            return false;
        }
    }

    else {
        return false;
    }
}