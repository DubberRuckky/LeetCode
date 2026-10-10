int romanNumeralstoValues(char c) {
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int value = 0;

    for(int i = 0; i < strlen(s); i++) {
        int cur = romanNumeralstoValues(s[i]);
        int nex = romanNumeralstoValues(s[i + 1]);

        if (cur >= nex) {
            value += cur;
        }

        else {
            value -= cur;
        }
    }

    return value;
}