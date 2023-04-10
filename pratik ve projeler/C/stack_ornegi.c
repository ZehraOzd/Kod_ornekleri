#include <stdio.h>
#define BOYUT 5
int dizi[BOYUT], top;

void push(int veri) // eleman ekleme
{
    if (top == BOYUT - 1) // stack dolu durumunu kontrol et
    {
        printf("Stack dolu.\n");
    }
    else
    {
        top = top + 1;
        dizi[top] = veri;
    }
}

void pop() // eleman çýkartma
{
    if (top == -1) // stack boþ durumunu kontrol et
    {
        printf("Stack boþ.\n");
    }
    else
    {
        top = top - 1;
    }
}

int peek() // top deðeri döndürme (indis deðil)
{
    return dizi[top];
}

void yazdir()
{
    int i;
    if (top == -1) // stack boþ ise mesaj yazdýr
    {
        printf("Stack boþ.\n");
    }
    else
    {
        printf("Stack içeriði: ");
        for (i = 0; i <= top; i++)
        {
            printf("%d-->", dizi[i]);
        }
        printf("top\n");
    }
}

int main()
{
    top = -1; // 0. indisten baþlayabilmek için -1 ile baþlýyoruz
    int secim;
    while (1)
    {
        printf("1--push\n");
        printf("2--pop\n");
        printf("3--peek\n");
        printf("Seciminizi yapin: ");

        scanf("%d", &secim);

        switch (secim)
        {
        case 1:
            printf("Bir sayi girin: ");
            scanf("%d", &secim);
            push(secim);
            yazdir();
            break;
        case 2:
            pop();
            yazdir();
            break;
        case 3:
            if (top == -1)
            {
                printf("Stack boþ.\n");
            }
            else
            {
                printf("Top degeri: %d\n", peek()); // peek integer deðer return ediyor
            }
            break;
        }
    }

    return 0;
}
