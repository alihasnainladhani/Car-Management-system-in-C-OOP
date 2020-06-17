#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<ctime>
#include<time.h>
using namespace std;
void gotoxy(int x,int y)
{
COORD axis;
axis.X=x;
axis.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),axis);
}
//for fashion
void design()
{
//car head
cout<<"\t   --------------------"<<endl;
int i;
for(i=0;i<4;i++)
{
cout<<"\t   |                  |"<<endl;
if(i==1)
{
cout<<"\t   !      CAR         !"<<endl;
}

    }
    cout<<"\t   --------------------"<<endl;
    //body
    cout<<" ---------------------------------------------"<<endl;
    for(i=0;i<7;i++)
{
    cout<<" |                                           |"<<endl;
}
cout<<" ---------------------------------------------"<<endl;
//tyres turn
cout<<"     * *                               * *     "<<endl;
cout<<"   ***|***                           ***|***  "<<endl;
cout<<"   *--*--*                           *--*--*  "<<endl;
cout<<"   ***|***                           ***|***  "<<endl;
cout<<"     * *                               * *     "<<endl;
}
class car
{
//member datas:
protected:
char type[4] , color[20] , fueltype[7] , cn[20];
float tax,price,totalprice; //where tax=gst amount
char registrationnumber[15]; //this also contain special characters
int noofgears;

//member functions::
public:
virtual void Scarname()=0;

virtual void assigncolor()=0;

virtual void assignnoofgear()=0;

virtual void assignfueltype()=0;

virtual void assigntype()=0;
   
    virtual void assignprice()=0;

virtual void assigntax()=0;

virtual void assignregno()=0;

virtual void Gcarname()=0;

virtual inline void displaytype()=0;

virtual inline void displaynoofgear()=0;

virtual inline void displayfueltype()=0;

virtual inline void displaytprice()=0;

virtual inline void displaycolor()=0;

virtual inline void displaytax()=0;

virtual inline void displayprice()=0;

virtual inline void displayregno()=0;

};

class tyres
{
//member datas
   protected:
   int nooftyres;
   float warranty[4]; //setted default by 4 but in getter setter func it is taken as per no of tyres //all tyres may or may not have same warrany
   char company[4][15]; // may be the car is old so it may have all different tyres
   
    //member functions
    virtual void assignnnot()=0;
   
virtual void assignwarranty()=0;
   
  virtual void assigncompany()=0;
public:

    virtual inline void displaynot()=0;

virtual void displaycompany()=0;

virtual void displaywarranty()=0;
};  
   
class brand:virtual public car
{
//member datas
protected:
char name[20]; //name=brand name
float lrange,rrange;
int yearsince;

//member functions

virtual void assignbrand()=0;

virtual void assignyearsince()=0;

virtual void assignrange()=0;

public:
virtual inline void displaybrand()=0;

virtual inline void displayyearsince()=0;

virtual inline void displayrange()=0;
};
   
class model :public virtual brand
{  
    //member datas
    protected:
    int year;
    char enginenumber[20];//as engone number contains characters too

//member functions
virtual void assignyear()=0;
virtual void assignengno()=0;
public:
virtual void displayyear()=0;
virtual void displayengno()=0;

};

class customer :virtual public car,virtual public tyres ,virtual public model,virtual public brand
{
public:

    char cname[30] , address[40] , cnic[18] , pno[14] , licensen[10];

    void assigncolor();//CAR CLASS FUNCTION

void Scarname();

void assignnoofgear();

void assignfueltype();

void assigntype();
   
void assignprice();

void assigntax();

void assignregno();

inline void Gcarname();

inline void displaytype();

inline void displaynoofgear();

inline void displayfueltype();

inline void displaytprice();

inline void displaycolor();

inline void displaytax();

inline void displayprice();

inline void displayregno();//CAR CLASS FUNCTION

    void assignnnot();//tyre class
   
void assignwarranty();
   
  void assigncompany();

