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


/*4. Να ορίσετε μια δομή product με πεδία: όνομα προϊόντος, κωδικός και τιμή.
α) Δημιουργήστε μια συνάρτηση που θα δέχεται σαν παραμέτρους έναν πίνακα τέτοιων
δομών, τον αριθμό των προϊόντων που είναι αποθηκευμένα στον πίνακα και τον κωδικό ενός
προϊόντος. Η συνάρτηση θα ελέγχει αν υπάρχει κάποια δομή στον πίνακα που θα έχει τον ίδιο
κωδικό και, αν υπάρχει, θα επιστρέφει ένα δείκτη σε αυτή τη δομή. Σε διαφορετική
περίπτωση θα επιστρέφει την τιμή NULL.
β) Να γραφεί ένα πρόγραμμα που θα χρησιμοποιεί αυτή τη δομή για να εισάγει ο χρήστης τα
στοιχεία 100 προϊόντων. Η είσοδος μπορεί να τερματιστεί αν δοθεί αρνητική τιμή σε ένα
προϊόν. Στον πίνακα των δομών θα αποθηκεύονται τα προϊόντα με τιμή από 20 ευρώ και
πάνω. Στη συνέχεια θα διαβάζει τον κωδικό ενός προϊόντος, θα καλεί τη συνάρτηση και αν το
προϊόν είναι καταχωρημένο θα εμφανίζει όλα τα στοιχεία του (όνομα, κωδικός και τιμή). Σε
διαφορετική περίπτωση θα εμφανίζει ανάλογο μήνυμα.*/
/*#include <stdio.h>
#include <string.h>

typedef struct {
    char onoma[50];
    int kwdikos;
    float timh;
} product;

product* check(product arr[], int n, int kwdikos) {
    for(int i = 0; i < n; i++){
        if(arr[i].kwdikos == kwdikos){
            return &arr[i];
        }
    }
    return NULL;
}

int main() {
    product arr[100];
    int i, n = 0;

    for(i = 0; i < 100; i++){
        product temp;

        printf("Dwse to onoma tou proiontos: ");
        fgets(temp.onoma, 50, stdin);
        temp.onoma[strcspn(temp.onoma, "\n")] = 0;

        printf("Dwse ton kwdiko tou proiontos: ");
        scanf("%d", &temp.kwdikos);

        printf("Dwse tin timh tou proiontos: ");
        scanf("%f", &temp.timh);
        getchar();

        if(temp.timh < 0){
            break;
        }

        if(temp.timh >= 20){
            arr[n] = temp;
            n++;
        }
    }

    int code;
    printf("\nDwse kwdiko gia anazitisi: ");
    scanf("%d", &code);

    product *res = check(arr, n, code);

    if(res != NULL){
        printf("\nVrethike to proion:\n");
        printf("Onoma: %s\n", res->onoma);
        printf("Kwdikos: %d\n", res->kwdikos);
        printf("Timh: %.2f\n", res->timh);
    } else {
        printf("\nDen vrethike to proion.\n");
    }

    return 0;
}*/


/*Ορίστε μια δομή book με πεδία: τίτλος, κωδικός, τιμή.
α) Δημιουργήστε μια συνάρτηση που να δέχεται σαν παραμέτρους δύο δείκτες σε δομές
τύπου book και να αντιμεταθέτει τα περιεχόμενά τους. 
β) Να γραφεί ένα πρόγραμμα που θα διαβάζει και θα αποθηκεύει τα στοιχεία δύο βιβλίων σε
δύο δομές τύπου book. Στη συνέχεια θα καλεί τη συνάρτηση και θα εμφανίζει τα στοιχεία των
βιβλίων (με αντίθετη σειρά).*/
/*#include <stdio.h>
#include <string.h>

typedef struct {
    char titlos[50];
    int kwdikos;
    float timh;
} book;

void swap(book *p1, book *p2){
    book temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    book x1, x2;

    printf("Dwse to onoma tou prwtou vivliou: ");
    fgets(x1.titlos, 50, stdin);
    x1.titlos[strcspn(x1.titlos, "\n")] = 0;

    printf("Dwse ton kwdiko tou prwtou vivliou: ");
    scanf("%d", &x1.kwdikos);

    printf("Dwse thn timh tou prwtou vivliou: ");
    scanf("%f", &x1.timh);

    getchar();

    printf("Dwse to onoma tou deuterou vivliou: ");
    fgets(x2.titlos, 50, stdin);
    x2.titlos[strcspn(x2.titlos, "\n")] = 0;

    printf("Dwse ton kwdiko tou deuterou vivliou: ");
    scanf("%d", &x2.kwdikos);

    printf("Dwse thn timh tou deuterou vivliou: ");
    scanf("%f", &x2.timh);

    swap(&x1, &x2);

    printf("\nMeta to swap:\n");

    printf("Vivlio 1:\n");
    printf("Titlos: %s\n", x1.titlos);
    printf("Kwdikos: %d\n", x1.kwdikos);
    printf("Timh: %.2f\n", x1.timh);

    printf("\nVivlio 2:\n");
    printf("Titlos: %s\n", x2.titlos);
    printf("Kwdikos: %d\n", x2.kwdikos);
    printf("Timh: %.2f\n", x2.timh);
}*/