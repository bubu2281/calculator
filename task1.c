#include <stdio.h>

int main() {
    int N = 0;    // N = nr. de numere citite
    scanf("%d", &N);
    float nr[N-1];    // a = vectorul in care se pastreaza numerle
    nr[0] = 0;
    for ( int i = 0; i < N; i++ ) {
        scanf("%f", &nr[i]);
    }
    char op[N-2];     // op = vectorul in care se pastreaza operatiile
    if ( N > 1 ) {
        scanf("%s", op);
    }
    float result = nr[0];      // result = rezultatul operatiilor
    if ( !(N > 1) ) {
        printf("%f\n", result = nr[0]);
        return 0;
    }
      //  printf("test 1 result = %f\n", result);
    for ( int i = 0; i < N-1; i++ ) {
        switch ( op[i] ) {
            case '+' :
                result += nr[i+1];
                break;
            case '-' :
                result -= nr[i+1];
                break;
            case '*' :
                result *= nr[i+1];
                break;
            case '/' :
                result /= nr[i+1];
                break;
            default :
                printf("Ceva nu-i bine 2");
                break;
        }
        //  printf("test 2 result = %f\n", result);
    }
    printf("%f\n", result);
    return 0;
}