    inline void displaynot();
   
void displaycompany();

void displaywarranty();//tyre class

void assignbrand();//brand class

void assignyearsince();

void assignrange();

inline void displaybrand();

inline void displayyearsince();

inline void displayrange();//brand class

void assignyear();//model class

void assignengno();

void displayyear();

void displayengno();//model class
//yeha tk virtuals karaye add

//own class funcs()
    void assignname();// customer class

void assignaddress();

void assigncnic();

void assignpno();

//will be entered by owner only
void assignlicenseno();


inline void displaymydetails();

void displayall();

void costumermode();//customer class

};
    void customer::Scarname()
    {
    cout<<"--------------------------"<<endl;
    cout<<"| Please enter car name: |="<<endl;
cout<<"--------------------------";
fflush(stdin);
gotoxy(30,1);
cin.getline(cn,19);      
cout<<endl;
}

void customer::assigncolor()
{
cout<<"------------------------------------------"<<endl;
cout<<"| What is the COLOR of this SUPERB CAR!: |="<<endl;
cout<<"------------------------------------------";
fflush(stdin);
gotoxy(44,1);
cin.getline(color,19);
cout<<endl;
}

void customer:: assignnoofgear()
{
a:
try{
cout<<"----------------------------------------------"<<endl;
cout<<"| How many gears does this SUPERB CAR has !: |="<<endl;
cout<<"----------------------------------------------";
gotoxy(55,1);
cin>>noofgears;    
cout<<endl;
if(noofgears>0)
{}
else
throw(noofgears);
    }
    catch(...)
    {
    cout<<endl<<"You entered wrong: "<<endl;
goto a;
    }
}

void customer::assignfueltype()
{
char c;
cout<<"--------------------------------------------------";
cout<<"\n| What is the FUEL type of this SUPERB CAR!      |"<<endl;
cout<<"| press g/G <- GAS p/P <- PETROL d/D <- DEISEL   |"<<endl;
cout<<"| Your CHOICE:                                   |="<<endl;
cout<<"--------------------------------------------------";
gotoxy(55,3);
cin>>c;  
if (c=='g' || c=='G')
{
strcpy(fueltype,"GAS");
cout<<endl;
}

else if (c=='d' || c =='D')
{
strcpy(fueltype,"DEISEL");
cout<<endl;
}

else if(c=='p' || c=='P')
{
strcpy(fueltype,"PETROL");
cout<<endl;
}


}

void customer::assigntype()
{
char c;
cout<<"------------------------------------------------------------\n";
cout<<"|Enter The Type Of This SUPERB CAR i.e NEW or OLD          |"<<endl;
cout<<"|Type O/o ->OLD or N/n ->NEW                               |"<<endl;
cout<<"|Your CHOICE:                                              |"<<endl;
cout<<"------------------------------------------------------------";
gotoxy(15,3);
cin>>c;
    if(c=='o' || c=='O')
{
strcpy(type,"OLD");
cout<<endl;
}
else if(c=='n' || c=='N')
{
strcpy(type,"NEW");
cout<<endl;
}
    }
     
    void customer::assignprice()
{
cout<<"------------------------------------------"<<endl;
cout<<"| What is the price of this SUPERB CAR!: |"<<endl;
cout<<"| XX,XXX,XXX                             |="<<endl;
cout<<"------------------------------------------";
gotoxy(44,2);
cin>>price;
cout<<endl;
}

void customer::assigntax()
{
float taxperc;
cout<<"-------------------------------------------------------"<<endl;
cout<<"| Sir What is the Tax Percent to charge on this CAR!: |="<<endl;
cout<<"-------------------------------------------------------";
gotoxy(56,1);
cin>>taxperc; //gst percent on this car
tax=price*(taxperc/100);
cout<<endl;
totalprice=tax+price;
}

void customer::assignregno()
{
cout<<"------------------------------------------------"<<endl;
cout<<"| What's the Registration Number of this CAR!: |="<<endl;
cout<<"------------------------------------------------";
gotoxy(50,1);
fflush(stdin);
cin.getline(registrationnumber,14);
cout<<endl;
}
void customer::Gcarname()
{
cout<<"Car="<<cn<<endl;
}
void customer::displaytype()
{
cout<<"type="<<type<<endl;
}

    void customer::displaynoofgear()
{
cout<<"Gears:"<<noofgears<<endl;
}

void customer:: displayfueltype()
{
cout<<"FUEL TYPE:"<<fueltype<<endl;
}

