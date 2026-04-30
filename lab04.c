/*1. Δημιουργήστε μια συνάρτηση που να δέχεται σαν παραμέτρους δύο δείκτες σε
πραγματικούς και να αντιμεταθέτει τα περιεχόμενά τους. Να γραφεί ένα πρόγραμμα το
οποίο να διαβάζει δύο πραγματικούς και να τους αντιμεταθέτει με χρήση της συνάρτησης.
*/
/*#include <stdio.h>
void swap(float *p1, float *p2){
    float temp;
    temp=*p2;
    *p2=*p1;
    *p1=temp;
}
int main(){
    float x,y;

    printf("Dwse th timh tou x: ");
    scanf("%f", &x);
    printf("Dwse th timh tou y: ");
    scanf("%f", &y);

    printf("====================\n");
    printf("Prin tin allagi: \n");
    printf("x=%.2f kai y=%.2f\n", x,y);

    swap(&x, &y);

    printf("====================\n");
    printf("Meta tin allagi: \n");
    printf("x=%.2f kai y=%.2f\n", x,y);
    printf("====================\n");
}*/

/*2. Δημιουργήστε μια συνάρτηση που θα δέχεται ως παράμετρο ένα μονοδιάστατο πίνακα έξι
πραγματικών αριθμών και θα υπολογίζει το άθροισμα των στοιχείων του. Να γραφεί ένα
πρόγραμμα που θα δημιουργεί έναν πίνακα πραγματικών αριθμών, θα τον αρχικοποιεί με
τιμές και θα εμφανίζει το άθροισμα των στοιχείων του με χρήση της συνάρτησης.*/
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float sum(float arr[], int size){
    float total = 0;
    for(int i = 0; i < size; i++){
        total += arr[i];
    }
    return total;
}
int main(){
    float arr[6];
    srand(time(NULL));
    printf("O pinakas einai:\n");
    for(int i=0; i<6; i++){
        arr[i]=(float)rand() / RAND_MAX*100;
        printf("[%d] = %.2f\n", i+1, arr[i]);
    }

    float tempsum=sum(arr,6);

    printf("To athroisma autou tou pinaka einai: %.2f", tempsum);
}*/