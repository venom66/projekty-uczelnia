#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <functional>

using namespace std;

void baner()
{
    cout <<" ===============================================================\n"
         <<"|                       Program POKER                           |\n"
         <<"|                                                               |\n"
         <<"|                                                               |\n"
         <<"|---------------------------------------------------------------|\n"
         <<"|                WSNHiD(C)2015 bdobrosielski                    |\n"
         <<" ===============================================================\n\n";

cout<<"oznaczenie kolorow: "<<endl;
cout<<"p - pik"<<endl;
cout<<"k - kier"<<endl;
cout<<"a - karo"<<endl;
cout<<"t - trefl"<<endl;
cout<<"oznaczenie kart: "<<endl;
cout<<"A-As"<<endl;
cout<<"K-krol"<<endl;
cout<<"D-dama"<<endl;
cout<<"W-walet"<<endl;
cout<<"1-10"<<endl;
cout<<"karty 2-9 tak jak stanowia"<<endl;


}

bool wczytajPlik(string reka1)
{

	ifstream plik;
	plik.open("reka1.txt");
	if(!plik.good())
		return false;

	while (true)
	{
	char karta1;
	char kolor1;
	char karta2;
	char kolor2;
	char karta3;
	char kolor3;
	char karta4;
	char kolor4;
	char karta5;
	char kolor5;
	plik >> karta1>> kolor1;
	plik >> karta2>> kolor2;
	plik >> karta3>> kolor3;
	plik >> karta4>> kolor4;
	plik >> karta5>> kolor5;

	if(plik.good())
    {
		cout << karta1 <<" "<< kolor1<<endl;
		cout << karta2 <<" "<< kolor2<<endl;
		cout << karta3 <<" "<< kolor3<<endl;
		cout << karta4 <<" "<< kolor4<<endl;
        cout << karta5 <<" "<< kolor5<<endl;
    }
        else break;
	}// while koniec
plik.close();
return true;
}

bool wczytajPlikb(string reka2)
{

	ifstream plikb;
	plikb.open("reka2.txt");
	if(!plikb.good())
		return false;

	while (true)
	{
	char karta1b;
	char kolor1b;
	char karta2b;
	char kolor2b;
	char karta3b;
	char kolor3b;
	char karta4b;
	char kolor4b;
	char karta5b;
	char kolor5b;
	plikb >> karta1b >> kolor1b;
	plikb >> karta2b >> kolor2b;
	plikb >> karta3b >> kolor3b;
	plikb >> karta4b >> kolor4b;
	plikb >> karta5b >> kolor5b;

	if(plikb.good())
    {
		cout << karta1b << " " <<kolor1b<<endl;
		cout << karta2b << " " <<kolor2b<<endl;
		cout << karta3b << " " <<kolor3b<<endl;
		cout << karta4b << " " <<kolor4b<<endl;
        cout << karta5b << " " <<kolor5b<<endl;
    }
        else break;
	}// while koniec
plikb.close();
return true;
}