void customer::displaytprice()
{
totalprice=tax+price;
cout<<"TOTAL-PRICE:"<<totalprice<<endl;
}

void customer::displaycolor()
{
cout<<"COLOR:"<<color<<endl;
}

void customer::displaytax()
{
cout<<"TAX:"<<tax<<" RS"<<endl;
}

void customer::displayprice()
{
cout<<"PRICE:"<<price<<" RS"<<endl;
cout<<"Total After gst:"<<totalprice<<"RS"<<endl;
}

void customer::displayregno()
{
cout<<"Registration Number:"<<registrationnumber<<endl;
}
//
    void customer::assignnnot()
    {
    cout<<"---------------------------------------------"<<endl;
    cout<<"| How Many TYRES does this SUPERB CAR! has: |="<<endl;
    cout<<"---------------------------------------------";
    gotoxy(58,1);
    cin>>nooftyres;
    cout<<endl;
}

void customer::assignwarranty()
{
int i;
cout<<"How Many Years!!\n";
for (i=0;i<nooftyres;i++)
{
cout<<"TYRE "<<i+1<<" WARRANTY:";
cin>>warranty[i];
cout<<endl;
}

}

void customer::assigncompany()
{
int i;
for (i=0;i<nooftyres;i++)
{
cout<<"TYRE "<<i+1<<" COMPANY:";
fflush(stdin);
cin.getline(company[i],14);
cout<<endl;
}

}

void customer::displaynot()
{
cout<<"Number of TYRES:"<<nooftyres<<endl;
}

void customer::displaycompany()
{
int i=0;
for (i=0;i<nooftyres;i++)
{
cout<<"TYRE "<<i+1<<" COMPANY:"<<company[i]<<endl;
if(i==(nooftyres-1))
{
cout<<endl;
}
      }
}

void customer::displaywarranty()
{
int i=0;
for (i=0;i<nooftyres;i++)
{
cout<<"TYRE "<<i+1<<" WARRANTY:"<<warranty[i]<<endl;
if(i==(nooftyres-1))
{
cout<<endl;
}
}
}
//
    void customer::assignbrand()
{
cout<<"------------------------------------------"<<endl;
cout<<"| What is the BRAND of this SUPERB CAR!: |="<<endl;
cout<<"------------------------------------------";
gotoxy(46,1);
fflush(stdin);
cin.getline(name,19);
cout<<endl;
}

void customer::assignyearsince()
{
cout<<"---------------------------"<<endl;
cout<<"| This BRAND ESTD since!: |="<<endl;
cout<<"---------------------------";
gotoxy(37,1);
cin>>yearsince;
cout<<endl;
}

void customer::assignrange()
{
cout<<"--------------------------------------------------"<<endl;
cout<<"| What is the lower range of this SUPERB model: |=";
cout<<"\n--------------------------------------------------"<<endl;  
gotoxy(55,1);
cin>>lrange;
cout<<"--------------------------------------------------"<<endl;
cout<<"| What is the upper range of this SUPERB model: |="<<endl;
cout<<"--------------------------------------------------";
gotoxy(55,3);
cin>>rrange;
cout<<endl<<endl<<endl;
if (rrange<price)
{
   system("cls");
            cout<<"--------------------------------------------------------------------"<<endl;
cout<<"| Sir!sorry the upper range is not meeting the price of this car   |"<<endl;
cout<<"| Re-Enter the upper range of this SUPERB model:                   |="<<endl;
cout<<"--------------------------------------------------------------------";
gotoxy(55,2);
cin>>rrange;
}
cout<<endl;
}

void customer::displaybrand()
{
cout<<"BRAND:"<<name<<endl;
}

    void customer::displayyearsince()
{
cout<<"YEAR SINCE:"<<yearsince<<endl;
}

    void customer::displayrange()
{
cout<<"RANGES:"<<lrange<<"-"<<rrange<<"RS"<<endl;
}

