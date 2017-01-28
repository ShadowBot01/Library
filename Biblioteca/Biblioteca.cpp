#include <iostream>
#include <cstring>

using namespace std;

struct carte {
   char  titlu[20];
   char  autor[20];
   int an_publicatie;
   int   carte_id;
}carte[50];
int n;

void adaugare ()
{
 int i;

    cout<<"introduceti nr de carti:";cin>>n;

    for(i=0;i<n;i++)
    {
         cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
         cout<<"Titlu:";cin.get();
         cin.getline(carte[i].titlu,20);
         cout<<"Autor:";cin.get();
         cin.getline(carte[i].autor,20);
         cout<<"Anul publicatiei:";cin>>carte[i].an_publicatie;
         carte[i].carte_id=i;
    }
}
void afisare()
{
    int i;
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    for(i=0;i<n;i++)
     {
         cout<<carte[i].titlu<<" ID:"<<carte[i].carte_id<<"\n";
     }
     cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

}

void stergere()
{
   int i,o;

    cout<<"\n\nAlegeti id-ul carti pe care sa o stergeti:";cin>>o;
    for(i=o;i<n-1;i++)
    {
        carte[i]=carte[i+1];
    }
    n=n-1;
    for(i=o;i<n;i++)
    {
        carte[i].carte_id=i;
    }
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

}


int main( )
{
    int c,s=0;
   while(s==0)
   {
    cout<<"1-Adaugare carti\n2-Listare carti\n3-Stergere\n";
    cout<<"\n\nAlegeti optiunea:";cin>>c;
   switch(c)
   {
       case 1:adaugare(); break;
       case 2:afisare(); break;
       case 3:stergere();break;

   }

   }
   return 0;
}
