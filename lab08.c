/*1. Να ορίσετε μια δομή με όνομα time και με πεδία: ώρες, λεπτά, δευτερόλεπτα.
α) Δημιουργήστε μια συνάρτηση που να δέχεται σαν παράμετρο μια μεταβλητή που δηλώνει
τα δευτερόλεπτα και να τα μετατρέπει σε ώρες, λεπτά και δευτερόλεπτα. Αυτές οι τιμές να
αποθηκεύονται σε μια δομή τύπου time.
β) Να γραφεί πρόγραμμα που θα διαβάζει έναν αριθμό που θα αντιστοιχεί σε δευτερόλεπτα,
θα καλεί τη συνάρτηση και θα εμφανίζει τις τιμές των πεδίων της δομής.*/
/*#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} time;

void convert(int total_seconds, time *t) {
    t->hours = total_seconds / 3600;
    t->minutes = (total_seconds % 3600) / 60;
    t->seconds = total_seconds % 60;
}

int main() {
    int input;

    printf("Dwse ta deuterolepta: ");
    scanf("%d", &input); 

    time t;
    convert(input, &t);

    printf("Ores: %d\n", t.hours);
    printf("Lepta: %d\n", t.minutes);
    printf("Deuterolepta: %d\n", t.seconds);
}*/


/*2. Τροποποιήστε το προηγούμενο παράδειγμα ως εξής:
α) Η δομή να παραμείνει ίδια (time)
β) Η συνάρτηση θα δέχεται ως παράμετρο ένα δείκτη σε μια ακέραια μεταβλητή και θα
μετατρέπει τον ακέραιο σε ώρες, λεπτά και δευτερόλεπτα. Αυτές οι τιμές θα αποθηκεύονται
σε μια δομή τύπου time η οποία θα επιστρέφεται από τη συνάρτηση
γ) Το πρόγραμμα θα διαβάζει τον ακέραιο (τα δευτερόλεπτα), θα καλεί τη συνάρτηση και θα
εμφανίζει τις τιμές των πεδίων της επιστρεφόμενης δομής*/
/*#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} time;

time conversion(int *x) {
    time t;

    t.hours = *x / 3600;
    t.minutes = (*x % 3600) / 60;
    t.seconds = (*x % 60);

    return t;
}

int main() {
    time t;
    int input;

    printf("Dwse ta deuterolepta: ");
    scanf("%d", &input);

    t = conversion(&input);

    printf("Ores: %d\n", t.hours);
    printf("Lepta: %d\n", t.minutes);
    printf("Deuterolepta: %d\n", t.seconds);

    return 0;
}*/

/*3. Να ορίσετε μια δομή με όνομα student και με πεδία: ονοματεπώνυμο, αριθμός μητρώου και
βαθμός.
Να γραφεί ένα πρόγραμμα που θα χρησιμοποιεί αυτή τη δομή για να εισάγει ο χρήστης τα
στοιχεία 100 φοιτητών, τα οποία θα αποθηκεύονται σε έναν πίνακα τέτοιων δομών. Η
εισαγωγή των στοιχείων θα μπορεί να τερματίζεται αν ο χρήστης εισάγει την τιμή -1 για
βαθμό. Στη συνέχεια το πρόγραμμα θα καλεί μια συνάρτηση η οποία θα ταξινομεί τον πίνακα
των δομών σε αύξουσα σειρά, σύμφωνα με τους βαθμούς των φοιτητών. Στη συνέχεια θα
εμφανίζονται τα στοιχεία του ταξινομημένου πίνακα για επιβεβαίωση. Τέλος θα καλείται μια
δεύτερη συνάρτηση η οποία θα εμφανίζει τα στοιχεία των φοιτητών που έχουν βαθμό
μεγαλύτερο από το μέσο όρο του συνόλου των βαθμών.*/
/*#include <stdio.h>
#include <string.h>

typedef struct {
    char onomatepwnimo[50];
    double am;
    float grade;
} student;

void bta(student arr[], int n, float avg){
    for(int i=0; i<n; i++){
        if(arr[i].grade>avg){
            printf("Onomatepwnimo: %s\n", arr[i].onomatepwnimo);
            printf("Arithmos mhtroou: %.0lf\n", arr[i].am);
            printf("Vathmos: %.2f\n", arr[i].grade);
        }
    }
}

void sort(student arr[], int n){
    int i,j;
    student temp;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j].grade > arr[j+1].grade){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    student arr[100];

    int i;
    int n;
    float sum=0;

    for(i=0; i < 100; i++){
        printf("Dwse ta stoixeia pou mathiti #%d:\n\n", i+1);

        printf("Onomatepwnimo: ");
        fgets(arr[i].onomatepwnimo, 50, stdin);
        arr[i].onomatepwnimo[strcspn(arr[i].onomatepwnimo, "\n")] = 0;

        printf("Arithmos mhtrwou: ");
        scanf("%lf", &arr[i].am);

        printf("Vathmos: ");
        scanf("%f", &arr[i].grade);

        getchar();

        if(arr[i].grade == -1){
            break;
        }

        sum+=arr[i].grade;
    }
    n=i;
    float average = sum/n;
    sort(arr, n);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Parakatw parousiazete o pinakas taksinomimenos se auksousa seira: \n\n");

    for(i=0; i<n; i++){
        printf("Onomatepwnimo: %s\n", arr[i].onomatepwnimo);
        printf("Arithmos mhtrwou: %.0lf\n", arr[i].am);
        printf("Vathmos: %.2f\n", arr[i].grade);
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    bta(arr, n, average);
}*/
