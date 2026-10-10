bool isValid(char* s) {
    int len = strlen(s);

    if(len % 2 ==0) {
        char stack[len];
        int up = -1;

        for(int i = 0; i < len; i++) {
            char opener = s[i];

            if(opener == '(' || opener == '[' || opener == '{') {
                stack[++up] = opener;
            }

            else {
                if(up == -1) {return false;}

                char closer = stack[up--];

                if(closer == '(' && opener != ')' ||
                closer == '[' && opener != ']' ||
                closer == '{' && opener != '}') {return false;}
            }
        }

        return up == -1;
    }

    else {
        return false;
    }
}