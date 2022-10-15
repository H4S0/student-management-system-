#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void glavnimeni(){
    system("CLS");
	cout<<"*****************************************\n";
	cout<<"*    1.UNOS UCENIKA I OCJENA            *\n";
	cout<<"*    2.PROMJENA TRENUTNIH OCJENA        *\n";
	cout<<"*    3.PREGLEDAJTE UNESENE OCJENE       *\n";
	cout<<"*    4.SPERMITE PODATKE U DATOTEKU      *\n";
	cout<<"*    5.PROCITAJTE PODATKE IZ DATOTEKE   *\n";
	cout<<"*    6.PROCITAJTE ODREDJENE PODATKE     *\n";
	cout<<"*    7.IZLAZ                            *\n";
	cout<<"*****************************************\n";
}
void predmeti(){
    system("CLS");
    cout<<"************************\n";
	cout<<"*   1.PROGRAMIRANJE    *\n";
	cout<<"*   2.MATEMATIKA       *\n";
	cout<<"*   3.FIZIKA           *\n";
	cout<<"*   4.INFORMATIKA      *\n";
	cout<<"*   5.ENGLESKI         *\n";
	cout<<"*   6.IZLAZ            *\n";
	cout<<"************************\n";
}
void promjena(){
	cout<<"******1.PROMJENA UNUTAR PROGRAMA*******\n";
	cout<<"******2.PROMJENA U DATOTECI************\n";
}
void meni2(){
	cout<<"*********************************************\n";
	cout<<"*      ODABRALI STE IZMJENU OCJNA           *\n";
	cout<<"*     1.PROMJENA TRENUTNO UNESENIH OCIJENA  *\n";
	cout<<"*     2.PROMJENA PODATAKA IZ DATOTEKE        *\n";
	cout<<"*     3.IZLAZ                               *\n";
	cout<<"*********************************************\n";
}

int dasl(char x){
	if((x>96 and x<123) or (x>64 and x<91)) return 1;
	else return 0;
}

int prt(int x){
	if(x==48) return 0;
	if(x==49) return 1;
	if(x==50) return 2;
	if(x==51) return 3;
	if(x==52) return 4;
	if(x==53) return 5;
	if(x==54) return 6;
	if(x==55) return 7;
	if(x==56) return 8;
	if(x==57) return 9;
}

