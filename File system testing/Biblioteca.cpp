#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct carte {
   char  titlu[20];
   char  autor[20];
   int an_publicatie;
   int   carte_id;
}carte[50];
int n,m;

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
    n=n+m;
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
file_in()
{

    int i;

    ifstream inf,ind;
    inf.open("lista.dat");
    ind.open("esentiale.dat");

    ind>>n;

    for(i=0;i<n;i++)
    {
        inf>>carte[i].titlu;
        inf>>carte[i].autor;
        inf>>carte[i].an_publicatie;
        inf>>carte[i].carte_id;
    }
    inf.close();
    ind.close();
}
file_out()
{

    int i;

    ofstream onf,ond;
    onf.open("lista.dat");
    ond.open("esentiale.dat");

    ond<<n;

    for(i=0;i<n;i++)
    {
        onf<<carte[i].titlu;
        onf<<"\n";
        onf<<carte[i].autor;
        onf<<"\n";
        onf<<carte[i].an_publicatie;
        onf<<"\n";
        onf<<carte[i].carte_id;
        onf<<"\n";
    }
    onf.close();
    ond.close();
}


int main( )
{
    int c,s=0;
    file_in();
   while(s==0)
   {
        //file_in();

    cout<<"1-Adaugare carti\n2-Listare carti\n3-Stergere\n";
    cout<<"\n\nAlegeti optiunea:";cin>>c;
   switch(c)
   {
       case 1:adaugare(); break;
       case 2:afisare(); break;
       case 3:stergere();break;

   }
   //file_out();

   }
   return 0;
}
