//Create a structure book with book title, author, publication, and price. Read the data of 3 books and display.
#include<stdio.h>
struct book
{
	char bookname[50];
	char author[50];
	char publication[50];
	float price;
};

void main()
{
	struct book b1,b2,b3;
	printf("enter the your book 1");
	scanf("%s %s %s %f",b1.bookname,b1.author,b1.publication,&b1.price);
	
	printf("enter the your book 2");
	scanf("%s %s %s %f",b2.bookname,b2.author,b2.publication,&b2.price);
	
	printf("enter the book 3");
	scanf("%s %s %s %f",b3.bookname,b3.author,b3.publication,&b3.price);
	
	printf("bookname %s\n",b1.bookname);
	printf("author %s\n",b1.author);
	printf("publication %s\n",b1.publication);
	printf("price %f\n",b1.price);
	
	printf("bookname %s\n",b2.bookname);
	printf("author %s\n",b2.author);
	printf("publication %s\n",b2.publication);
	printf("price %f\n",b2.price);	
	
	printf("bookname %s\n",b3.bookname);
	printf("author %s\n",b3.author);
	printf("publication %s\n",b3.publication);
	printf("price %f\n",b3.price);	
	
		
}
