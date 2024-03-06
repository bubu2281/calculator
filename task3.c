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
    for ( int i = 0; i < N-1; i++ ) {
        switch ( op[i] ) {
            case '*' :
                nr[i] *= nr[i+1];
                for (int j = i+1; j < N; j++) {
                    nr[j] = nr[j+1];
                    op[j-1] = op[j];
                }
                N--;
                i--;
                break;
            case '/' :
                nr[i] /= nr[i+1];
                for (int j = i+1; j < N; j++) {
                    nr[j] = nr[j+1];
                    op[j-1] = op[j];
                }
                N--;
                i--;
                break;
            default :
                break;
        }
                       /* printf("Nr: ");  for (int i = 0; i < N; i++) {  printf("%f ", nr[i]);  }
                              printf("\n");  printf("Op: %s\n\n", op); */
    }
    for ( int i = 0; i < N-1; i++ ) {
        switch ( op[i] ) {
            case '#' :
                nr[i] = (nr[i] + nr[i+1]) * (nr[i] + nr[i+1]);
                for (int j = i+1; j < N; j++) {
                    nr[j] = nr[j+1];
                    op[j-1] = op[j];
                }
                N--;
                i--;
                break;
            default :
                break;
        }
                              /*   printf("Nr: ");  for (int i = 0; i < N; i++) {  printf("%f ", nr[i]);  }
                                 printf("\n");  printf("Op: %s\n\n", op); */
    }
      //  printf("test 1 result = %f\n", result);
    result = nr[0];
    for ( int i = 0; i < N-1; i++ ) {
        switch ( op[i] ) {
            case '+' :
                result += nr[i+1];
                break;
            case '-' :
                result -= nr[i+1];
                break;
            default:
                printf("Ceva nu-i bine 2\n");
                break;
        }
        //  printf("test 2 result = %f\n", result);
    }
    printf("%f\n", result);
    return 0;
}