//
    void customer::assignyear()
{
cout<<"-------------------------------------------"<<endl;
cout<<"| MANUFACTURING YEAR of this SUPERB CAR!: |="<<endl;
cout<<"-------------------------------------------";
gotoxy(45,1);
cin>>year;
if(year<yearsince)
{
cout<<"\n\n--------------------------------------------------------"<<endl;
cout<<"| Sir!  sorry BRAND doesnt exist in this Year          |"<<endl;
cout<<"| Re-Enter the MANUFACTURING YEAR of this SUPERB car!: |="<<endl;
cout<<"--------------------------------------------------------";
gotoxy(60,4);
cin>>year;
}
cout<<endl;
}

void customer::assignengno()
{
cout<<"--------------------------------------"<<endl;
cout<<"| ENGINE NUMBER of this SUPERB CAR!: |="<<endl;
cout<<"--------------------------------------";
fflush(stdin);
gotoxy(45,1);
cin.getline(enginenumber,19);
cout<<endl;
}

    void customer::displayyear()
{
cout<<"MODEl:"<<year<<endl;
}

void customer::displayengno()
{
cout<<"ENGINE NUMBER:"<<enginenumber<<endl;
}
//yeha tak pure virtuals khatam

    void customer::assignname()
    {
    cout<<"--------------------------"<<endl;
    cout<<"| SIR What's your Name!: |="<<endl;
    cout<<"--------------------------";
    fflush(stdin);
    gotoxy(30,7);
    cin.getline(cname,29);
    cout<<endl;
}

void customer::assignaddress()
{
cout<<"-------------------------"<<endl;
cout<<"| Your Address please!: |="<<endl;
cout<<"-------------------------";
fflush(stdin);
gotoxy(30,10);
cin.getline(address,39);
cout<<endl;
}

void customer::assigncnic()
{
cout<<"--------------------------"<<endl;
cout<<"| CNIC NUMBER please!:  |"<<endl;
cout<<"| Format:xxxxx-xxxxxx-x |"<<endl;
cout<<"--------------------------";
fflush(stdin);
gotoxy(30,13);
cin.getline(cnic,15);
cout<<endl;
}
//will be entered by owner only
void customer::assignlicenseno()
{
cout<<"---------------------------"<<endl;
cout<<"| LICENSE Number please!: |="<<endl;
cout<<"---------------------------";
fflush(stdin);
gotoxy(30,18);
cin.getline(licensen,9);
cout<<endl;
}

void customer::assignpno()
{
cout<<"\n------------------------"<<endl;
cout<<"| Phone Number Please: |="<<endl;
cout<<"------------------------";
fflush(stdin);
gotoxy(30,17);
cin.getline(pno,13);
}
 void customer::displaymydetails()
{
//gotoxy(40,1);
cout<<endl;
cout<<"Costumer Details\n\n\n"<<endl;
cout<<"NAME:"<<cname<<"\tADDRESS:"<<address<<endl;
cout<<"CNIC:"<<cnic<<"\tPhone Number:"<<pno<<endl;
}

void customer:: displayall()
{
cout<<"\nCAR Details:\n";
Gcarname();
displaytype();
displayprice();
displaytax();
displaytprice();
cout<<endl;
displayregno();
displaycolor();
displayfueltype();
displaynoofgear();
cout<<endl;
cout<<"\nBRAND Details:\n";
displaybrand();
displayyearsince();
displayrange();cout<<endl;
cout<<"\nMODEL Details:\n";
displayyear();
displayengno();cout<<endl;
cout<<"\nTYRES Detail:\n";
displaynot();
displaycompany();
displaywarranty();
cout<<endl;
}

void customer:: costumermode()
{
system("color 5f");
gotoxy(35,0);
cout<<"Costumer Mode Activated!!\n";
cout<<"\nNOTE!  Make Sure To Enter Correctly As You Cannot Change It!\n";
cout<<"\nEnter Your Details to Proceed:"<<endl<<endl;
assignname();
assignaddress();
assigncnic();
assignpno();
cout<<endl;
displaymydetails();
cout<<endl<<"THANKS "<<cname;
cout<<"\n\nPress Any Key To Proceed:";
getch();
system("cls");
design();
gotoxy(55,0);
cout<<cname;
gotoxy(55,1);
cout<<"Recently INVENTED CARS are displayed here!You May View It";
}

class owner :virtual public customer
{

   //member datas
   protected:
   char ownername[30];
   char carstatus[8]; // legal or illegal
   
