#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *start = NULL;

void ekle(int sayi) {
	struct node *eleman;
	eleman = (struct node *) malloc(sizeof(struct node));
	eleman->data = sayi;
	eleman->next = NULL;

	if (start == NULL || start->data > sayi) {
		eleman->next = start;
		start = eleman;
	} else {
		struct node *temp = start;
		while (temp->next != NULL && temp->next->data < sayi) {
			temp = temp->next;
		}
		eleman->next = temp->next;
		temp->next = eleman;
	}
}

void yazdir() {
	struct node *temp = start;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void liste_temizle() {
	struct node *temp = start;
	while (temp != NULL) {
		struct node *gecici = temp;
		temp = temp->next;
		free(gecici);
	}
	start = NULL;
}

int main() {
	int secim;
	int sayi;
	while (1) {
		printf("1--Ekle\n");
		printf("2--Yazdir\n");
		printf("3--Liste Temizle\n");
		printf("4--Cikis\n");
		printf("Seciminizi yapin: ");
		scanf("%d", &secim);
		switch (secim) {
			case 1:
				printf("Sayi girin: ");
				scanf("%d", &sayi);
				ekle(sayi);
				break;
			case 2:
				yazdir();
				break;
			case 3:
				liste_temizle();
				break;
			case 4:
				liste_temizle();
				printf("Programdan cikiliyor...\n");
				return 0;
			default:
				printf("Gecersiz secim. Tekrar deneyin.\n");
				break;
		}
	}
	return 0;
}