int main()
{
baner();
    string karta1;
    string kolor1;
    string karta2;
    string kolor2;
    string karta3;
    string kolor3;
    string karta4;
	string kolor4;
	string karta5;
	string kolor5;
    string karta1b;
    string kolor1b;
    string karta2b;
    string kolor2b;
    string karta3b;
    string kolor3b;
    string karta4b;
	string kolor4b;
	string karta5b;
	string kolor5b;
    string kolor;
    int rk1=0, rk2=0, rk3=0, rk4=0, rk5=0;
	int A=14;
	int K=13;
	int D=12;
	int W=11; // walet
	int k10=10;
	int k9=9;
	int k8=8;
	int k7=7;
	int k6=6;
	int k5=5;
	int k4=4;
	int k3=3;
	int k2=2;

string linia;
int i=0;
int sumareka1=0;
int sumareka2=0;

ifstream plik;
    plik.open("reka1.txt", ios::in);

    cout << "reka pierwsza to: "<<endl;
	if(!wczytajPlik("reka1.txt"))
		cout << "nie udalo sie otworzyc pliku"<<endl;


    while (getline(plik, linia))
    {
        plik >> karta1 >> kolor1;
        plik >> karta2 >> kolor2;
        plik >> karta3 >> kolor3;
        plik >> karta4 >> kolor4;
        plik >> karta5 >> kolor5;

    }
    cout<< "Reka1: "<<endl;
    cout<< "karta 1 to: "<<karta1<< " kolor karty 1 to: " << kolor1<<endl;
    cout<< "karta 2 to: "<<karta2<< " kolor karty 2 to: " << kolor2<<endl;
    cout<< "karta 3 to: "<<karta3<< " kolor karty 3 to: " << kolor3<<endl;
    cout<< "karta 4 to: "<<karta4<< " kolor karty 4 to: " << kolor4<<endl;
    cout<< "karta 5 to: "<<karta5<< " kolor karty 5 to: " << kolor5<<endl<<endl;


plik.close();

string linia2;

ifstream plikb;
     plikb.open("reka2.txt", ios::in);

     cout <<"reka druga to: "<<endl;
	if(!wczytajPlikb("reka2.txt"))
		cout << "nie udalo sie otworzyc pliku"<<endl;

    while (getline(plikb, linia2))
    {   plikb >> karta1b >> kolor1b;
        plikb >> karta2b >> kolor2b;
        plikb >> karta3b >> kolor3b;
        plikb >> karta4b >> kolor4b;
        plikb >> karta5b >> kolor5b;
    }

    cout<< "Reka 2: " <<endl;
    cout<< "karta 1b to: " << karta1b <<" kolor karty 1b to: " << kolor1b << endl;
    cout<< "karta 2b to: " << karta2b <<" kolor karty 2b to: " << kolor2b << endl;
    cout<< "karta 3b to: " << karta3b <<" kolor karty 3b to: " << kolor3b << endl;
    cout<< "karta 4b to: " << karta4b <<" kolor karty 4b to: " << kolor4b << endl;
    cout<< "karta 5b to: " << karta5b <<" kolor karty 5b to: " << kolor5b << endl;

plikb.close();



    if(karta1=="A") // zmiana kart na liczby
    {
        rk1=A;
//        cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="A")
    {
        rk2=A;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="A")
    {
        rk3=A;
//        cout<<"karta3: "<<rk3<<endl;
    }

     if(karta4=="A")
    {
        rk4=A;
//       cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="A")
    {
        rk5=A;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="K")
    {
        rk1=K;
//       cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="K")
    {
        rk2=K;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="K")
    {
        rk3=K;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="K")
    {
        rk4=K;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="K")
    {
        rk5=K;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="D")
    {
    	rk1=D;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="D")
    {
        rk2=D;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="D")
    {
        rk3=D;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="D")
    {
        rk4=D;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="D")
    {
        rk5=D;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="W")
    {
    	rk1=W;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="W")
    {
        rk2=W;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="W")
    {
        rk3=W;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="W")
    {
        rk4=W;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="W")
    {
        rk5=W;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="1")
    {
        rk1=k10;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="1")
    {
        rk2=k10;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="1")
    {
        rk3=k10;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="1")
    {
        rk4=k10;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="1")
    {
        rk5=k10;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="9")
    {
        rk1=k9;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="9")
    {
        rk2=k9;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="9")
    {
        rk3=k9;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="9")
    {
        rk4=k9;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="9")
    {
        rk5=k9;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="8")
    {
        rk1=k8;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="8")
    {
        rk2=k8;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="8")
    {
        rk3=k8;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="8")
    {
        rk4=k8;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="8")
    {
        rk5=k8;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="7")
    {
        rk1=k7;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="7")
    {
        rk2=k7;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="7")
    {
        rk3=k7;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="7")
    {
        rk4=k7;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="7")
    {
        rk5=k7;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="6")
    {
        rk1=k6;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="6")
    {
        rk2=k6;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="6")
    {
        rk3=k6;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="6")
    {
        rk4=k6;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="6")
    {
        rk5=k6;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="5")
    {
        rk1=k5;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="5")
    {
        rk2=k5;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="5")
    {
        rk3=k5;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="5")
    {
        rk4=k5;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="5")
    {
        rk5=k5;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="4")
    {
        rk1=k4;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="4")
    {
        rk2=k4;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="4")
    {
        rk3=k4;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="4")
    {
        rk4=k4;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="4")
    {
        rk5=k4;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="3")
    {
        rk1=k3;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="3")
    {
        rk2=k3;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="3")
    {
        rk3=k3;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="3")
    {
        rk4=k3;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="3")
    {
        rk5=k3;
//        cout<<"karta5: "<<rk5<<endl;
    }

    if(karta1=="2")
    {
        rk1=k2;
//	cout<<"karta1: "<<rk1<<endl;
    }

    if(karta2=="2")
    {
        rk2=k2;
//        cout<<"karta2: "<<rk2<<endl;
    }

    if(karta3=="2")
    {
        rk3=k2;
//        cout<<"karta3: "<<rk3<<endl;
    }

    if(karta4=="2")
    {
        rk4=k2;
//        cout<<"karta4: "<<rk4<<endl;
    }

    if(karta5=="2")
    {
        rk5=k2;
//        cout<<"karta5: "<<rk5<<endl;
    }




//__________________________________________________________reka2

 int rk1b=0;
 int rk2b=0;
 int rk3b=0;
 int rk4b=0;
 int rk5b=0;



  if(karta1b=="A") // zmiana kart na liczby
    {
        rk1b=A;
//        cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="A")
    {
        rk2b=A;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="A")
    {
        rk3b=A;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="A")
    {
        rk4b=A;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="A")
    {
        rk5b=A;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="K")
    {
        rk1b=K;
//        cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="K")
    {
        rk2b=K;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="K")
    {
        rk3b=K;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="K")
    {
        rk4b=K;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="K")
    {
        rk5b=K;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="D")
    {
	rk1b=D;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="D")
    {
        rk2b=D;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="D")
    {
        rk3b=D;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="D")
    {
        rk4b=D;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="D")
    {
        rk5b=D;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="W")
    {
        rk1b=W;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="W")
    {
        rk2b=W;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="W")
    {
        rk3b=W;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="W")
    {
        rk4b=W;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="W")
    {
        rk5b=W;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="1")
    {
	    rk1b=k10;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="1")
    {
        rk2b=k10;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="1")
    {
        rk3b=k10;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="1")
    {
        rk4b=k10;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="1")
    {
        rk5b=k10;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="9")
    {
	rk1b=k9;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="9")
    {
        rk2b=k9;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="9")
    {
        rk3b=k9;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="9")
    {
        rk4b=k9;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="9")
    {
        rk5b=k9;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="8")
    {
        rk1b=k8;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="8")
    {
        rk2b=k8;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="8")
    {
        rk3b=k8;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="8")
    {
        rk4b=k8;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="8")
    {
        rk5b=k8;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="7")
    {
        rk1b=k7;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="7")
    {
        rk2b=k7;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="7")
    {
        rk3b=k7;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="7")
    {
        rk4b=k7;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="7")
    {
        rk5b=k7;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="6")
    {
        rk1b=k6;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="6")
    {
        rk2b=k6;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="6")
    {
        rk3b=k6;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="6")
    {
        rk4b=k6;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="6")
    {
        rk5b=k6;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="5")
    {
        rk1b=k5;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="5")
    {
        rk2b=k5;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="5")
    {
        rk3b=k5;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="5")
    {
        rk4b=k5;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="5")
    {
        rk5b=k5;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="4")
    {
        rk1b=k4;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="4")
    {
        rk2b=k4;
//      cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="4")
    {
        rk3b=k4;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="4")
    {
        rk4b=k4;
//      cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="4")
    {
        rk5b=k4;
//      cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="3")
    {
	rk1b=k3;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="3")
    {
        rk2b=k3;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="3")
    {
        rk3b=k3;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="3")
    {
        rk4b=k3;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="3")
    {
        rk5b=k3;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

    if(karta1b=="2")
    {
        rk1b=k2;
//	cout<<"karta1b: "<<rk1b<<endl;
    }

    if(karta2b=="2")
    {
        rk2b=k2;
//        cout<<"karta2b: "<<rk2b<<endl;
    }

    if(karta3b=="2")
    {
        rk3b=k2;
//        cout<<"karta3b: "<<rk3b<<endl;
    }

    if(karta4b=="2")
    {
        rk4b=k2;
//        cout<<"karta4b: "<<rk4b<<endl;
    }

    if(karta5b=="2")
    {
        rk5b=k2;
//        cout<<"karta5b: "<<rk5b<<endl;
    }

///-------------------------------------------------------------------kartab


string reka12[]={karta1,karta2,karta3,karta4,karta5};

int reka1[]={rk1, rk2, rk3, rk4, rk5};
// {
//  for (int m=0; m<5; m++)
//       cout<<"reka1 too: "<<m<< " "<< reka1[m]<<endl;

//}
cout<<endl;
 sort( reka1, reka1 + 5 ); //sortowanie reki1

    cout << "Reka1 posortowana rosnaco: \n";
    for( int i = 0; i < 5; i++ )
         cout << reka1[ i ]<<" ";


string reka22[]={karta1b,karta2b,karta3b,karta4b,karta5b};

int reka2[]={rk1b, rk2b, rk3b, rk4b, rk5b};
cout<<endl;
//    for (int m=0; m<5; m++)
//        cout<<"reka2 too: "<<m<< " "<< reka2[m];

 sort( reka2, reka2 + 5 ); //sortowanie reki1

    cout << "Reka2 posortowana rosnaco: \n";
    for( int i = 0; i < 5; i++ )
    {
         cout << reka2[ i ] << " ";
    }
cout<<endl;


int wysokakarta;
int stret;
int para;
int pary2;
int trojka;
int poker;
int full;
int kareta;
int rozdanie1;
int rozdanie2;
int color;
int max1; // wyoska karta reka1
int max2; // wysoka karta reka2
int sumafull1=0;
int sumafull2=0;
int sumatrojka1=0;
int sumatrojka2=0;
int sumapara1=0;
int sumapara2=0;
int sumapary21=0;
int sumapary22=0;

string tabkolor1[]={kolor1, kolor2, kolor3, kolor4, kolor5};
string tabkolor2[]={kolor1b, kolor2b, kolor3b, kolor4b, kolor5b};

sumareka1=rk1+rk2+rk3+rk4+rk5;
// cout<<"suma kart reki1 to: "<<sumareka1<<endl;

sumareka2=rk1b+rk2b+rk3b+rk4b+rk5b;
// cout<<"suma kart reki2 to: "<<sumareka2<<endl;


if	(((reka1[0]==reka1[1]-1 && reka1[1]-1==reka1[2]-2 && reka1[2]-2==reka1[3]-3 && reka1[3]-3==reka1[4]-4 && reka1[0]==reka1[4]-4) //||
	&& (tabkolor1[0]==tabkolor1[1] && tabkolor1[1]==tabkolor1[2] && tabkolor1[2]==tabkolor1[3] &&
         tabkolor1[3]==tabkolor1[4] && tabkolor1[0]==tabkolor1[4])) ||
    ((reka1[0]==2 && reka1[1]==3 && reka1[2]==4 && reka1[3]==5 && reka1[4]==14) &&
     (tabkolor1[0]==tabkolor1[1] && tabkolor1[1]==tabkolor1[2] && tabkolor1[2]==tabkolor1[3] &&
         tabkolor1[3]==tabkolor1[4] && tabkolor1[0]==tabkolor1[4])))
            {
                rozdanie1=poker;
                cout<<"reka1 POKER"<<endl;
                for(int r=0; r<5;r++)
                cout<< r<< "twoj poker to: "<<reka1[r]<<endl;
            }

    else if (reka1[0]==reka1[1] && reka1[2]==reka1[3] && reka1[0]==reka1[3] ||
             reka1[0]==reka1[2] && reka1[3]==reka1[4] && reka1[0]==reka1[4] ||
             reka1[0]==reka1[1] && reka1[3]==reka1[4] && reka1[0]==reka1[4] ||
             reka1[0]==reka1[1] && reka1[2]==reka1[4] && reka1[0]==reka1[4] ||
             reka1[1]==reka1[2] && reka1[3]==reka1[4] && reka1[1]==reka1[4] ||
             reka1[0]==reka1[1] && reka1[2]==reka1[3] && reka1[0]==reka1[3])
            {
                rozdanie1=kareta;
                cout << "reka1 KARETA"<<endl;
            }

    else if ((reka1[0]==reka1[1]&&reka1[2]==reka1[0] && reka1[3]==reka1[4]
            || reka1[0]==reka1[1]&&reka1[3]==reka1[0] && reka1[2]==reka1[4]
            || reka1[0]==reka1[1]&&reka1[4]==reka1[0] && reka1[2]==reka1[3]
            || reka1[1]==reka1[2]&&reka1[3]==reka1[1] && reka1[0]==reka1[4]
            || reka1[1]==reka1[2]&&reka1[4]==reka1[1] && reka1[0]==reka1[3]
            || reka1[2]==reka1[3]&&reka1[4]==reka1[2] && reka1[0]==reka1[1]))
   		   	 {
        	rozdanie1=full;
        	cout<<"reka1 FULL"<<endl;
        if(reka1[0]==reka1[1]&&reka1[0]==reka1[2]&& reka1[3]==reka1[4])
        {
            sumafull1=reka1[0]+reka1[1]+reka1[2];
            //	cout<<"sumafull1 wynosi: "<<sumafull1<<endl;
        }

        else if (reka1[0]==reka1[1]&&reka1[0]==reka1[3]&& reka1[2]==reka1[4])
        {
            sumafull1=reka1[0]+reka1[1]+reka1[3];
            //	cout<<"sumafull1 wynosi: "<<sumafull1<<endl;
        }
        else if (reka1[0]==reka1[1]&&reka1[0]==reka1[4]&&reka1[2]==reka1[3])
        {
            sumafull1=reka1[0]+reka1[1]+reka1[4];
            //	cout<<"sumafull1 wynosi: "<<sumafull1<<endl;
        }
        else if (reka1[1]==reka1[2]&&reka1[1]==reka1[3]&& reka1[0]==reka1[4])
        {
            sumafull1=reka1[1]+reka1[2]+reka1[3];
            //	cout<<"sumafull1 wynosi: "<<sumafull1<<endl;
        }
        else if (reka1[1]==reka1[2]&&reka1[1]==reka1[4]&& reka1[0]==reka1[3])
        {
            sumafull1=reka1[1]+reka1[2]+reka1[4];
            //	cout<<"sumafull1 wynosi: "<<sumafull1<<endl;
        }
        else if (reka1[2]==reka1[3]&&reka1[2]==reka1[4]&&reka1[0]==reka1[1])
        {
            sumafull1=reka1[2]+reka1[3]+reka1[4];
            //	cout<<"sumafull1 wynosi: "<<sumafull1<<endl;
        }
    }


// warunek na kolor :P

    else if(tabkolor1[0]==tabkolor1[1]&&
			 tabkolor1[1]==tabkolor1[2] &&
             tabkolor1[2]==tabkolor1[3] &&
			 tabkolor1[3]==tabkolor1[4] &&
             tabkolor1[0]==tabkolor1[4])
    		{
       		 	rozdanie1=color;
            	cout<< "reka1 KOLOR"<<endl;
   			 }
    else if((reka1[0]==reka1[1]-1 && reka1[1]-1==reka1[2]-2 && reka1[2]-2==reka1[3]-3 && reka1[3]-3==reka1[4]-4) ||
        (reka1[0]==2 && reka1[1]==3 && reka1[2]==4 && reka1[3]==5 && reka1[4]==14))
   			 {
       		 rozdanie1=stret;
       		 cout<<"reka1 STRET"<<endl;
    		}

    else if (reka1[0]==reka1[1]&&reka1[0]==reka1[2] ||
             reka1[0]==reka1[1]&&reka1[3]==reka1[0] ||
             reka1[0]==reka1[1]&&reka1[4]==reka1[0] || // trojka
             reka1[1]==reka1[2]&&reka1[3]==reka1[1] ||
             reka1[1]==reka1[2]&&reka1[4]==reka1[1] ||
             reka1[2]==reka1[3]&&reka1[4]==reka1[2])
    {
        rozdanie1=trojka;
        cout<<"reka1 TROJKA"<<endl;
        if(reka1[0]==reka1[1]&&reka1[0]==reka1[2])
        {
            sumatrojka1=reka1[0]+reka1[1]+reka1[2];
            //cout<<"sumatrojak1 wynosi: "<<sumatrojka1<<endl;
        }
        else if(reka1[0]==reka1[1]&&reka1[3]==reka1[0])
        {
            sumatrojka1=reka1[0]+reka1[1]+reka1[3];
            //cout<<"sumatrojak1 wynosi: "<<sumatrojka1<<endl;
        }
        else if(reka1[0]==reka1[1]&&reka1[4]==reka1[0])
        {
            sumatrojka1=reka1[0]+reka1[1]+reka1[4];
            // cout<<"sumatrojak1 wynosi: "<<sumatrojka1<<endl;
        }
        else if(reka1[1]==reka1[2]&&reka1[3]==reka1[1])
        {
            sumatrojka1=reka1[1]+reka1[2]+reka1[3];
            //cout<<"sumatrojak1 wynosi: "<<sumatrojka1<<endl;
        }
        else if(reka1[1]==reka1[2]&&reka1[4]==reka1[1])
        {
            sumatrojka1=reka1[1]+reka1[2]+reka1[4];
            //cout<<"sumatrojak1 wynosi: "<<sumatrojka1<<endl;
        }
        else if(reka1[2]==reka1[3]&&reka1[4]==reka1[2])
        {
            sumatrojka1=reka1[2]+reka1[3]+reka1[4];
            //cout<<"sumatrojak1 wynosi: "<<sumatrojka1<<endl;
        }

    }

    else if (reka1[0]==reka1[1] && reka1[2]==reka1[3] || reka1[0]==reka1[2]&& reka1[3]==reka1[4] || //dwie pary
             reka1[1]==reka1[2] && reka1[3]==reka1[4] || reka1[0]==reka1[1] && reka1[3]==reka1[4]||
             reka1[0]==reka1[1] && reka1[2]==reka1[4])
    {
        rozdanie1=pary2;
        cout<<"reka1 DWIE PARY"<<endl;
        if(reka1[0]==reka1[1] && reka1[2]==reka1[3])
        {
            sumapary21=reka1[0]+reka1[1]+reka1[2]+reka1[3];
        }
        else if(reka1[0]==reka1[2] && reka1[3]==reka1[4])
        {
            sumapary21=reka1[0]+reka1[2]+reka1[3]+reka1[4];
        }
        else if(reka1[1]==reka1[2] && reka1[3]==reka1[4])
        {
            sumapary21=reka1[1]+reka1[2]+reka1[3]+reka1[4];
        }
        else if(reka1[0]==reka1[1] && reka1[3]==reka1[4])
        {
            sumapary21=reka1[0]+reka1[1]+reka1[3]+reka1[4];
        }
        else if(reka1[0]==reka1[1] && reka1[2]==reka1[4])
        {
            sumapary21=reka1[0]+reka1[1]+reka1[2]+reka1[4];
        }

    }


    else if (reka1[0]==reka1[1] || reka1[0]==reka1[2] || reka1[0]==reka1[3] || reka1[0]==reka1[4]|| // para
             reka1[1]==reka1[2] || reka1[1]==reka1[3] || reka1[1]==reka1[4] ||
             reka1[2]==reka1[3] || reka1[2]==reka1[4]||
             reka1[3]==reka1[4])
    {
        rozdanie1=para;
        cout<<"reka1 PARA"<< endl;
        if(reka1[0]==reka1[1])
        {
            sumapara1=reka1[0]+reka1[1];
        }
        else if(reka1[0]==reka1[2])
        {
            sumapara1=reka1[0]+reka1[2];
        }
        else if(reka1[0]==reka1[3])
        {
            sumapara1=reka1[0]+reka1[3];
        }
        else if(reka1[0]==reka1[4])
        {
            sumapara1=reka1[0]+reka1[4];
        }
        else if(reka1[1]==reka1[2])
        {
            sumapara1=reka1[1]+reka1[2];
        }
        else if(reka1[1]==reka1[3])
        {
            sumapara1=reka1[1]+reka1[3];
        }
        else if(reka1[1]==reka1[4])
        {
            sumapara1=reka1[1]+reka1[4];
        }
        else if(reka1[2]==reka1[3])
        {
            sumapara1=reka1[2]+reka1[3];
        }
        else if(reka1[2]==reka1[4])
        {
            sumapara1=reka1[2]+reka1[4];
        }
        else if(reka1[3]==reka1[4])
        {
            sumapara1=reka1[3]+reka1[4];
        }
    }


    else if (reka1[0]!=reka1[1] && reka1[1]!=reka1[2] && reka1[2]!=reka1[3] && reka1[3]!=reka1[4])
    {
        rozdanie1=wysokakarta;
        max1=reka1[0];
        for (int pe=1; pe<5; pe++)
            if(max1<reka1[pe])
                max1=reka1[pe];

        cout<<"reka1 WYSOKA KARTA: "<<max1<<endl;
    }



//______________________________________________reka2


if(((reka2[0]==reka2[1]-1 && reka2[1]-1==reka2[2]-2 && reka2[2]-2==reka2[3]-3 && reka2[3]-3==reka2[4]-4 && reka2[0]==reka2[4]-4) &&
		(tabkolor2[0]==tabkolor2[1] && tabkolor2[1]==tabkolor2[2] && tabkolor2[2]==tabkolor2[3] && tabkolor2[3]==tabkolor2[4] && tabkolor2[0]==tabkolor2[4])) ||
         ((reka2[0]==2 && reka2[1]==3 && reka2[2]==4 && reka2[3]==5 && reka2[4]==14) && (tabkolor2[0]==tabkolor2[1] && tabkolor2[1]==tabkolor2[2] && tabkolor2[2]==tabkolor2[3] &&
         tabkolor2[3]==tabkolor2[4] && tabkolor2[0]==tabkolor2[4])))

		{
		rozdanie2=poker;
 	    cout<<"reka2 POKER"<<endl;
		for(int z=0; z<5;z++)
        cout<< z<< "twoj poker to: "<<reka2[z]<<endl;
		}

else if (reka2[0]==reka2[1] && reka2[2]==reka2[3] && reka2[0]==reka2[3] ||
                    reka2[0]==reka2[2] && reka2[3]==reka2[4] && reka2[0]==reka2[4] ||
                    reka2[0]==reka2[1] && reka2[3]==reka2[4] && reka2[0]==reka2[4] ||
                    reka2[0]==reka2[1] && reka2[2]==reka2[4] && reka2[0]==reka2[4] ||
                    reka2[1]==reka2[2] && reka2[3]==reka2[4] && reka2[1]==reka2[4] ||
                    reka2[0]==reka2[1] && reka2[2]==reka2[3] && reka2[0]==reka2[3])
			{
			rozdanie2=kareta;
			cout << "reka2 KARETA"<<endl;
			}

else if (reka2[0]==reka2[1]&&reka2[2]==reka2[0] && reka2[3]==reka2[4]
               || reka2[0]==reka2[1]&&reka2[3]==reka2[0] && reka2[2]==reka2[4]
               || reka2[0]==reka2[1]&&reka2[4]==reka2[0] && reka2[2]==reka2[3]
               || reka2[1]==reka2[2]&&reka2[3]==reka2[1] && reka2[0]==reka2[4]
               || reka2[1]==reka2[2]&&reka2[4]==reka2[1] && reka2[0]==reka2[3]
               || reka2[2]==reka2[3]&&reka2[4]==reka2[2] && reka2[0]==reka2[1])
       		{
            	rozdanie2=full;
            	cout<<"reka2 FULL"<<endl;
		    	if(reka2[0]==reka2[1]&&reka2[2]==reka2[0])
				{
					sumafull2=reka2[0]+reka2[1]+reka2[2];
					//cout<<"suma full2"<<sumafull2<<endl;
				}
				else if (reka2[0]==reka2[1]&&reka2[3]==reka2[0])
				{
					sumafull2=reka2[0]+reka2[1]+reka2[3];
					//cout<<"sumafull2 wynosi: "<<sumafull2<<endl;
				}
                else if (reka2[0]==reka2[1]&&reka2[4]==reka2[0])
				{
					sumafull2=reka2[0]+reka2[1]+reka2[4];
					//cout<<"sumafull2 wynosi: "<<sumafull2<<endl;
				}
                else if (reka2[1]==reka2[2]&&reka2[3]==reka2[1])
				{
					sumafull2=reka2[1]+reka2[2]+reka2[3];
					//cout<<"sumafull2 wynosi: "<<sumafull2<<endl;
				}
               else if (reka2[1]==reka2[2]&&reka2[4]==reka2[1])
			    {
				   sumafull2=reka2[1]+reka2[2]+reka2[4];
				   //cout<<"sumafull2 wynosi: "<<sumafull2<<endl;
			    }
               else if (reka2[2]==reka2[3]&&reka2[4]==reka2[2])
			    {
					sumafull2=reka2[2]+reka2[3]+reka2[4];
					//cout<<"sumafull2 wynosi: "<<sumafull2<<endl;
			    }
        }

else if(tabkolor2[0]==tabkolor2[1] && tabkolor2[1]==tabkolor2[2] &&
        tabkolor2[2]==tabkolor2[3] && tabkolor2[3]==tabkolor2[4])// && //tabkolor2[0]==tabkolor2[4])
        {
        rozdanie2=color;
        cout<< "rek2 KOLOR"<<endl;
        }


else if((reka2[0]==reka2[1]-1 && reka2[1]-1==reka2[2]-2 && reka2[2]-2==reka2[3]-3 && reka2[3]-3==reka2[4]-4) &&
        (reka2[0]==2 && reka2[1]==3 && reka2[2]==4 && reka2[3]==5 && reka2[4]==14))
        {
		rozdanie2=stret;
        cout<<"reka 2 STRET"<<endl;
        }


else if ((reka2[0]==reka2[1]&&reka2[2]==reka2[0] && reka2[3]!=reka2[4]) ||
				(reka2[0]==reka2[1]&&reka2[3]==reka2[0] && reka2[2]!=reka2[4])||
                (reka2[0]==reka2[1]&&reka2[4]==reka2[0] && reka2[2]!=reka2[3])|| // trojka
                (reka2[1]==reka2[2]&&reka2[3]==reka2[1] && reka2[0]!=reka2[4])||
				(reka2[1]==reka2[2]&&reka2[4]==reka2[1] && reka2[0]!=reka2[3])||
                (reka2[2]==reka2[3]&&reka2[4]==reka2[2] && reka2[0]!=reka2[1]))
       		 {
        		rozdanie2=trojka;
       			 cout<<"reka2 TROJKA"<<endl;
					if(reka2[0]==reka2[1]&&reka2[0]==reka2[2])
					{
					sumatrojka2=reka2[0]+reka2[1]+reka2[2];
					//cout<<"sumatrojka2 wynosi: "<<sumatrojka2<<endl;
					}
				 else if(reka2[0]==reka2[1]&&reka2[3]==reka2[0])
					{
					 sumatrojka2=reka2[0]+reka2[1]+reka2[3];
					 //cout<<"sumatrojka2 wynosi: "<<sumatrojka2<<endl;
					}
				 else if(reka2[0]==reka2[1]&&reka2[4]==reka2[0])
					{
					 sumatrojka2=reka2[0]+reka2[1]+reka2[4];
					 //cout<<"sumatrojka2 wynosi: "<<sumatrojka2<<endl;
					}
				 else if(reka2[1]==reka2[2]&&reka2[3]==reka2[1])
					{
					 sumatrojka2=reka2[1]+reka2[2]+reka2[3];
					// cout<<"sumatrojka2 wynosi: "<<sumatrojka2<<endl;
					}
				 else if(reka2[1]==reka2[2]&&reka2[4]==reka2[1])
					{
					 sumatrojka2=reka2[1]+reka2[2]+reka2[4];
					 //cout<<"sumatrojka2 wynosi: "<<sumatrojka2<<endl;
					}
				 else if(reka2[2]==reka2[3]&&reka2[4]==reka2[2])
					{
					 sumatrojka2=reka2[2]+reka2[3]+reka2[4];
					 //cout<<"sumatrojka2 wynosi: "<<sumatrojka2<<endl;
					}
      }

else if (reka2[0]==reka2[1] && reka2[2]==reka2[3] || reka2[0]==reka2[2]&& reka2[3]==reka2[4] || //dwie pary
        reka2[1]==reka2[2] && reka2[3]==reka2[4] || reka2[0]==reka2[1] && reka2[3]==reka2[4]||
        reka2[0]==reka2[1] && reka2[2]==reka2[4])
        {
        rozdanie2=pary2;
        cout<<"reka 2 DWIE PARY"<<endl;

        if(reka2[0]==reka2[1] && reka2[2]==reka2[3])
        {
            sumapary22=reka2[0]+reka2[1]+reka2[2]+reka2[3];
        }
        else if(reka2[0]==reka2[2] && reka2[3]==reka2[4])
        {
            sumapary22=reka2[0]+reka2[2]+reka2[3]+reka2[4];
        }
        else if(reka2[1]==reka2[2] && reka2[3]==reka2[4])
        {
            sumapary22=reka2[1]+reka2[2]+reka2[3]+reka2[4];
        }
        else if(reka2[0]==reka2[1] && reka2[3]==reka2[4])
        {
            sumapary22=reka2[0]+reka2[1]+reka2[3]+reka2[4];
        }
        else if(reka2[0]==reka2[1] && reka2[2]==reka2[4])
        {
            sumapary22=reka2[0]+reka2[1]+reka2[2]+reka2[4];
        }
//cout<<"sumapara22: "<<sumapary22<<endl;
        }


else if (reka2[0]==reka2[1] || reka2[0]==reka2[2] || reka2[0]==reka2[3] || reka2[0]==reka2[4]|| // para
         reka2[1]==reka2[2] || reka2[1]==reka2[3] || reka2[1]==reka2[4] ||
         reka2[2]==reka2[3] || reka2[2]==reka2[4]||
         reka2[3]==reka2[4])
         {
		  rozdanie2=para;
          cout<<"reka2 PARA"<< endl;
        if(reka2[0]==reka2[1])
        {
            sumapara2=reka2[0]+reka2[1];
        }
        else if(reka2[0]==reka2[2])
        {
            sumapara2=reka2[0]+reka2[2];
        }
        else if(reka2[0]==reka2[3])
        {
            sumapara2=reka2[0]+reka2[3];
        }
        else if(reka2[0]==reka2[4])
        {
            sumapara2=reka2[0]+reka2[4];
        }
        else if(reka2[1]==reka2[2])
        {
            sumapara2=reka2[1]+reka2[2];
        }
        else if(reka2[1]==reka2[3])
        {
            sumapara2=reka2[1]+reka2[3];
        }
        else if(reka2[1]==reka2[4])
        {
            sumapara2=reka2[1]+reka2[4];
        }
        else if(reka2[2]==reka2[3])
        {
            sumapara2=reka2[2]+reka2[3];
        }
        else if(reka2[2]==reka2[4])
        {
            sumapara2=reka2[2]+reka2[4];
        }
        else if(reka2[3]==reka2[4])
        {
            sumapara2=reka2[3]+reka2[4];
        }
         }


else if (reka2[0]!=reka2[1] && reka2[1]!=reka2[2] && reka2[2]!=reka2[3] && reka2[3]!=reka2[4])
            {
                rozdanie2=wysokakarta;
                max2=reka2[0];
                for (int pe=1; pe<5; pe++)
                if(max2<reka2[pe])
                max2=reka2[pe];

                cout<<"reka2 WYSOKA KARTA: "<<max2<<endl;
            }

//porównanie reki1 z 2
if (rozdanie1==rozdanie2)
{

if (rozdanie1==poker && rozdanie2==poker)
        {
        if (sumareka1>sumareka2)
			{
            cout<<"WYGRYWA reka 1"<<endl;
			}
        else if  (sumareka1<sumareka2)
				{
				cout<<"WYGRYWA reka 2"<<endl;
				}
        else
                cout<<"PODZIAL ZETONOW"<<endl;

            }
if (rozdanie1==kareta && rozdanie2==kareta)
    {
    if (sumareka1>sumareka2)
			{
            cout<<"WYGRYWA reka 1"<<endl;
			}
        else if  (sumareka1<sumareka2)
				{
				cout<<"WYGRYWA reka 2"<<endl;
				}
        else
                cout<<"PODZIAL ZETONOW"<<endl;

            }

if(rozdanie1==stret && rozdanie2==stret)
{
    if (sumareka1>sumareka2)
			{
            cout<<"WYGRYWA reka 1"<<endl;
			}
        else if  (sumareka1<sumareka2)
				{
				cout<<"WYGRYWA reka 2"<<endl;
				}
        else
                cout<<"PODZIAL ZETONOW"<<endl;

            }



if(rozdanie1==color && rozdanie2==color)
    {
if (sumareka1>sumareka2)
			{
            cout<<"WYGRYWA reka 1"<<endl;
			}
        else if  (sumareka1<sumareka2)
				{
				cout<<"WYGRYWA reka 2"<<endl;
				}
        else
                cout<<"PODZIAL ZETONOW"<<endl;

    }


if (rozdanie1==full && rozdanie2==full)
		{
		cout<<"sumafull1 to: "<<sumafull1<<endl;
		cout<<"sumafull2 to: "<<sumafull2<<endl;
		if(sumafull1>sumafull2)
			cout<<"wygrywa FULL reka1"<<endl;
		else if (sumafull2>sumafull1)
			cout<<"wygrywa FULL reka2"<<endl;
        else if (sumafull1=sumafull2)
            cout<<"PODZIAL ZETONOW"<<endl;
		}
if(rozdanie1==trojka && rozdanie2==trojka)
		{
        if(sumatrojka1>sumatrojka2)
			cout<<"wygrywa TROJKA reka1"<<endl;
		else if(sumatrojka1<sumatrojka2)
			cout<<"wygrywa TROJKA reka2"<<endl;
        else if(sumatrojka1=sumatrojka2)
            cout<<"PODZIAL ZETONOW"<<endl;
		}

if(rozdanie1==pary2  && rozdanie2==pary2)
{
        if(sumapary21>sumapary22)
        {
			cout<<"wygrywja DWIE PARY reka1"<<endl;
        }
		else if(sumapary21<sumapary22)
        {
			cout<<"wygrywa DWIE PARY reka2"<<endl;
        }
        else if(sumapary21=sumapary22)
        {
            cout<<"PODZIAL ZETONOW"<<endl;
        }
//cout<<"suma pary2 reka1:"<<sumapary21<<endl;
}

if(rozdanie1==para  && rozdanie2==para)
{
        if(sumapara1>sumapara2)
        {
			cout<<"wygrywa PARA reka1"<<endl;
        }
		else if(sumapara1<sumapara2)
        {
			cout<<"wygrywa PARA reka2"<<endl;
        }
        else if(sumapara1=sumapara2)
        {
            cout<<"PODZIAL ZETONOW"<<endl;
        }
}



if(rozdanie1==wysokakarta && rozdanie2==wysokakarta)//dołozyć war
		{
		if(max1>max2)
		{
			cout<<"wygrywa reka1 WYSOKA KARTA: "<<max1<<endl;
		}
		else if (max1<max2)
		{
			cout<<"wygrywa reka2 WYSOKA KARTA: "<<max2<<endl;
		}
		else if (max1=max2)
		{
			cout<<"PODZIAL ZETONOW"<<endl;

		}
		}

}
if(rozdanie1!=rozdanie2)
{

if   (rozdanie1==poker && rozdanie2==kareta ||
          rozdanie1==poker && rozdanie2==full ||
          rozdanie1==poker && rozdanie2==color || // kolor
          rozdanie1==poker && rozdanie2==stret||
          rozdanie1==poker && rozdanie2==trojka ||
          rozdanie1==poker && rozdanie2==pary2 ||
          rozdanie1==poker && rozdanie2==para||
          rozdanie1==poker && rozdanie2==wysokakarta)

			{
            	cout<<"reka1 wygrywa POKER"<<endl;
            }

if  (rozdanie1==kareta && rozdanie2==full ||
          rozdanie1==kareta && rozdanie2==color ||
          rozdanie1==kareta && rozdanie2==stret ||
          rozdanie1==kareta && rozdanie2==trojka ||
          rozdanie1==kareta && rozdanie2==pary2 ||
          rozdanie1==kareta && rozdanie2==para ||
          rozdanie1==kareta && rozdanie2==wysokakarta)
          {
          cout<<"reka1 wygrywa KARETA"<<endl;
          }

if   (rozdanie1==full && rozdanie2==color ||
		  rozdanie1==full && rozdanie2==stret ||
          rozdanie1==full && rozdanie2==trojka ||
          rozdanie1==full && rozdanie2==pary2 ||
          rozdanie1==full && rozdanie2==para ||
          rozdanie1==full && rozdanie2==wysokakarta)
			{
			cout<<"reka1 wygrywa FULL"<<endl;
			}
if  (rozdanie1==color && rozdanie2==stret ||
          rozdanie1==color && rozdanie2==trojka ||
          rozdanie1==color && rozdanie2==pary2 ||
          rozdanie1==color && rozdanie2==para ||
          rozdanie1==color && rozdanie2==wysokakarta)
          {
          cout<<"reka1 wygrywa KOLOR"<<endl;
          }
if  (rozdanie1==stret && rozdanie2==trojka ||
          rozdanie1==stret && rozdanie2==pary2 ||
          rozdanie1==stret && rozdanie2==para  ||
          rozdanie1==stret && rozdanie2==wysokakarta)
          {
          cout<<"reka1 wygrywa STRET"<<endl;
          }

if  (rozdanie1==trojka && rozdanie2==pary2 ||
          rozdanie1==trojka && rozdanie2==para ||
          rozdanie1==trojka && rozdanie2==wysokakarta)
          {
          cout<<"reka1 wygrywa TROJKA"<<endl;
          }

if  (rozdanie1==pary2 && rozdanie2==para ||
          rozdanie1==pary2 && rozdanie2==wysokakarta)
          {
          cout<<"reka1 wygrywa DWIE PARY"<<endl;
          }

if  (rozdanie1==para && rozdanie2==wysokakarta)
          {
           cout<<"reka1 wygrywa PARA"<<endl;
          }


if  (rozdanie2==poker && rozdanie1==kareta ||
          rozdanie2==poker && rozdanie1==full ||
          rozdanie2==poker && rozdanie1==color || // kolor
          rozdanie2==poker && rozdanie1==stret ||
          rozdanie2==poker && rozdanie1==trojka ||
          rozdanie2==poker && rozdanie1==pary2 ||
          rozdanie2==poker && rozdanie1==para ||
          rozdanie2==poker && rozdanie1==wysokakarta)
			{
            cout<<"reka2 wygrywa POKER"<<endl;
			}
// porównanie rozdania 2 karty
if  (rozdanie2==kareta && rozdanie1==full ||
          rozdanie2==kareta && rozdanie1==color ||
          rozdanie2==kareta && rozdanie1==stret ||
          rozdanie2==kareta && rozdanie1==trojka ||
          rozdanie2==kareta && rozdanie1==pary2 ||
          rozdanie2==kareta && rozdanie1==para ||
          rozdanie2==kareta && rozdanie1==wysokakarta)
          {
          cout<<"reka2 wygrywa KARETA"<<endl;
          }

if   (rozdanie2==full && rozdanie1==color ||
          rozdanie2==full && rozdanie1==stret ||
          rozdanie2==full && rozdanie1==trojka ||
          rozdanie2==full && rozdanie1==pary2 ||
          rozdanie2==full && rozdanie1==para ||
          rozdanie2==full && rozdanie1==wysokakarta)
          {
          cout<<"reka2 wygrywa FULL"<<endl;
          }

if   (rozdanie2==color && rozdanie1==stret ||
          rozdanie2==color && rozdanie1==trojka ||
          rozdanie2==color && rozdanie1==pary2 ||
          rozdanie2==color && rozdanie1==para ||
          rozdanie2==color && rozdanie1==wysokakarta)
          {
          cout<<"reka2 wygrywa KOLOR"<<endl;
          }
if   (rozdanie2==stret && rozdanie1==trojka ||
           rozdanie2==stret && rozdanie1==pary2 ||
           rozdanie2==stret && rozdanie1==para ||
           rozdanie2==stret && rozdanie1==wysokakarta)
          {
          cout<<"reka2 wygrywa STRET"<<endl;
           }

if   (rozdanie2==trojka && rozdanie1==pary2 ||
          rozdanie2==trojka && rozdanie1==para ||
          rozdanie2==trojka && rozdanie1==wysokakarta)
          {
          cout<<"reka2 wygrywa TROJKA"<<endl;
          }

if   (rozdanie2==pary2 && rozdanie1==para ||
          rozdanie2==pary2 && rozdanie1==wysokakarta)
          {
          cout<<"reka2 wygrywa DWIE PARY"<<endl;
          }

if   (rozdanie2==para && rozdanie1==wysokakarta)
          {
          cout<<"reka2 wygrywa PARA"<<endl;
          }


//	cout<<"suma kart reki1 to: "<<sumareka1<<endl;
//	cout<<"suma kart reki2 to: "<<sumareka2<<endl;


    }
//cout<<"suma kart reki1 to: "<<sumareka1<<endl;
//cout<<"suma kart reki2 to: "<<sumareka2<<endl;
//cout<<"sumafull1 to: "<<sumafull1<<endl;
//cout<<"sumafull2 to: "<<sumafull2<<endl;

system("PAUSE");
return 0;
}