   //member functions
   public:
    int noc;  //no of cars
    owner();
void assignowname();
void displayoname();

void assignnoc();
void displaynoc();

//not given this acces to customer
void assigncs();
void displaycs();

//mutators:
//by car class

void changetprice();


//by owners use:
//mutators

void changeall();

void changebychoice();

   //displayer for owner its different as it contains owners things too like carstatus owner info etc etc:
    void displayoall();

void displaybyochoice();

    void ownerdisplayer();
   
//assigner
void assigner();

//int mode();

//void before_assignment();

void E_Time();

void write_data();

void readall_data();
void readallS_data();
void sell();

void read_CarDetail();
void readS_CarDetail();
void read_BrandDetail();
void readS_BrandDetail();
void read_ModelDetail();
void readS_ModelDetail();
void read_TyreDetail();
void readS_TyreDetail();
void updateall();
void displaychoices();
};
void owner::assignowname()
{
//ownername="XYZ";	
}   
void owner:: displayoname()
{
cout<<"Respected Owner! "<<ownername<<"="<<endl;
}

/*void owner::assignnoc()
{
cout<<"SIR! Number of cars in your Show Room:";
cin>>noc;
cout<<endl;
}
void owner::displaynoc()
{
cout<<"Number of Cars:"<<noc<<endl;
}*/

//not given this acces to customer
void owner::assigncs()
{
    char c;
    cout<<"-----------------------------------------------------------"<<endl;
cout<<"| Whats the status of this SUPERB CAR!"<<"Is it legal?:        |"<<endl;
cout<<"| Press l/L <- if legal:                                   |"<<endl;
cout<<"------------------------------------------------------------";
gotoxy(30,2);
cin>>c;
if (c=='l' || c=='L')
   {
   strcpy(carstatus,"LEGAL");
}
else
{
strcpy(carstatus,"IL-LEGAL");
}
}

void owner::displaycs()
{
cout<<"Car Status:"<<carstatus<<endl;
}
//mutators:
//by car class
void owner::changetprice()
{
cout<<"What is the price of this SUPERB CAR!:";
cin>>price;
float taxperc;
cout<<"Sir What is the Tax Percent to charge on this CAR!:";
cin>>taxperc; //gst psercent on this car
tax=price*(taxperc/100);
cout<<endl;
totalprice=price+tax;
}


//bby owners use:
//mutators

