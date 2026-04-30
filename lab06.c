/*1. Δημιουργήστε μια δομή με όνομα student και με πεδία: ονοματεπώνυμο, ηλικία και
βαθμοί 3 μαθημάτων σε έναν πίνακα. Φτιάξτε ένα πρόγραμμα που θα αρχικοποιεί τα
πεδία και θα εμφανίζει το ονοματεπώνυμο, την ηλικία και το μέσο όρο των βαθμών.*/
/*#include <stdio.h>
#include <string.h>

typedef struct{
    char onomatepwnimo[50];
    int ilikia;
    float grades[3];
} student;

int main(){
    float sum=0;

    student x;

    printf("Dwse to onomatepwnimo: ");
    fgets(x.onomatepwnimo, sizeof(x.onomatepwnimo), stdin);

    printf("Dwse thn ilikia: ");
    scanf("%d", &x.ilikia);

    for(int i=0; i<3; i++){
        printf("Dwse ton vathmo apo to mathima #%d: ", i+1);
        scanf("%f", &x.grades[i]);
        sum+= x.grades[i];
    }

    printf("\nTA STOIXEIA POU EISHGAGES EINAI: \n\n");

    printf("Onomatepwnimo: %s", x.onomatepwnimo);
    printf("Hlikia: %d\n", x.ilikia);
    printf("Mesos oros: %.1f", sum/3.0);
}*/


/*2. Να δημιουργηθεί μια δομή υπαλλήλου µε τα εξής στοιχεία: επώνυμο, όνομα, ηλικία και
μισθός και να καταχωρηθούν τιμές για 5 υπαλλήλους. Να βρεθεί και να εμφανιστεί το
επώνυμο και το όνομα του υπαλλήλου που έχει τη μεγαλύτερη ηλικία καθώς και το
επώνυμο και το όνομα του υπαλλήλου που έχει το μεγαλύτερο μισθό.*/
/*#include <stdio.h>
#include <string.h>

typedef struct {
    char onoma[20];
    char epwnimo[20];
    int ilikia;
    float misthos;
} ipalilos;

int main(){
    ipalilos arr[5];

    int max_ilikia=0;
    char max_ilikia_onoma[20];
    char max_ilikia_epwnimo[20];

    float max_misthos=0;
    char max_misthos_onoma[20];
    char max_misthos_epwnimo[20];

    for(int i=0; i<5; i++){
        printf("Dwse to onoma tou ipalilou #%d: ", i+1);
        scanf(" %s", arr[i].onoma);

        printf("Dwse to epwnimo tou ipalilou #%d: ", i+1);
        scanf(" %s", arr[i].epwnimo);

        printf("Dwse thn ilikia tou ipalilou #%d: ", i+1);
        scanf("%d", &arr[i].ilikia);

        if(arr[i].ilikia>max_ilikia){
            max_ilikia=arr[i].ilikia;
            strcpy(max_ilikia_onoma, arr[i].onoma);
            strcpy(max_ilikia_epwnimo, arr[i].epwnimo);
        }

        printf("Dwse to mistho tou ipalilou #%d: ", i+1);
        scanf("%f", &arr[i].misthos);

        if(arr[i].misthos>max_misthos){
            max_misthos=arr[i].misthos;
            strcpy(max_misthos_onoma, arr[i].onoma);
            strcpy(max_misthos_epwnimo, arr[i].epwnimo);
        }
    }

    printf("\nO ipalilos: %s %s, me hlikia %d, exei thn megalyterh ilikia apo tus upolipous ipalilous.\n", max_ilikia_onoma, max_ilikia_epwnimo, max_ilikia);

    printf("\nO ipalilos: %s %s, me mistho %.2f, exei ton pio ipsilo mistho apo tus upolipous ipalilous.\n", max_misthos_onoma, max_misthos_epwnimo, max_misthos);
}*/


/*3. Δημιουργήστε μια δομή με όνομα computer και με πεδία: κατασκευαστής, μοντέλο,
επεξεργαστής και τιμή. Φτιάξτε ένα πρόγραμμα που να χρησιμοποιεί τη δομή που
δημιουργήσατε ώστε να δέχεται από το χρήστη τα στοιχεία ενός υπολογιστή και στη
συνέχεια να τα εμφανίζει.
*/
/*#include <stdio.h>
#include <stdio.h>

typedef struct {
    char kataskevastis[50];
    char model[30];
    char cpu[30];
    float price;
} computer;

int main(){
    computer x;

    printf("Kataskevastis: ");
    fgets(x.kataskevastis, sizeof(x.kataskevastis), stdin);

    printf("Montelo: ");
    fgets(x.model, sizeof(x.model), stdin);

    printf("Epeksergasths: ");
    fgets(x.cpu, sizeof(x.cpu), stdin);

    printf("Timh: ");
    scanf("%f", &x.price);

    printf("\nKataskevastis: %s\n", x.kataskevastis);
    printf("Montelo: %s\n", x.model);
    printf("Epeksergastis: %s\n", x.cpu);
    printf("Timh: %.2f", x.price);
}*/