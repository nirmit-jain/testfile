#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Product
{
private:
char Pname[20];
int price;
char category[10];
int quantity;
char Prdate[15];
char Exdate[15];

public:
void inputdata()
{
cout<<"\n\n\n enter Product Name \n";
cin>>Pname;
cout<<"\n enter Price \n";
cin>>price;
cout<<"\n enter category \n";
cin>>category;
cout<<"\n enter Quantity available \n";
cin>>quantity;
cout<<"\n enter Purchase Date \n";
cin>>Prdate;
cout<<"\n enter Expiry Date \n\n\n";
cin>>Exdate;
}
int getprice()
{
return price;
}

void outputdata()
{
cout<<"\n\n\n Product Name:\n";
cout<<Pname;
cout<<"\n Price: \n";
cout<<price;
cout<<"\n Category:\n";
cout<<category;
cout<<"\n Quantity:\n";
cout<<quantity;
cout<<"\n Purchase date:\n";
cout<<Prdate;
cout<<"\n Expiry Date:\n";
cout<<Exdate;
}
};
int main()
{
clrscr();
char ans[5]="yes";
int n;
int i=0;
Product p[10];
while(ans=="yes")
{

cout<<"\n\n\t ECOMMERCE APLLICATION \n\n";
cout<<" 1. To ADD ITEM(enter 1) \n";
cout<<" 2. To DISPLAY ITEM(enter 2) \n";
cin>>n;


if(n==1)
{

clrscr();
i++;
cout<<"\t ADD ITEM \n\n";
p[i].inputdata();


cout<<"\nGo to Menu?(yes or No) \n\n";
cin>>ans;
}


if(n==2)
{

int n1;
int pricesearch;

clrscr();


cout<<" \n\n\t SEARCH ITEM \n\n";
cout<<" \n 1. ENTER PRICE(enter1) \n";
cout<<" \n 2. Display all data(enter2) \n";
cin>>n1;


if(n1==1)
{
cin>>pricesearch;
for(int k=0;k<i;k++);
{
if(p[k].getprice() == pricesearch)
p[k].outputdata();
}
}

else
{
for(int h=0;h<i;h++)
p[h].outputdata();
}

cout<<"\nGo to Menu?(yes or No) \n\n";
cin>>ans;
}
}
getch();
return 0;
}