void owner::changeall()
{
cout<<"\nCAR Details:\n";
Scarname();
system("cls");
assigntype();
system("cls");
assignprice();
system("cls");
assigntax();
system("cls");
changetprice();
system("cls");
assignregno();
system("cls");
cout<<"\nBRAND Details:\n";
assignbrand();
system("cls");
assignyearsince();
system("cls");
assignrange();
system("cls");
cout<<"\nMODEL Details:\n";
assignyear();
system("cls");
assignengno();
system("cls");
cout<<"\nTYRES Detail:\n";
assignnnot();
system("cls");
assigncompany();
system("cls");
assignwarranty();
system("cls");
}
void owner::displaychoices()
{
int a;
gotoxy(55,2);
cout<<"1)CAR Details:";
gotoxy(55,3);
cout<<"   type of car.";
gotoxy(55,4);
cout<<"   Price without gst.";
gotoxy(55,5);
cout<<"   GST.";
gotoxy(55,6);
cout<<"   TOTAL AFTER GST.";
gotoxy(55,7);
cout<<"   Registration Number.";
gotoxy(55,8);
cout<<"   color.";
gotoxy(55,9);
cout<<"   FUEL TYPE.";
gotoxy(55,10);
cout<<"   Number of gears.";
gotoxy(55,11);
cout<<"2)BRAND Details:";
gotoxy(55,12);
cout<<"   Brand name.";
gotoxy(55,13);
cout<<"   Brand ESTD.";
gotoxy(55,14);
cout<<"   Your Range.";
gotoxy(55,15);
cout<<"3)MODEL Details:";
gotoxy(55,16);
cout<<"   Model year.";
gotoxy(55,17);
cout<<"   Engine number.";
gotoxy(55,18);
cout<<"4)TYRES Detail:";
gotoxy(55,19);
cout<<"    Number of Tyres.";
gotoxy(55,20);
cout<<"   Company.";
gotoxy(55,21);
cout<<"   Warranty.";
gotoxy(55,22);
cout<<"5)Every thing.";
gotoxy(55,23);
cout<<"Your CHOICE:";
gotoxy(80,23);
cin>>a;
switch(a)
{
case 1:
system("cls");
read_CarDetail();
break;

case 2:
system("cls");
read_BrandDetail();
break;

case 3:
system("cls");
read_ModelDetail();
break;

case 4:
system("cls");
read_TyreDetail();
break;

case 5:
system("cls");
readall_data();
break;

default:
cout<<"INVALID INPUT!!"<<endl;
gotoxy(55,25);
   
}
}
void owner::changebychoice()
{
int b;
cout<<"\nCAR Details:\n";
cout<<"1)types of car.\n2)Price without gst.\n3)GST.\n4)TOTAL AFTER GST.\n5)Registration Number.";
cout<<"\nBRAND Details:\n";
cout<<"6)Brand name.\n7)Brand ESTD.\n8)Your Range.";
cout<<"\nMODEL Details:\n";
cout<<"9)Model year.\n10)Engine number.";
cout<<"\nTYRES Detail:\n";
cout<<"11)Number of Tyres.\n12)Company\n.13)Warranty.";
cout<<"\n14)Color.\n15)Fuel type.\n16)Gears.\n17)Car Status.\n18)Car name. \n19)Everything"<<"\nYour CHOICE:";
cin>>b;

switch(b)
{
case 1:
system("cls");
assigntype();
break;

case 2:
system("cls");
        assignprice();
break;

case 3:
system("cls");
        assigntax();
break;

case 4:
system("cls");
       changetprice();
break;

case 5:
system("cls");
        assignregno();
break;

case 6:
system("cls");
assignbrand();
break;

case 7:
system("cls");
    assignyearsince();
break;

case 8:
system("cls");
assignrange();
break;

case 9:
system("cls");
assignyear();
break;

case 10:
system("cls");
assignengno();
break;

case 11:
system("cls");
assignnnot();
break;

case 12:
system("cls");
        assigncompany();
break;

case 13:
system("cls");
assignwarranty();
break;

case 14:
system("cls");
assigncolor();
break;

case 15:
system("cls");
assignfueltype();
break;

case 16:
system("cls");
assignnoofgear();
break;

case 17:
system("cls");
assigncs();
break;

case 18:
system("cls");
Scarname();
break;

case 19:
system("cls");
changeall();
default:
cout<<"invalid input!!";

}
    }
   
   void owner::updateall()
   {
   char c;
   a:
   char eng_num[20];
   ifstream fin;
   ofstream fout;
   fin.open("STORE.dat",ios::in|ios::binary);
   if(!fin)
   cout<<endl<<"File not found: ";
   else
   {
   fout.open("temp.dat",ios::ate|ios::binary);
   fin.read((char*)this,sizeof(*this));
   cout<<endl<<"Enter engine number of a particular car to change the record: ";
   cin>>eng_num;
   while(!fin.eof())
   {
   if(strcmp(enginenumber,eng_num)==0)
   {
   changebychoice();
   }
   fout.write((char*)this,sizeof(*this));
   fin.read((char*)this,sizeof(*this));
   }
   }
   fin.close();
   fout.close();
   remove("STORE.dat");
   rename("temp.dat","STORE.dat");
   cout<<endl<<"Do you want to update any thing more( Y/N ): "<<endl;
   cin>>c;
   if(c=='y'||c=='Y')
   goto a;
   else 
   cout<<endl<<"Successfully updated: ";
   }
   //displayer for owner its different as it contains owners things too like carstatus owner info etc etc:
   void owner::displayoall()
{
cout<<"\nCAR Details:\n";
Gcarname();
displaytype();
displayprice();
displaytax();
displaytprice();
cout<<endl;
displayregno();
displaycolor();
displayfueltype();
displaynoofgear();
displaycs();
cout<<endl;
cout<<"\nBRAND Details:\n";
displaybrand();
displayyearsince();
displayrange();cout<<endl;
cout<<"\nMODEL Details:\n";
displayyear();
displayengno();cout<<endl;
cout<<"\nTYRES Detail:\n";
displaynot();
displaycompany();
displaywarranty();
cout<<"\nOWNER DETAILS:\n";
displayoname();
//displaynoc();
displaycs();
cout<<endl;
}

