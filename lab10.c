/*1. Δημιουργήστε ένα αρχείο με τον κειμενογράφο, με όνομα students.txt, και προσθέστε δικές
σας εγγραφές που αφορούν σε βαθμούς φοιτητών όπως:
Δημήτρης Δημητρίου 5.4 8.6
Νίκος Νικολόπουλος 4.9 3.5
Γιώργος Γεωργίου 6.8 4.9
…
Να γράψετε πρόγραμμα που θα διαβάζει κάθε γραμμή του αρχείου students.txt και θα
αποθηκεύει σε ένα δεύτερο αρχείο με όνομα success.txt τα στοιχεία των φοιτητών
(ονοματεπώνυμο και βαθμολογίες) που έχουν μέσο όρο μεγαλύτερο ή ίσο του 5. Επίσης σε ένα
τρίτο αρχείο με όνομα fail.txt θα αποθηκεύει τα στοιχεία των φοιτητών με μέσο όρο μικρότερο
του 5. Τέλος το πρόγραμμα θα εμφανίζει μήνυμα ολοκλήρωσης της δημιουργίας των αρχείων
και τον αριθμό των επιτυχόντων και αποτυχόντων φοιτητών*/
/*#include <stdio.h>

int main(){
    char onoma[50], eponimo[50];
    float vathmos1, vathmos2, mo;
    int counts = 0;
    int countf = 0;

    FILE *f, *succ, *fail;
    f = fopen("students.txt", "w");

    if(f == NULL) {
        printf("To arxeio den anoikse!\n");
        return 1;
    }

    fprintf(f, "Δημήτρης Δημητρίου 5.4 8.6\n");
    fprintf(f, "Νίκος Νικολόπουλος 4.9 3.5\n");
    fprintf(f, "Γιώργος Γεωργίου 6.8 4.9\n");
    fprintf(f, "Αρης Στάμου 2.4 9.6\n");

    fclose(f);

    f = fopen("students.txt", "r");
    
    if(f == NULL) {
        printf("To arxeio den anoikse!\n");
        return 1;
    }

    succ = fopen("success.txt", "w");
    fail = fopen("fail.txt", "w");

    if(succ == NULL || fail == NULL) {
        printf("Ta arxeia apothikeusis den anoiksan!\n");
        return 1;
    }

    for(int i=0; i<4; i++){
        fscanf(f, "%s %s %f %f", onoma, eponimo, &vathmos1, &vathmos2);
        mo = (vathmos1 + vathmos2) / 2;

        if(mo >= 5){
            fprintf(succ, "%s %s %.1f %.1f\n", onoma, eponimo, vathmos1, vathmos2);
            counts++;
        } else {
            fprintf(fail, "%s %s %.1f %.1f\n", onoma, eponimo, vathmos1, vathmos2);
            countf++;
        }
    }

    fclose(f);
    fclose(succ);
    fclose(fail);

    printf("Ta arxeia dimiourgithikan me epitixia!\n\n");
    printf("Epitixontes: %d\n", counts);
    printf("Apotixontes: %d\n", countf);
}*/



/*2. Ένας απλός τρόπος κρυπτογράφησης δεδομένων είναι η εκτέλεση της πράξης XOR μεταξύ των
δεδομένων και ενός μυστικού κλειδιού. Να γραφεί πρόγραμμα το οποίο θα διαβάζει ένα
χαρακτήρα κλειδί και το όνομα ενός αρχείου κειμένου και να κρυπτογραφεί τα δεδομένα του
κάνοντας XOR κάθε χαρακτήρα του αρχείου με το κλειδί. Οι κρυπτογραφημένοι χαρακτήρες θα
αποθηκεύονται σε ένα δεύτερο αρχείο με όνομα που θα επιλέγει ο χρήστης.
[Η πράξη XOR χρησιμοποιείται γιατί έχει, σύμφωνα με την άλγεβρα Boole, την εξής ιδιότητα: (a
^ b) ^ b = a. Αν λοιπόν όπου a ο κάθε χαρακτήρας του αρχείου κειμένου και όπου b ο χαρακτήρας
κλειδί, σημαίνει πως κάνοντας XOR στο κρυπτογραφημένο αρχείο με τον ίδιο χαρακτήρα κλειδί
θα ανακτηθεί ο αρχικός χαρακτήρας]*/
#include <stdio.h>

int main(){
    
}



/*3. Δημιουργήστε ένα αρχείο στον κειμενογράφο με όνομα test.txt και αποθηκεύστε 10
πραγματικούς αριθμούς της επιλογής σας, χωρισμένους από τουλάχιστον ένα κενό.
Γράψτε ένα πρόγραμμα που θα διαβάζει αυτές τις τιμές και θα εμφανίζει στην οθόνη όσες είναι
από το 10.5 έως και το 50.
*/
/*#include <stdio.h>

int main(){
    float input;

    FILE *f;

    f = fopen("test.txt", "w");

    if(f == NULL) {
        printf("To arxeio den anoikse!\n");
        return 1;
    }

    fprintf(f, "15.5 45.6 37.2 11.1 75.2 4.2 67.1 90.5 14.4 22.2");
    fclose(f);

    f = fopen("test.txt", "r");

    printf("Noumera apo to 10.5 mexri to 50:\n");

    while(fscanf(f, "%f", &input) == 1){
        if(input >= 10.5 && input <=50) {
            printf("%.1f\n", input);
        }
    }

    fclose(f);
}*/



/*4. Θεωρήστε ότι κάθε γραμμή του αρχείου κειμένου students.txt περιέχει τους βαθμούς φοιτητών
σε τρία μαθήματα. Να γραφεί ένα πρόγραμμα το οποίο να διαβάζει το αρχείο και να εμφανίζει
τον μέσο όρο των φοιτητών σε κάθε μάθημα. Για παράδειγμα, αν το περιεχόμενο του αρχείου
είναι:
5   3.5  9
9   6    4.5
το πρόγραμμα να εμφανίζει:
7
4.75
6.75*/
/*#include <stdio.h>

int main(){
    float vathmos1, vathmos2, vathmos3;
    float sum1 = 0, sum2 = 0, sum3 = 0;
    int count = 0;

    FILE*f;

    f = fopen("students.txt", "w");

    if(f == NULL){
        printf("To arxeio den anoikse!\n");
        return 1;
    }

    fprintf(f,"6 7.1 9\n");
    fprintf(f, "3.2 5.2 1\n");
    fprintf(f,  "5 8.9 6.5\n");

    fclose(f);

    f = fopen("students.txt", "r");

    if(f == NULL){
        printf("To arxeio den anoikse!\n");
        return 1;
    }

    while(fscanf(f, "%f %f %f", &vathmos1, &vathmos2, &vathmos3) == 3){
        sum1 += vathmos1;
        sum2 += vathmos2;
        sum3 += vathmos3;

        count++;
    }

    fclose(f);

    printf("Mesos oros mathimatos 1:\n\n");
    printf("%.2f\n", sum1/count);

    printf("Mesos oros mathimatos 2:\n\n");
    printf("%.2f\n", sum2/count);

    printf("Mesos oros mathimatos 3:\n\n");
    printf("%.2f\n", sum3/count);
}*/