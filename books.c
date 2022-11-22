#include<stdio.h>

struct Book{
	long ISBN;
	char name[50];
	char author[50];
	float price;
};

int max(struct Book b[],int n)
{
	int i;
	int max = -1;
        for(i=0;i<n;i++)
        {
                if(max<b[i].price)
                        max = b[i].price;
        }
        return max;
	
}
void main()
{
	int i;
	int n;
	puts("Enter the number of books");
	scanf("%d",&n);
	struct Book book[n];
	for(i=0;i<n;i++)
	{
		/*puts("Enter the ISBN number");
		scanf("%ld",&book[i].ISBN);
		puts("Enter the name of the book");
		getchar();
		fflush(stdin);
		gets(&book[i].name);
		puts("Enter the name of the author");
		getchar();
		fflush(stdin);
		gets(&book[i].author);*/
		puts("Enter the price");
		scanf("%f",&book[i].price);
	}
	printf("The maximum price is : %d",max(book,n));
}
