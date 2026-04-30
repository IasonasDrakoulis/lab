/*1. Να γραφεί πρόγραμμα που θα διαβάζει δύο ακέραιους αριθμούς, θα δηλώνει δύο δείκτες
προς αυτούς και θα εμφανίζει τις διευθύνσεις των ακέραιων μεταβλητών, τις τιμές που
δείχνουν οι δείκτες και τις διευθύνσεις μνήμης των δεικτών.
*/
/*#include <stdio.h>
int main(){
	int a,b,*p1,*p2;
	p1=&a;
	p2=&b;
	printf("Dwse 2 akereous: ");
	scanf("%d %d", &a, &b);
	printf("H dieuthinsi tou prwtou arithmou einai: %p\n", &a);
	printf("H dieuthinsi tou deuterou arithmou einai: %p\n\n", &b);
	
	printf("H timh pu deixnei to pointer p1 einai: %d\n", *p1);
	printf("H timh pu deixnei to pointer p1 einai: %d\n\n", *p2);

	printf("H diethinsi tou pointer p1 einai: %p\n", &p1);
	printf("H diethinsi tou pointer p2 einai: %p\n\n", &p2);
}*/

/*2. Να γραφεί πρόγραμμα που, με χρήση δείκτη, θα διαβάζει μια πραγματική τιμή και θα
εμφανίζει την απόλυτη τιμή της.
*/
/*#include <stdio.h>
int main(){
	float x, *p;
	p=&x;
	printf("Dhlwse enan pragmatiko arithmo: ");
	scanf("%f", p);
	if(*p>0){
		printf("H apoliti timh tou arithmou pu eisagate einai: %.2f", *p);
	}else{
		printf("H apoliti timh tou arithmou pu eisagate einai: %.2f", -*(p));
	}
}*/

/*3. Να γραφεί πρόγραμμα που, με χρήση δεικτών, θα διαβάζει τις τιμές δύο προϊόντων και θα
εμφανίζει τη μεγαλύτερη τιμή.
*/
/*#include <stdio.h>
int main(){
	float x,y,*p1,*p2, max;
	p1=&x;
	p2=&y;
	printf("Dwse 2 times: ");
	scanf("%f %f", p1, p2);
	if(*p1>*p2){
		max=*p1;
	}else{
		max=*p2;
	}
	printf("O max einai: %.2f", max);
}*/

/*4. Να γραφεί πρόγραμμα που, με χρήση δεικτών, θα διαβάζει τις τιμές δύο ακεραίων και θα
τις αντιμεταθέτει.
*/
/*#include <stdio.h>
int main(){
	int x,y,*p1,*p2,temp;
	p1=&x;
	p2=&y;
	printf("Dwse 2 akereous: ");
	scanf("%d %d", p1, p2);
	printf("Prin tin allagi: x=%d kai y=%d\n", *p1, *p2);
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("Meta tin allagi: x=%d kai y=%d\n", *p1, *p2);
}*/

/*5. Να γράψετε πρόγραμμα που να διαβάζει δύο ακέραιους με χρήση δεικτών και να
εμφανίζει μήνυμα για το αν είναι ομόσημοι ή ετερόσημοι.
*/ 
/*#include <stdio.h>
int main(){
	int x,y,*p1,*p2;
	p1=&x;
	p2=&y;
	printf("Dwse 2 akereous arithmous: ");
	scanf("%d %d", p1, p2);
	if(*p1>=0&&*p2>=0){
		printf("Oi arithmoi einai omosimi\n");
	}else if(*p1<0&&*p2<0){
		printf("Oi arithmoi einai omosimi\n");
	}else{
		printf("Oi aritmoi einai eterosimi\n");
	}
}*/

/*6. Να γράψετε πρόγραμμα που θα διαβάζει δέκα ακεραίους με χρήση δεικτών και να
εμφανίζει το άθροισμά τους. Να μη χρησιμοποιήσετε πίνακα για τον υπολογισμό του
αθροίσματος. */
/*#include <stdio.h>
int main(){
	int arr[10], i, *p, sum=0;
	p=arr;
	for(i=0; i<10; i++){
		printf("Dwse to %do arithmo: ", i+1);
		scanf("%d", p);
		sum=sum+*p;
	}
	printf("To athroisma einai: %dw", sum);
}*/

/*7. Να γράψετε πρόγραμμα που θα διαβάζει πέντε θετικούς ακέραιους με χρήση δεικτών και
να εμφανίζει το μικρότερο. Να μη χρησιμοποιήσετε πίνακα στο πρόγραμμά σας.*/
/*#include <stdio.h>
int main(){
	int x,i,min,*p,*pmin;
	p=&x;
	pmin=&min;
	printf("Dwse ton 1o arithmo: ");
	scanf("%d", p);
	*pmin=*p;
	for(i=1; i<5; i++){
		printf("Dwse ton %do arithmo: ", i+1);
		scanf("%d", p);
		if(*p<*pmin){
			*pmin=*p;
		}
	}
	printf("O mikroteros arithmos einai: %d", min);
}*/
