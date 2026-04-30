/*1. Να γραφεί πρόγραμμα που θα διαβάζει συνεχώς ακέραιους αριθμούς. Οι τιμές από 10 έως
και 20 θα αποθηκεύονται σε ένα αρχείο με όνομα askisi1.txt η μία κάτω από την άλλη. Η
εισαγωγή των αριθμών και συνολικά το πρόγραμμα θα τερματίζεται όταν ο χρήστης δώσει την
τιμή -1. Μετά το τέλος του προγράμματος θα εμφανίζεται το αρχείο askisi1.txt.
*/
/*#include <stdio.h>

int main(){
    int x;

    FILE *f = fopen("askis1.txt", "w");

    if(f == NULL) {
        printf("To arxeio den anoikse!\n");
        return 1;
    }

    while (1 == 1){
        printf("Dwse enan akereo arithmo: ");
        scanf("%d", &x);

        if(x == -1){
            break;
        }

        if(x>=10 && x<=20) {
            fprintf(f, "%d\n", x);
        }
    }

    fclose(f);
}*/


/*2. Να γραφεί πρόγραμμα που θα διαβάζει το όνομα ενός αρχείου για εγγραφή.
α) Αν το αρχείο δεν υπάρχει, θα το δημιουργεί και θα γράφει σε αυτό τη λέξη One.
β) Αν το αρχείο υπάρχει, το πρόγραμμα θα ρωτάει το χρήστη αν επιθυμεί να συνεχίσει με την
υπερεγγραφή του αρχείου.
γ) Αν απαντήσει θετικά θα γράφει τη λέξη One. Αν απαντήσει αρνητικά, θα μπορεί να επιλέξει
ένα άλλο όνομα αρχείου με σκοπό να επαναληφθεί η παραπάνω διαδικασία.
*/
/*#include <stdio.h>
#include <string.h>

int main() {
    char filename[50];
    char choice;

    while (1) {
        printf("Dwse to onoma tou arxeiou: ");
        scanf("%s", filename);

        FILE *fp = fopen(filename, "r");

        if (fp == NULL) {
            fp = fopen(filename, "w");

            if (fp == NULL) {
                printf("Sfalma sto anoigma tou arxeiou.\n");
                return 1;
            }

            fprintf(fp, "One");
            fclose(fp);
            printf("To arxeio dimiourgithike kai grafike 'One'.\n");

            break;

        } else {

            fclose(fp);
            printf("To arxeio yparxei. Theleis na ginei overwrite? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                fp = fopen(filename, "w");

                if (fp == NULL) {
                    printf("Sfalma sto anoigma tou arxeiou.\n");
                    return 1;
                }

                fprintf(fp, "One");
                fclose(fp);
                printf("Egine overwrite kai grafike 'One'.\n");
                break;
            }
        }
    }
}*/


/*3. Να γραφεί πρόγραμμα που θα διαβάζει 5 αλφαριθμητικά από το πληκτρολόγιο (έως 50
χαρακτήρες το καθένα) και θα προσθέτει σε ένα αρχείο κειμένου, με όνομα που θα δίνεται
από το χρήστη, μόνο αυτά που αρχίζουν με το χαρακτήρα ‘z’. Στη συνέχεια θα εμφανίζει το
πλήθος των αλφαριθμητικών που αποθηκεύτηκαν στο αρχείο κειμένου. Τέλος θα ανοίγει το
αρχείο με το notepad.*/
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    char text[51];
    FILE *fp;
    int i;
    int count = 0;

    printf("Dwse to onoma tou arxeiou: ");
    scanf("%99s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Sfalma sto anoigma tou arxeiou.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("Dwse alfaarithmitiko %d: ", i + 1);
        scanf("%50s", text);

        if (text[0] == 'z') {
            fprintf(fp, "%s\n", text);
            count++;
        }
    }

    fclose(fp);

    printf("Apothikeutikan %d alfaarithmitika sto arxeio.\n", count);
    
    char command[150];
    sprintf(command, "notepad \"%s\"", filename);
    system(command);

    return 0;
}*/