/*1. Δημιουργήστε μια συνάρτηση που να δέχεται σαν παράμετρο την ακτίνα ενός κύκλου και
να επιστρέφει το εμβαδό του. Να γραφεί ένα πρόγραμμα το οποίο να διαβάζει την ακτίνα
και να εμφανίζει το εμβαδό του κύκλου με χρήση της συνάρτησης. Δίνεται πως το εμβαδό
του κύκλου ισούται με π*(ακτίνα)2.*/
/*#include <stdio.h>
#include <math.h>
void emvadon(double x){
    printf("To emvadon tou kiklou einai: %.2f\n", 3.14*pow(x,2));
}

int main(){
    double x;
    printf("Dwse thn aktina enos kiklou: ");
    scanf("%lf", &x);
    emvadon(x);

}*/

/*2. Δημιουργήστε μια συνάρτηση που να δέχεται σαν παραμέτρους τους βαθμούς τριών
φοιτητών και να επιστρέφει το μικρότερό τους. Να γραφεί ένα πρόγραμμα που θα
διαβάζει τρεις βαθμούς και θα εμφανίζει το μικρότερο με χρήση της συνάρτησης.*/
/*#include <stdio.h>
void min(float a, float b, float c){
    float min=a;
    if(b<a){
        min=b;
    }else if(c<a){
        min=c;
    }

    printf("O mikroteros vathmos einai: %.2f", min);
}

int main(){
    float a,b,c;
    printf("Dwse ton 1o vathmo: ");
    scanf("%f", &a);
    printf("Dwse ton 2o vathmo: ");
    scanf("%f", &b);
    printf("Dwse ton 3o vathmo: ");
    scanf("%f", &c);
    min(a,b,c);
}*/

/*3. Δημιουργήστε μια συνάρτηση που να δέχεται σαν παραμέτρους έναν ακέραιο και ένα
χαρακτήρα και να εμφανίζει το χαρακτήρα τόσες φορές όσες και η τιμή του ακεραίου, σε
στήλη. Να γραφεί ένα πρόγραμμα που θα διαβάζει έναν ακέραιο και ένα χαρακτήρα και
θα εμφανίζει τον χαρακτήρα με χρήση της συνάρτησης.
*/
/*#include <stdio.h>
void idk(int a, char x){
    for(int i=0; i<a; i++){
        printf("%c\n", x);
    }
}

int main(){
    int a;
    char x;
    printf("Dwse mia poses fores thes na emfanistei o xarakthras: ");
    scanf("%d", &a);
    printf("Dwse ton xarakthra: ");
    scanf(" %c", &x);
    idk(a,x);
}*/