#include <stdio.h>

struct makanan{
	char*nama;
	int harga;
	char*rating;
	
};

void main () {
	
	struct makanan fd1,fd2,fd3;
	
	fd1.nama = "nasi goreng";
	fd1.harga = 12000;
	fd1.rating = "9.0/10";
	
	fd2.nama = "Indomie goreng";
	fd2.harga = 7000;
	fd2.rating = "8.5/10";
	
	fd3.nama = "Corndog";
	fd3.harga = 10000;
	fd3.rating = "9.5/10";
	
	printf("\t <<< Makanan Kantin UPN 1 >>>\n\n");
    printf("Nama	: %s\n", fd1.nama);
    printf("Harga	: %d\n", fd1.harga);
    printf("Rating	: %s\n\n\n", fd1.rating);

	printf("\t <<< Makanan Kantin UPN 2 >>>\n\n");
    printf("Nama	: %s\n", fd2.nama);
    printf("Harga	: %d\n", fd2.harga);
    printf("Rating	: %s\n\n\n", fd2.rating);

    printf("\t <<< Makanan Kantin Upn 3 >>>\n\n");
    printf("Nama	: %s\n", fd3.nama);
    printf("Harga	: %d\n", fd3.harga);
    printf("Rating	: %s\n\n\n", fd3.rating);
}