int main(){
	string ime,ui2,pom1,linija;
	char ui;
	int izb,i,izb2;
	int pom;
	float ocjp,ocjm,ocjf,ocji,ocje,brud;
	float proc;
	int bruc,bruh;
	int test,br=0;
	while(1){
	glavnimeni();
	do{
		cout<<"Unesite vrijednost(0-6): ";
		cin>>izb;
	}while(izb<0 || izb>7);
	switch(izb){
		case 1:
			system("CLS");
			cin.ignore();
			cout<<"Unesite broj ucenika u dnevniku: ";
			cin>>brud;
			cin.ignore();
			cout<<"Unesite ime i prezime ucenika: ";
			getline(cin,ime);
			pom1=ime;
			system("CLS");
         	do{
				cout<<"Unesite ocjenu iz programiranja(1-5): ";
				cin>>ocjp;
			}while(ocjp<1 or ocjp>5);
			do{
				cout<<"Unesite ocjenu iz matematike(1-5): ";
				cin>>ocjm;
			}while(ocjm<1 or ocjm>5);
			do{
				cout<<"Unesite ocjenu iz fizike(1-5): ";
				cin>>ocjf;
			}while(ocjf<1 or ocjf>5);
			do{
				cout<<"Unesite ocjenu iz informatike(1-5): ";
				cin>>ocji;
			}while(ocji<1 or ocji>5);
			do{
				cout<<"Unesite ocjenu iz engleskog(1-5): ";
				cin>>ocje;
			}while(ocje<1 or ocje>5);
		system("CLS");
		break;
}
switch(izb){
		case 3:
			if(brud==0){
				cout<<"Molimo unesite podatke u opciji br.1!!"<<endl;
			}
			else{
				cout<<"Broj ucenika u dnevniku: "<<brud<<endl;
		        cout<<"Ime i prezime ucenika: "<<pom1<<endl;
	        	cout<<"Ocjena iz programiranja: "<<ocjp<<endl;
	          	cout<<"Ocjena iz matematike: "<<ocjm<<endl;
	          	cout<<"Ocjena iz fizike: "<<ocjf<<endl;
		        cout<<"Ocjena iz informatike: "<<ocji<<endl;
		        cout<<"Ocjena iz engleskog: "<<ocje<<endl;
		        cout<<"Prosjek ocjena je "<<proc<<endl;
		    }
		system("PAUSE");
		system("CLS");
		break;
		case 4:
		cout<<"Da li ste sigurni da zelite spremiti podatke u datoteku(unesite znak d ako jeste ili n ako niste): ";
		cin>>ui;
		if(ui=='d' or ui=='D'){
			ofstream dat("ocj.txt",ios::app);
			if(dat.is_open()){
			dat<<"                                   "<<endl;
			dat<<"Broj ucenika u dnevniku:"<<brud<<endl;
			dat<<"Ime i prezime ucenika "<<pom1<<endl;
		    dat<<"Ocjena iz programiranja "<<ocjp<<endl;
		    dat<<"Ocjena iz matematike "<<ocjm<<endl;
		    dat<<"Ocjena iz fizike "<<ocjf<<endl;
		    dat<<"Ocjena iz informatike "<<ocji<<endl;
		    dat<<"Ocjena iz engleskog "<<ocje<<endl;
		    dat<<"Prosjek ocjena je "<<proc<<endl;
		    cout<<"                                    \n"; 
		    cout<<"Datoteka je kreirana! "<<endl;
		    dat.close();
		}
		}
		if(ui=='n' or ui=='N'){
			cout<<"Podaci nisu spremljeni!!"<<endl;
		}
		system("PAUSE");
		system("CLS");
		break;
		linija=pom1,ocjp,ocjm,ocjf,ocji,ocje,proc;
		case 5:
			ifstream dat2("ocj.txt");
			if(dat2.is_open()){
				while(getline(dat2,linija)){
					cout<<linija<<endl;
				}
				dat2.close();
		}
		else{
			cout<<"Nisam pronasao datoteku!";
		}
		system("PAUSE");
		system("CLS");
		break;
}
	proc=((ocjp+ocjm+ocjf+ocji+ocje)/5);
    switch(izb){
		case 2:
			if(brud==0){
				cout<<"Molimo prvo odradite unos ucenika!"<<endl;
			}
			else{
			do{
				predmeti();
				cout<<"Unesite predmet iz kojeg zelite promjeniti ocjenu: ";
				cin>>izb2;
				switch(izb2){
					case 1:
						cout<<"Trenutna ocjena iz programiranja je " << ocjp<<endl;
						cout<<" \n";
						cout<<"Unesite novu ocjenu: ";
						cin>>ocjp;
						system("CLS");
						break;
					case 2:
						cout<<"Trenutna ocjena iz matematike je "<<ocjm<<endl;
						cout<<" \n";
						cout<<"Unesite novu ocjenu: ";
						cin>>ocjm;
						system("CLS");
						break;
					case 3:
						cout<<"Trenutna ocjena iz fizike je "<<ocjf<<endl;
						cout<<" \n";
						cout<<"Unesite novu ocjenu: ";
						cin>>ocjf;
						system("CLS");
						break;
					case 4:
						cout<<"Trenutna ocjena iz informatike je "<<ocji<<endl;
						cout<<" \n";
						cout<<"Unesite novu ocjenu: ";
						cin>>ocji;
						system("CLS");
						break;
					case 5:
						cout<<"Trenutna ocjena iz engleskog je "<<ocje<<endl;
						cout<<" \n";
						cout<<"Unesite novu ocjenu: ";
						cin>>ocje;
						system("CLS");
						break;
				}
			}while(izb2!=6);
	        }
	        system("PAUSE");
		system("CLS");
		break;
	    proc=((ocjp+ocjm+ocjf+ocji+ocje)/5);
	    break;
	    case 6:
	    	ifstream dat5("ocj.txt",ios::in);
	    	if(dat5.is_open()){
	    		cout<<"Unesite broj ucenika(u dnevniku): "<<endl;
	    		cin>>bruc;
	    		while(getline(dat5,linija)){
	    			for(i=0;i<=linija.length();i++){
	    				if(test==1){
	    					break;
						}
	    				if(linija[i]==':'){
	    					if((i+2)==linija.length()){
	    				    bruh=linija[i+1];
	    					bruh=prt(bruh);
	    					}
	    					else{
	    						bruh=linija[i+1];
	    						bruh=prt(bruh);
	    						bruh=bruh*10;
	    						pom=linija[i+2];
	    						pom=prt(pom);
	    						bruh=bruh+pom;
							}
	    					if(bruh==bruc){
	    						cout<<" \n";
	    						test=1;
							}
						}
					}
					if(test==1 && br<9){
						cout<<linija<<endl;
						br++;
					}
				}
				if(bruc!=bruh){
					cout<<"Ucenik ne postoji!\n";
				}
			}
			dat5.close();
			test=0;
			br=0;
			system("PAUSE");
		break;
	}
	switch(izb){
		case 7:
		    return 0;
		    break;
    }
}
	return 0;
}
