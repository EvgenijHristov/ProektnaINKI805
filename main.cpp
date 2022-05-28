#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
struct Profil
{
    string Nickname;
	int IDbroj;
	float nivo;
};
void Pecati(vector<Profil> v)
{
    for (int i=0; i<v.size(); i++)
    {
        cout<<"==============="<<endl;
        cout<<i+1<<"."<<" "<<"Nickname:";
        cout<<v[i].Nickname<<endl;
        cout<<"   "<<"Idbroj";
        cout<<v[i].IDbroj<<endl;
        cout<<"   "<<"Nivo:";
        cout<<v[i].nivo<<endl;

    }
}
vector<Profil>v;
int main()
{


Profil vnes;
    vnes.Nickname="BSD";
    vnes.IDbroj=123;
    vnes.nivo=32;
    v.push_back(vnes);
    vnes.Nickname="DSD";
    vnes.IDbroj=123;
    vnes.nivo=32;
    v.push_back(vnes);
    vnes.Nickname="ASD";
    vnes.IDbroj=123;
    vnes.nivo=32;
    v.push_back(vnes);
    vnes.Nickname="CSD";
    vnes.IDbroj=123;
    vnes.nivo=32;
    v.push_back(vnes);
    vnes.Nickname="ESD";
    vnes.IDbroj=123;
    vnes.nivo=32;
    v.push_back(vnes);
 cout<<"Ne sortiran:"<<endl;
 Pecati(v);
  sort(v.begin(), v.end(), [](Profil a, Profil b)
       {
		return a.Nickname < b.Nickname;
	});
 cout<<"==============="<<endl;
 cout<<"Sortiran:"<<endl;
Pecati(v);
 cout<<"==============="<<endl;
ofstream Datoteka;

	Datoteka.open("805Evgenij.txt");
	for(int i=0;i<v.size();++i)
    Datoteka<<v[i].Nickname<<v[i].IDbroj<<v[i].nivo;


    Datoteka.close();
return 0;
}