void owner::read_CarDetail()
{
cout<<endl<<"Record of unsold cars: "<<endl<<endl<<endl;
ifstream fin;
fin.open("STORE.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
Gcarname();
displaytype();
displayprice();
displaytax();
displaytprice();
displayregno();
displaycolor();
displayfueltype();
displaynoofgear();
displaycs();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();
}
void owner::readS_CarDetail()
{
ifstream fin;	
cout<<endl<<"Record of sold cars: "<<endl<<endl<<endl;
fin.open("SELL.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displaymydetails();
displaytype();
displayprice();
displaytax();
displaytprice();
displayregno();
displaycolor();
displayfueltype();
displaynoofgear();
displaycs();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();	
}
void owner::read_BrandDetail()
{
cout<<endl<<"Record of unsold cars: "<<endl<<endl<<endl;
ifstream fin;
fin.open("STORE.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displaybrand();
displayyearsince();
displayrange();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();
}
void owner::readS_BrandDetail()
{
ifstream fin;	
cout<<endl<<"Record of sold cars: "<<endl<<endl<<endl;
fin.open("SELL.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displaymydetails();
displaybrand();
displayyearsince();
displayrange();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();	
}
void owner::read_ModelDetail()
{
cout<<endl<<"Record of unsold cars: "<<endl<<endl;
ifstream fin;
fin.open("STORE.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displayyear();
displayengno();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();
}
void owner::readS_TyreDetail()
{
	ifstream fin;
cout<<endl<<"Record of sold cars: "<<endl<<endl;
fin.open("SELL.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displaymydetails();
displayyear();
displayengno();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();
}
void owner::read_TyreDetail()
{
cout<<endl<<"Record of unsold cars: "<<endl<<endl;
ifstream fin;
fin.open("STORE.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displaynot();
    displaycompany();
displaywarranty();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();
}

void owner::readall_data()
{
cout<<endl<<"Record of unsold cars: "<<endl<<endl<<endl;
ifstream fin;
fin.open("STORE.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displayoall();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();
}
void owner::readallS_data()
{
ifstream fin;
cout<<endl<<"Record of sold cars: "<<endl<<endl<<endl;
fin.open("SELL.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displaymydetails();
displayoall();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();	
}
void owner::displaybyochoice()
{
int a;
gotoxy(20,1);
cout<<"-------------------------";
gotoxy(20,2);
cout<<"|1)CAR Details:         |";
gotoxy(20,3);
cout<<"|   types of car.       |";
gotoxy(20,4);
cout<<"|   Price without gst.  |";
gotoxy(20,5);
cout<<"|   GST.                |";
gotoxy(20,6);
cout<<"|   TOTAL AFTER GST.    |";
gotoxy(20,7);
cout<<"|   Registration Number.|";
gotoxy(20,8);
cout<<"|   color.              |";
gotoxy(20,9);
cout<<"|   FUEL TYPE.          |";
gotoxy(20,10);
cout<<"|   Number of gears.    |";
gotoxy(20,11);
cout<<"|   Car Status.         |";
gotoxy(20,12);
cout<<"|2)BRAND Details:       |";
gotoxy(20,13);
cout<<"|   Brand name.         |";
gotoxy(20,14);
cout<<"|   Brand ESTD.         |";
gotoxy(20,15);
cout<<"|   Your Range.         |";
gotoxy(20,16);
cout<<"|3)MODEL Details:       |";
gotoxy(20,17);
cout<<"|   Model year.         |";
gotoxy(20,18);
cout<<"|   Engine number.      |";
gotoxy(20,19);
cout<<"|4)TYRES Detail:        |";
gotoxy(20,20);
cout<<"|   Number of Tyres.    |";
gotoxy(20,21);
cout<<"|   Company.            |";
gotoxy(20,22);
cout<<"|   Warranty.           |";
gotoxy(20,23);
cout<<"|5)Every Thing.         |";
gotoxy(20,24);
cout<<"|Your CHOICE:           |";
gotoxy(20,25);
cout<<"-------------------------";
gotoxy(39,24);
cin>>a;

switch(a)
{
case 1:
system("cls");
read_CarDetail();
readS_CarDetail();
break;

case 2:
system("cls");
read_BrandDetail();
read_BrandDetail();
break;

case 3:
system("cls");
read_ModelDetail();
read_ModelDetail();
break;

case 4:
system("cls");
read_TyreDetail();
read_TyreDetail();
break;

case 5:
system("cls");
readall_data();
readallS_data();
break;
default:
cout<<"INVALID INPUT!!"<<endl;
}
}
   void owner:: ownerdisplayer()
   {
    fflush(stdin);
   displaybyochoice();
   }
   
   void owner::write_data()
   {
   ofstream fout;
   fout.open("STORE.dat",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   }

   void owner::E_Time()
   {
    printf("\n\n\n\t\t\tYOU ADDED THIS RECORD AT: ");
time_t second;
    time(&second);
    printf("%s",ctime(&second));
    cout<<endl<<endl;
   }
//assigner
void owner::assigner()
{
system("cls");
assigntype();
system("cls");
Scarname();
system("cls");
assignprice();
system("cls");
assignnoofgear();
system("cls");
assigntax();
system("cls");
assignregno();
system("cls");
assignbrand();
system("cls");
assignyearsince();
system("cls");
assignrange();
system("cls");
assignyear();
system("cls");
assignengno();
system("cls");
assignnnot();
system("cls");
assignwarranty();
system("cls");
assigncompany();
system("cls");
assigncolor();
system("cls");
assignfueltype();
system("cls");
assigncs();
system("cls");
write_data();
system("cls");
E_Time();
}

void owner::sell()
{
a:
char eng[20] , c;
ifstream fin;
ofstream fout , temp;
fin.open("STORE.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{
while(!fin.eof())
{
displayoall();
cout<<endl;
fin.read((char*)this,sizeof(*this));
}
}
fin.close();
fin.open("STORE.dat",ios::in|ios::binary);
fin.read((char*)this,sizeof(*this));
if(!fin)
cout<<endl<<"File not found: ";
else
{	
cout<<endl<<"Enter Engine number to sell the car: ";
fflush(stdin);
cin.getline(eng,19);
fout.open("SELL.dat",ios::app|ios::binary);
temp.open("temp.dat",ios::app|ios::binary);
while(!fin.eof())
{
if(strcmp(enginenumber,eng)==0)
{
system("cls");
assignname();
assignaddress();
assigncnic();
assignpno();
assignlicenseno();
cout<<endl;
fout.write((char*)this,sizeof(*this));
}
else
{
temp.write((char*)this,sizeof(*this));
}
fin.read((char*)this,sizeof(*this));
}
}
fin.close();
fout.close();
temp.close();
remove("STORE.dat");
rename("temp.dat","STORE.dat");
cout<<endl<<"Do you want to sell more cars (Y/N): ";
cin>>c;
if (c=='y'||c=='Y')
sell();
else
cout<<"Thank you to buy this car: "<<endl;
}

//void owner::before_assignment()
owner::owner()
{
strcpy(type,"Not Assigned");
strcpy(color,"Not Assigned");
strcpy(fueltype,"Not Assigned");
   tax=0;
price=0;
totalprice=0;
strcpy(registrationnumber,"Not Assigned");
   noofgears=0;
     
      // tyre class details now
       nooftyres=0;
       int i;//used for FOR LOOP
       for (i=0;i<4;i++)
       {
       warranty[i]=0;
}
for (i=0;i<4;i++)
   {
   strcpy(company[i],"Not Assigned");
}

//for brand class now
strcpy(name,"Not Assigned");
       lrange=0;
 rrange=0;
        yearsince=0;
       
        //for model class now
        year=0;
       
 strcpy(enginenumber,"Not Assigned");
 
 //for customer class now
 strcpy(cname,"Not Assigned");
 strcpy(address,"Not Assigned");
 strcpy(cnic,"Not Assigned");
 strcpy(pno,"Not Assigned");
 strcpy(licensen,"Not Assigned");
 
 //for owner class now
 strcpy(ownername,"Not Assigned");
 strcpy(carstatus,"Not Assigned");
}
