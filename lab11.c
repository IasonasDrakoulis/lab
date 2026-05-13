/*1. Να γραφεί πρόγραμμα που θα διαβάζει συνεχώς ένα αλφαριθμητικό μέχρι 100
χαρακτήρες και θα το εμφανίζει αφού πρώτα αντικαταστήσει τα μικρά γράμματα με τα
αντίστοιχα κεφαλαία και το αντίστροφο. Επίσης, να εμφανίζει το πλήθος των μικρών και
των κεφαλαίων γραμμάτων που περιέχονται στο νέο αλφαριθμητικό. Το πρόγραμμα θα
τερματίζεται όταν ο χρήστης εισάγει το αλφαριθμητικό end.
*/
/*#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    int i;
    int mikra, kefalea;

    while(1) {
        printf("Dwse ena alfarithmitiko: ");
        gets(str);

        if(strcmp(str, "end") == 0) {
            break;
        }
        
        i = 0;
        mikra = 0;
        kefalea = 0;

        while(str[i] != '\0') {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
                kefalea++;
            } else if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
                mikra++;
            }
            i++;
        }
    }

    printf("To neo alfarithmitiko einai: %s\n", str);
    printf("Exei %d mikra kai %d kefalea.\n", mikra, kefalea);
}*/



/*2. Να γραφεί πρόγραμμα που θα διαβάζει ένα αλφαριθμητικό μέχρι 100 χαρακτήρες και θα
τους εμφανίζει με αντίστροφη σειρά, από το τέλος προς την αρχή*/
/*#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    int i, mhkos;

    printf("Dwse ena alfarithmitiko: ");
    gets(str);

    mhkos = strlen(str);

    printf("Antistrofa: ");

    for(i = mhkos-1; i>= 0; i--) {
        printf("%c ", str[i]);
    }
}*/



/*3. Να γραφεί πρόγραμμα που θα διαβάζει ένα αλφαριθμητικό μέχρι 100 χαρακτήρες, θα το
αντιγράφει σε ένα δεύτερο αλφαριθμητικό, αφού πρώτα αντικαταστήσει όλα τα a που
περιέχει με Z.*/
/*#include <stdio.h>
#include <string.h>

int main(){
    char str1[101], str2[101];
    int i;

    printf("Dwse ena alfarithmitiko: ");
    gets(str1);

    i = 0;

    while(str1[i] != '\0') {
        if(str1[i] == 'a'){
            str2[i] = 'Z';
        } else {
            str2[i] = str1[i];
        }
        i++;
    }

    str2[i] = '\0';

    printf("To neo alfarithmitiko einai: %s\n", str2);
}*/



/*4. Το σύστημα κρατήσεων μιας αεροπορικής εταιρείας δεν πρέπει να επιτρέπει την
καταχώριση του ιδίου ονόματος δύο φορές σε μία πτήση. Να γραφεί πρόγραμμα το
οποίο θα διαβάζει τα ονόματα των επιβατών ενός αεροσκάφους 100 θέσεων και θα τα
καταχωρίζει σε κατάλληλο πίνακα. Η καταχώριση θα σταματάει όταν αντί για όνομα
δοθούν τέσσερις παύλες ("----"). Το πρόγραμμα δεν πρέπει να επιτρέπει την καταχώριση
του ίδιου ονόματος στον πίνακα και τέλος θα εμφανίζει τα ονόματα όλων των επιβατών
της πτήσης. Ο έλεγχος των διπλών ονομάτων να γίνει με χρήση συνάρτησης. */
/*#include <stdio.h>
#include <string.h>

int exists(char names[100][101], int count, char name[101]){
    int i;

    for(i = 0; i < count; i++) {
        if (strcmp(names[i], name) == 0){
            return 1;
        } else {
            return 0;
        }
    }
}

int main() {
    char names[100][101];
    char name[101];
    int count, i;

    count = 0;

    while(count < 100) {
        printf("Dwse ena onoma epivati: ");
        gets(name);

        if(strcmp(name, "----") == 0) {
            break;
        }

        if(exists(names, count, name)) {
            printf("Iparxei epivatis me auto to onoma hdh, den egine kataxwrisi stoixeiwn!\n");
        } else {
            strcpy(names[count], name);
            count++;
        }
    }

    printf("\nOnomata epivaton:\n");

    for(i = 0; i < count; i ++){
        printf("[%d]. %s\n", i + 1, names[i]);
    }
}*/



/*5. Να γραφεί πρόγραμμα που θα διαβάζει ένα αλφαριθμητικό μέχρι 100 χαρακτήρες και αν
το μήκος του είναι μικρότερο από τρεις χαρακτήρες, θα υποχρεώνει το χρήστη να εισάγει
νέο. Στη συνέχεια θα διαβάζει ένα χαρακτήρα από το πληκτρολόγιο και θα ελέγχει αν
αυτός υπάρχει και πόσες φορές στο αλφαριθμητικό. Τέλος θα εμφανίζει ανάλογο
μήνυμα.*/
/*#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    char ch;
    int i, count;

    do
    {
        printf("Dwse ena alfarithmitiko(Toulaxiston 3 xaraktires): ");
        gets(str);
    } while (strlen(str) < 3);

    printf("Dwse enan xaraktira: ");
    scanf(" %c",&ch);

    count = 0;
    i = 0;

    while( str[i] != '\0'){
        if(str[i] == ch) {
            count ++;
        }
        i ++;
    }

    if(count > 0){
        printf("O xaraktiras : [%c] vriskete %d fores mesa sto alfarithmitiko.", ch, count);
    } else {
        printf("O xaraktiras : [%c] den iparxei mesa sto alfarithmitiko.", ch, count);
    }
}*/