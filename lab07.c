/*1. Δημιουργήστε μια δομή με όνομα cars με τα εξής πεδία: κατασκευαστής, μοντέλο, κυβισμός
σε λίτρα και έτος κατασκευής. Στη συνέχεια αρχικοποιήστε τα πεδία ενός πίνακα δομής που
θα δημιουργήσετε με τις ακόλουθες τιμές:
{“HONDA”, “Civic”, 2.0, 2017}
{“NISSAN”, “Qashqai”, 1.8, 2010}
{“OPEL”, “Vectra”, 1.6, 2008}
{“FIAT”, “Punto”, 1.2, 1998}
Φτιάξτε ένα πρόγραμμα που θα εμφανίζει τα στοιχεία των αυτοκινήτων που
κατασκευάστηκαν πριν το 2009.*/

/*#include <stdio.h>

typedef struct {
    char kataskevastis[50];
    char montelo[50];
    float kivismos;
    int etos;
} cars;

int main(){
    cars arr[4] = {
        {"HONDA", "Civic", 2.0, 2017},
        {"NISSAN", "Qashqai", 1.8, 2010},
        {"OPEL", "Vectra", 1.6, 2008},
        {"FIAT", "Punto", 1.2, 1998}
    };

    for(int i=0; i<4; i++){
        if(arr[i].etos < 2009){
            printf("\nKataskevastis: %s\n", arr[i].kataskevastis);
            printf("Montelo: %s\n", arr[i].montelo);
            printf("Kivismos: %.1f\n", arr[i].kivismos);
            printf("Etos kataskevis: %d\n", arr[i].etos);
        }
    }
}*/



/*2. Δημιουργήστε μια δομή με όνομα student και με πεδία: ονοματεπώνυμο, αριθμό μητρώου
και ενός βαθμού. Φτιάξτε ένα πρόγραμμα που θα δέχεται από το πληκτρολόγιο τα στοιχεία 4
φοιτητών και στη συνέχεια θα τα εμφανίζει.*/

/*#include <stdio.h>

typedef struct {
    char onomatepwnimo[50];
    double am;
    float vathmos;
} student;

int main(){
    student arr[4];

    for(int i=0; i<4; i++){
        printf("Dwse to onomatepwmino tou mathiti #%d: ", i+1);
        fgets(arr[i].onomatepwnimo, 50, stdin);

        printf("Dwse ton arithmo mitroou tou mathiti #%d: ", i+1);
        scanf("%lf", &arr[i].am);

        printf("Dwse ton vathmo tou mathiti #%d: ", i+1);
        scanf("%f", &arr[i].vathmos);

        getchar();
    }

    for(int i=0; i<4; i++){
        printf("\n\nMATHITIS -%d- :\n\n", i+1);
        printf("Onomatepwnimo: %s\n", arr[i].onomatepwnimo);
        printf("Arithmos mitroou: %.0lf\n", arr[i].am);
        printf("Vathmos: %.1f\n", arr[i].vathmos);
    }
}*/



/*3. Δημιουργήστε μια δομή για υπαλλήλους με όνομα employees και τα εξής πεδία:
ονοματεπώνυμο, κωδικός, μισθός. Φτιάξτε ένα πρόγραμμα που θα δέχεται από το
πληκτρολόγιο τα στοιχεία 3 υπαλλήλων και θα εμφανίζει τον υπάλληλο με το μικρότερο
μισθό.*/

/*#include <stdio.h>
#include <string.h>

typedef struct {
    char onomatepwnimo[50];
    int kwdikos;
    float misthos;
} ipalilos;

int main(){
    ipalilos arr[3];

    char min_ipalilos[50];
    float min_misthos;
    
    for(int i=0; i<3; i++){
        printf("Dwse to onomatepwnimo tou ipalilou #%d: ", i+1);
        fgets(arr[i].onomatepwnimo, 50, stdin);
        arr[i].onomatepwnimo[strcspn(arr[i].onomatepwnimo, "\n")] = '\0';

        printf("Dwse ton kwdiko tou ipalilou #%d: ", i+1);
        scanf("%d", &arr[i].kwdikos);

        printf("Dwse ton mistho tou ipalilou #%d: ", i+1);
        scanf("%f", &arr[i].misthos);

        getchar();
    }

    min_misthos = arr[0].misthos;
    strcpy(min_ipalilos, arr[0].onomatepwnimo);

    for(int i=1; i<3; i++){
        if(arr[i].misthos < min_misthos){
            min_misthos = arr[i].misthos;
            strcpy(min_ipalilos, arr[i].onomatepwnimo);
        }
    }

    printf("Ton xamhlwtero mistho ton exei o/h ipalilos: %s", min_ipalilos);
}*/



/*4. Δημιουργήστε μια δομή για υπαλλήλους με όνομα employees και τα εξής πεδία:
ονοματεπώνυμο, κωδικός, μισθός. Φτιάξτε ένα πρόγραμμα που θα δέχεται από το
πληκτρολόγιο τα στοιχεία 3 υπαλλήλων. Στη συνέχεια θα δέχεται ένα μισθό και θα εμφανίζει
τους υπαλλήλους με μισθό μεγαλύτερο από αυτόν.
*/

/*#include <stdio.h>
#include <string.h>

typedef struct {
    char onomatepwnimo[50];
    int kwdikos;
    float misthos;
} Employee;

int main(){
    Employee arr[3];

    for(int i=0; i<3; i++){
        printf("Dwse to onomatepwnimo tou %dou ergazomenou: ", i+1);
        fgets(arr[i].onomatepwnimo, 50 , stdin);
        arr[i].onomatepwnimo[strcspn(arr[i].onomatepwnimo, "\n")] = '\0';

        printf("Dwse ton kwdiko tou %dou ergazomenou: ", i+1);
        scanf("%d", &arr[i].kwdikos);

        printf("Dwse ton mistho tou %dou ergazomenou: ", i+1);
        scanf("%f", &arr[i].misthos);

        getchar();
    }

    int count = 0;
    float input;

    printf("Dwse enan mistho: ");
    scanf("%f", &input);

    printf("Parakatw emfanizonte osoi ipaliloi exoun megalytero mistho apo %.2f:\n", input);

    for(int i=0; i<3; i++){
        if(input < arr[i].misthos){
            printf("O ergazomenos: %s\n", arr[i].onomatepwnimo);
            count++;
        }
    }

    if(count == 0) printf("Den iparxei ergazomenos me mistho megalytero apo %.2f\n", input);
}*/