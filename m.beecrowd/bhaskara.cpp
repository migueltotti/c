#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
 
    double A, B, C, delta, R1, R2;
    scanf("%lf%lf%lf", &A, &B, &C);
    delta = (B*B) - (4 * A * C);
    if (delta > 0 && A != 0)
    {
        R1 = (- B + sqrt(delta))/ (2 * A);
        R2 = (- B - sqrt(delta))/ (2 * A);
        printf("R1 = %.5lf \n", R1);
        printf("R2 = %.5lf \n", R2);
    }
    else
    {
        printf("Impossivel calcular \n");
    }
 
    return 0;
}
