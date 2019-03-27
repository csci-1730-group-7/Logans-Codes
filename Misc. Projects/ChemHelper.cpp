#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
//each element's atomic weight
double H=1.0079,He=4.0026,Li=6.941,Be=9.0122,B=10.811,C=12.0107,N=14.0067,O=15.994,F=18.9984;
double Ne=20.1797,Na=22.9897,Mg=24.305,Al=26.9815,Si=28.0855,P=30.9738,S=32.065,Cl=35.453,K=39.0983,Ar=39.948,Ca=40.078;
double Sc=44.9559,Ti=47.867,V=50.9415,Cr=51.9961,Mn=54.938,Fe=55.845,Ni=58.6934,Co=58.9332,Cu=63.546,Zn=65.39,Ga=69.723,Ge=72.64,As=74.9216;
double Se=78.96,Br=79.904,Kr=83.8,Rb=85.4678,Sr=87.62,Y=88.9059,Zr=91.224,Nb=92.9064,Mo=95.94,Tc=98,Ru=101.07,Rh=102.9055,Pd=106.42;
double Ag=107.8682,Cd=112.411,In=114.818,Sn=118.71,Sb=121.76,I=126.9045,Te=127.6,Xe=131.293,Cs=132.9055,Ba=137.327,La=138.9055,Ce=140.116,Pr=140.9077;
double Nd=144.24,Pm=145,Sm=150.36,Eu=151.964,Gd=157.25,Tb=158.9253,Dy=162.5,Ho=164.9303,Er=167.259,Tm=168.9342,Yb=173.04,Lu=174.967,Hf=178.49;
double Ta=180.9479,W=183.84,Re=186.207,Os=190.23,Ir=192.217,Pt=195.078,Au=196.9665,Hg=200.59,Tl=204.3833,Pb=207.2,Bi=208.9804,Po=209,At=210;
double Rn=222,Fr=223,Ra=226,Ac=227,Pa=231.0359,Th=232.0381,Np=237,U=238.0289,Am=243,Pu=244,Cm=247,Bk=247,Cf=251;
double Es=252,Fm=257,Md=258,No=259,Lr=266,Rf=267,Db=268,Sg=269,Bh=270,Hs=277,Mt=278,Ds=281,Rg=282,Cn=285,Nh=286,Fl=289,Mc=290,Lv=293,Ts=294,Og=294;
//declarations for switch statement;
int resp;
char loopContinue;
//declarations for molar mass singular elements
float amountElement;
string elementChoice;
char sigCom;

//declarations for molar mass compounds
float massEle[20];
int c=0, i;
float sumCom=0;

//declarations for moles elements
float grams;

//declarations for moles compounds
float molesCompound;

//declarations for sqrt 
int counter;
float number;
float sum=0;
float average;
int numNum;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(8);

do{
cout<<"Which operation shall I perform? (Molar Mass [1])(Grams to moles [2])\n";
cin>>resp;

switch(resp){

case 1:

//For singular elements, finds the mass in grams of the inputted moles
cout<<"Molar Mass of substance\n";
cout<<endl;
cout<<"Element or Compound? (E/C)\n";

cin>>sigCom;
if(sigCom=='E')
{
cout<<"Enter element: \n";
cin>>elementChoice;
cout<<"Enter amount of element: \n";
cin>>amountElement;

//Every element stored here
if(elementChoice=="R"){cout<<"Error,there is no element with the symbol R";} //if statement there as a filler. Is there a way to do without this?
else if(elementChoice=="H"){cout<<"Molecular weight: "<<H*amountElement<<" grams";}
else if(elementChoice=="He"){cout<<"Molecular weight: "<<He*amountElement<<" grams";}
else if(elementChoice=="Li"){cout<<"Molecular weight: "<<Li*amountElement<<" grams";}
else if(elementChoice=="Be"){cout<<"Molecular weight: "<<Be*amountElement<<" grams";}
else if(elementChoice=="B"){cout<<"Molecular weight: "<<B*amountElement<<" grams";}
else if(elementChoice=="C"){cout<<"Molecular weight: "<<C*amountElement<<" grams";}
else if(elementChoice=="N"){cout<<"Molecular weight: "<<N*amountElement<<" grams";}
else if(elementChoice=="O"){cout<<"Molecular weight: "<<O*amountElement<<" grams";}
else if(elementChoice=="F"){cout<<"Molecular weight: "<<F*amountElement<<" grams";}
else if(elementChoice=="Ne"){cout<<"Molecular weight: "<<Ne*amountElement<<" grams";}
else if(elementChoice=="Na"){cout<<"Molecular weight: "<<Na*amountElement<<" grams";}
else if(elementChoice=="Mg"){cout<<"Molecular weight: "<<Mg*amountElement<<" grams";}
else if(elementChoice=="Al"){cout<<"Molecular weight: "<<Al*amountElement<<" grams";}
else if(elementChoice=="Si"){cout<<"Molecular weight: "<<Si*amountElement<<" grams";}
else if(elementChoice=="P"){cout<<"Molecular weight: "<<P*amountElement<<" grams";}
else if(elementChoice=="S"){cout<<"Molecular weight: "<<S*amountElement<<" grams";}
else if(elementChoice=="Cl"){cout<<"Molecular weight: "<<Cl*amountElement<<" grams";}
else if(elementChoice=="K"){cout<<"Molecular weight: "<<K*amountElement<<" grams";}
else if(elementChoice=="Ar"){cout<<"Molecular weight: "<<Ar*amountElement<<" grams";}
else if(elementChoice=="Ca"){cout<<"Molecular weight: "<<Ca*amountElement<<" grams";}
else if(elementChoice=="Sc"){cout<<"Molecular weight: "<<Sc*amountElement<<" grams";}
else if(elementChoice=="Ti"){cout<<"Molecular weight: "<<Ti*amountElement<<" grams";}
else if(elementChoice=="V"){cout<<"Molecular weight: "<<V*amountElement<<" grams";}
else if(elementChoice=="Cr"){cout<<"Molecular weight: "<<Cr*amountElement<<" grams";}
else if(elementChoice=="Mn"){cout<<"Molecular weight: "<<Mn*amountElement<<" grams";}
else if(elementChoice=="Fe"){cout<<"Molecular weight: "<<Fe*amountElement<<" grams";}
else if(elementChoice=="Ni"){cout<<"Molecular weight: "<<Ni*amountElement<<" grams";}
else if(elementChoice=="Co"){cout<<"Molecular weight: "<<Co*amountElement<<" grams";}
else if(elementChoice=="Cu"){cout<<"Molecular weight: "<<Cu*amountElement<<" grams";}
else if(elementChoice=="Zn"){cout<<"Molecular weight: "<<Zn*amountElement<<" grams";}
else if(elementChoice=="Ga"){cout<<"Molecular weight: "<<Ga*amountElement<<" grams";}
else if(elementChoice=="Ge"){cout<<"Molecular weight: "<<Ge*amountElement<<" grams";}
else if(elementChoice=="As"){cout<<"Molecular weight: "<<As*amountElement<<" grams";}
else if(elementChoice=="Se"){cout<<"Molecular weight: "<<Se*amountElement<<" grams";}
else if(elementChoice=="Br"){cout<<"Molecular weight: "<<Br*amountElement<<" grams";}
else if(elementChoice=="Kr"){cout<<"Molecular weight: "<<Kr*amountElement<<" grams";}
else if(elementChoice=="Rb"){cout<<"Molecular weight: "<<Rb*amountElement<<" grams";}
else if(elementChoice=="Sr"){cout<<"Molecular weight: "<<Sr*amountElement<<" grams";}
else if(elementChoice=="Y"){cout<<"Molecular weight: "<<Y*amountElement<<" grams";}
else if(elementChoice=="Zr"){cout<<"Molecular weight: "<<Zr*amountElement<<" grams";}
else if(elementChoice=="Nb"){cout<<"Molecular weight: "<<Nb*amountElement<<" grams";}
else if(elementChoice=="Mo"){cout<<"Molecular weight: "<<Mo*amountElement<<" grams";}
else if(elementChoice=="Tc"){cout<<"Molecular weight: "<<Tc*amountElement<<" grams";}
else if(elementChoice=="Ru"){cout<<"Molecular weight: "<<Ru*amountElement<<" grams";}
else if(elementChoice=="Rh"){cout<<"Molecular weight: "<<Rh*amountElement<<" grams";}
else if(elementChoice=="Pd"){cout<<"Molecular weight: "<<Pd*amountElement<<" grams";}
else if(elementChoice=="Ag"){cout<<"Molecular weight: "<<Ag*amountElement<<" grams";}
else if(elementChoice=="Cd"){cout<<"Molecular weight: "<<Cd*amountElement<<" grams";}
else if(elementChoice=="In"){cout<<"Molecular weight: "<<In*amountElement<<" grams";}
else if(elementChoice=="Sn"){cout<<"Molecular weight: "<<Sn*amountElement<<" grams";}
else if(elementChoice=="Sb"){cout<<"Molecular weight: "<<Sb*amountElement<<" grams";}
else if(elementChoice=="I"){cout<<"Molecular weight: "<<I*amountElement<<" grams";}
else if(elementChoice=="Te"){cout<<"Molecular weight: "<<Te*amountElement<<" grams";}
else if(elementChoice=="Xe"){cout<<"Molecular weight: "<<Xe*amountElement<<" grams";}
else if(elementChoice=="Cs"){cout<<"Molecular weight: "<<Cs*amountElement<<" grams";}
else if(elementChoice=="Ba"){cout<<"Molecular weight: "<<Ba*amountElement<<" grams";}
else if(elementChoice=="La"){cout<<"Molecular weight: "<<La*amountElement<<" grams";}
else if(elementChoice=="Ce"){cout<<"Molecular weight: "<<Ce*amountElement<<" grams";}
else if(elementChoice=="Pr"){cout<<"Molecular weight: "<<Pr*amountElement<<" grams";}
else if(elementChoice=="Nd"){cout<<"Molecular weight: "<<Nd*amountElement<<" grams";}
else if(elementChoice=="Pm"){cout<<"Molecular weight: "<<Pm*amountElement<<" grams";}
else if(elementChoice=="Sm"){cout<<"Molecular weight: "<<Sm*amountElement<<" grams";}
else if(elementChoice=="Eu"){cout<<"Molecular weight: "<<Eu*amountElement<<" grams";}
else if(elementChoice=="Gd"){cout<<"Molecular weight: "<<Gd*amountElement<<" grams";}
else if(elementChoice=="Tb"){cout<<"Molecular weight: "<<Tb*amountElement<<" grams";}
else if(elementChoice=="Dy"){cout<<"Molecular weight: "<<Dy*amountElement<<" grams";}
else if(elementChoice=="Ho"){cout<<"Molecular weight: "<<Ho*amountElement<<" grams";}
else if(elementChoice=="Er"){cout<<"Molecular weight: "<<Er*amountElement<<" grams";}
else if(elementChoice=="Tm"){cout<<"Molecular weight: "<<Tm*amountElement<<" grams";}
else if(elementChoice=="Yb"){cout<<"Molecular weight: "<<Yb*amountElement<<" grams";}
else if(elementChoice=="Lu"){cout<<"Molecular weight: "<<Lu*amountElement<<" grams";}
else if(elementChoice=="Hf"){cout<<"Molecular weight: "<<Hf*amountElement<<" grams";}
else if(elementChoice=="Ta"){cout<<"Molecular weight: "<<Ta*amountElement<<" grams";}
else if(elementChoice=="W"){cout<<"Molecular weight: "<<W*amountElement<<" grams";}
else if(elementChoice=="Re"){cout<<"Molecular weight: "<<Re*amountElement<<" grams";}
else if(elementChoice=="Os"){cout<<"Molecular weight: "<<Os*amountElement<<" grams";}
else if(elementChoice=="Ir"){cout<<"Molecular weight: "<<Ir*amountElement<<" grams";}
else if(elementChoice=="Pt"){cout<<"Molecular weight: "<<Pt*amountElement<<" grams";}
else if(elementChoice=="Au"){cout<<"Molecular weight: "<<Au*amountElement<<" grams";}
else if(elementChoice=="Hg"){cout<<"Molecular weight: "<<Hg*amountElement<<" grams";}
else if(elementChoice=="Tl"){cout<<"Molecular weight: "<<Tl*amountElement<<" grams";}
else if(elementChoice=="Pb"){cout<<"Molecular weight: "<<Pb*amountElement<<" grams";}
else if(elementChoice=="Bi"){cout<<"Molecular weight: "<<Bi*amountElement<<" grams";}
else if(elementChoice=="Po"){cout<<"Molecular weight: "<<Po*amountElement<<" grams";}
else if(elementChoice=="At"){cout<<"Molecular weight: "<<At*amountElement<<" grams";}
else if(elementChoice=="Rn"){cout<<"Molecular weight: "<<Rn*amountElement<<" grams";}
else if(elementChoice=="Fr"){cout<<"Molecular weight: "<<Fr*amountElement<<" grams";}
else if(elementChoice=="Ra"){cout<<"Molecular weight: "<<Ra*amountElement<<" grams";}
else if(elementChoice=="Ac"){cout<<"Molecular weight: "<<Ac*amountElement<<" grams";}
else if(elementChoice=="Pa"){cout<<"Molecular weight: "<<Pa*amountElement<<" grams";}
else if(elementChoice=="Th"){cout<<"Molecular weight: "<<Th*amountElement<<" grams";}
else if(elementChoice=="Np"){cout<<"Molecular weight: "<<Np*amountElement<<" grams";}
else if(elementChoice=="U"){cout<<"Molecular weight: "<<U*amountElement<<" grams";}
else if(elementChoice=="Am"){cout<<"Molecular weight: "<<Am*amountElement<<" grams";}
else if(elementChoice=="Pu"){cout<<"Molecular weight: "<<Pu*amountElement<<" grams";}
else if(elementChoice=="Cm"){cout<<"Molecular weight: "<<Cm*amountElement<<" grams";}
else if(elementChoice=="Bk"){cout<<"Molecular weight: "<<Bk*amountElement<<" grams";}
else if(elementChoice=="Cf"){cout<<"Molecular weight: "<<Cf*amountElement<<" grams";}
else if(elementChoice=="Es"){cout<<"Molecular weight: "<<Es*amountElement<<" grams";}
else if(elementChoice=="Fm"){cout<<"Molecular weight: "<<Fm*amountElement<<" grams";}
else if(elementChoice=="Md"){cout<<"Molecular weight: "<<Md*amountElement<<" grams";}
else if(elementChoice=="No"){cout<<"Molecular weight: "<<No*amountElement<<" grams";}
else if(elementChoice=="Lr"){cout<<"Molecular weight: "<<Lr*amountElement<<" grams";}
else if(elementChoice=="Rf"){cout<<"Molecular weight: "<<Rf*amountElement<<" grams";}
else if(elementChoice=="Db"){cout<<"Molecular weight: "<<Db*amountElement<<" grams";}
else if(elementChoice=="Sg"){cout<<"Molecular weight: "<<Sg*amountElement<<" grams";}
else if(elementChoice=="Bh"){cout<<"Molecular weight: "<<Bh*amountElement<<" grams";}
else if(elementChoice=="Hs"){cout<<"Molecular weight: "<<Hs*amountElement<<" grams";}
else if(elementChoice=="Mt"){cout<<"Molecular weight: "<<Mt*amountElement<<" grams";}
else if(elementChoice=="Ds"){cout<<"Molecular weight: "<<Ds*amountElement<<" grams";}
else if(elementChoice=="Rg"){cout<<"Molecular weight: "<<Rg*amountElement<<" grams";}
else if(elementChoice=="Cn"){cout<<"Molecular weight: "<<Cn*amountElement<<" grams";}
else if(elementChoice=="Nh"){cout<<"Molecular weight: "<<Nh*amountElement<<" grams";}
else if(elementChoice=="Fl"){cout<<"Molecular weight: "<<Fl*amountElement<<" grams";}
else if(elementChoice=="Mc"){cout<<"Molecular weight: "<<Mc*amountElement<<" grams";}
else if(elementChoice=="Lv"){cout<<"Molecular weight: "<<Lv*amountElement<<" grams";}
else if(elementChoice=="Ts"){cout<<"Molecular weight: "<<Ts*amountElement<<" grams";}
else if(elementChoice=="Og"){cout<<"Molecular weight: "<<Og*amountElement<<" grams";}
else{cout<<"Please enter a real element you stupid human";}
}
else if(sigCom=='C'||'c')
{
cout<<"Input elements and amount of elements. Press enter after inputting elements and amounts. Enter aa when done:\n";
cout<<endl;
//While loop to allow user to enter as many elements as wanted

do{

cout<<"Enter element (type aa if done)\n";
cin>>elementChoice;
if(elementChoice=="aa"){break;} //breaks loop when aa is entered. Does not work when also paired with 'AA'
cout<<"Enter amount of element:\n";
cin>>amountElement;	

if(elementChoice=="R"){cout<<"Error,there is no element with the symbol R";} //if statement there as a filler. Is there a way to do without this?
else if(elementChoice=="H"){massEle[c]=H*amountElement;}
else if(elementChoice=="He"){massEle[c]=He*amountElement;}
else if(elementChoice=="Li"){massEle[c]=Li*amountElement;}
else if(elementChoice=="Be"){massEle[c]=Be*amountElement;}
else if(elementChoice=="B"){massEle[c]=B*amountElement;}
else if(elementChoice=="C"){massEle[c]=C*amountElement;}
else if(elementChoice=="N"){massEle[c]=N*amountElement;}
else if(elementChoice=="O"){massEle[c]=O*amountElement;}
else if(elementChoice=="F"){massEle[c]=F*amountElement;}
else if(elementChoice=="Ne"){massEle[c]=Ne*amountElement;}
else if(elementChoice=="Na"){massEle[c]=Na*amountElement;}
else if(elementChoice=="Mg"){massEle[c]=Mg*amountElement;}
else if(elementChoice=="Al"){massEle[c]=Al*amountElement;}
else if(elementChoice=="Si"){massEle[c]=Si*amountElement;}
else if(elementChoice=="P"){massEle[c]=P*amountElement;}
else if(elementChoice=="S"){massEle[c]=S*amountElement;}
else if(elementChoice=="Cl"){massEle[c]=Cl*amountElement;}
else if(elementChoice=="K"){massEle[c]=K*amountElement;}
else if(elementChoice=="Ar"){massEle[c]=Ar*amountElement;}
else if(elementChoice=="Ca"){massEle[c]=Ca*amountElement;}
else if(elementChoice=="Sc"){massEle[c]=Sc*amountElement;}
else if(elementChoice=="Ti"){massEle[c]=Ti*amountElement;}
else if(elementChoice=="V"){massEle[c]=V*amountElement;}
else if(elementChoice=="Cr"){massEle[c]=Cr*amountElement;}
else if(elementChoice=="Mn"){massEle[c]=Mn*amountElement;}
else if(elementChoice=="Fe"){massEle[c]=Fe*amountElement;}
else if(elementChoice=="Ni"){massEle[c]=Ni*amountElement;}
else if(elementChoice=="Co"){massEle[c]=Co*amountElement;}
else if(elementChoice=="Cu"){massEle[c]=Cu*amountElement;}
else if(elementChoice=="Zn"){massEle[c]=Zn*amountElement;}
else if(elementChoice=="Ga"){massEle[c]=Ga*amountElement;}
else if(elementChoice=="Ge"){massEle[c]=Ge*amountElement;}
else if(elementChoice=="As"){massEle[c]=As*amountElement;}
else if(elementChoice=="Se"){massEle[c]=Se*amountElement;}
else if(elementChoice=="Br"){massEle[c]=Br*amountElement;}
else if(elementChoice=="Kr"){massEle[c]=Kr*amountElement;}
else if(elementChoice=="Rb"){massEle[c]=Rb*amountElement;}
else if(elementChoice=="Sr"){massEle[c]=Sr*amountElement;}
else if(elementChoice=="Y"){massEle[c]=Y*amountElement;}
else if(elementChoice=="Zr"){massEle[c]=Zr*amountElement;}
else if(elementChoice=="Nb"){massEle[c]=Nb*amountElement;}
else if(elementChoice=="Mo"){massEle[c]=Mo*amountElement;}
else if(elementChoice=="Tc"){massEle[c]=Tc*amountElement;}
else if(elementChoice=="Ru"){massEle[c]=Ru*amountElement;}
else if(elementChoice=="Rh"){massEle[c]=Rh*amountElement;}
else if(elementChoice=="Pd"){massEle[c]=Pd*amountElement;}
else if(elementChoice=="Ag"){massEle[c]=Ag*amountElement;}
else if(elementChoice=="Cd"){massEle[c]=Cd*amountElement;}
else if(elementChoice=="In"){massEle[c]=In*amountElement;}
else if(elementChoice=="Sn"){massEle[c]=Sn*amountElement;}
else if(elementChoice=="Sb"){massEle[c]=Sb*amountElement;}
else if(elementChoice=="I"){massEle[c]=I*amountElement;}
else if(elementChoice=="Te"){massEle[c]=Te*amountElement;}
else if(elementChoice=="Xe"){massEle[c]=Xe*amountElement;}
else if(elementChoice=="Cs"){massEle[c]=Cs*amountElement;}
else if(elementChoice=="Ba"){massEle[c]=Ba*amountElement;}
else if(elementChoice=="La"){massEle[c]=La*amountElement;}
else if(elementChoice=="Ce"){massEle[c]=Ce*amountElement;}
else if(elementChoice=="Pr"){massEle[c]=Pr*amountElement;}
else if(elementChoice=="Nd"){massEle[c]=Nd*amountElement;}
else if(elementChoice=="Pm"){massEle[c]=Pm*amountElement;}
else if(elementChoice=="Sm"){massEle[c]=Sm*amountElement;}
else if(elementChoice=="Eu"){massEle[c]=Eu*amountElement;}
else if(elementChoice=="Gd"){massEle[c]=Gd*amountElement;}
else if(elementChoice=="Tb"){massEle[c]=Tb*amountElement;}
else if(elementChoice=="Dy"){massEle[c]=Dy*amountElement;}
else if(elementChoice=="Ho"){massEle[c]=Ho*amountElement;}
else if(elementChoice=="Er"){massEle[c]=Er*amountElement;}
else if(elementChoice=="Tm"){massEle[c]=Tm*amountElement;}
else if(elementChoice=="Yb"){massEle[c]=Yb*amountElement;}
else if(elementChoice=="Lu"){massEle[c]=Lu*amountElement;}
else if(elementChoice=="Hf"){massEle[c]=Hf*amountElement;}
else if(elementChoice=="Ta"){massEle[c]=Ta*amountElement;}
else if(elementChoice=="W"){massEle[c]=W*amountElement;}
else if(elementChoice=="Re"){massEle[c]=Re*amountElement;}
else if(elementChoice=="Os"){massEle[c]=Os*amountElement;}
else if(elementChoice=="Ir"){massEle[c]=Ir*amountElement;}
else if(elementChoice=="Pt"){massEle[c]=Pt*amountElement;}
else if(elementChoice=="Au"){massEle[c]=Au*amountElement;}
else if(elementChoice=="Hg"){massEle[c]=Hg*amountElement;}
else if(elementChoice=="Tl"){massEle[c]=Tl*amountElement;}
else if(elementChoice=="Pb"){massEle[c]=Pb*amountElement;}
else if(elementChoice=="Bi"){massEle[c]=Bi*amountElement;}
else if(elementChoice=="Po"){massEle[c]=Po*amountElement;}
else if(elementChoice=="At"){massEle[c]=At*amountElement;}
else if(elementChoice=="Rn"){massEle[c]=Rn*amountElement;}
else if(elementChoice=="Fr"){massEle[c]=Fr*amountElement;}
else if(elementChoice=="Ra"){massEle[c]=Ra*amountElement;}
else if(elementChoice=="Ac"){massEle[c]=Ac*amountElement;}
else if(elementChoice=="Pa"){massEle[c]=Pa*amountElement;}
else if(elementChoice=="Th"){massEle[c]=Th*amountElement;}
else if(elementChoice=="Np"){massEle[c]=Np*amountElement;}
else if(elementChoice=="U"){massEle[c]=U*amountElement;}
else if(elementChoice=="Am"){massEle[c]=Am*amountElement;}
else if(elementChoice=="Pu"){massEle[c]=Pu*amountElement;}
else if(elementChoice=="Cm"){massEle[c]=Cm*amountElement;}
else if(elementChoice=="Bk"){massEle[c]=Bk*amountElement;}
else if(elementChoice=="Cf"){massEle[c]=Cf*amountElement;}
else if(elementChoice=="Es"){massEle[c]=Es*amountElement;}
else if(elementChoice=="Fm"){massEle[c]=Fm*amountElement;}
else if(elementChoice=="Md"){massEle[c]=Md*amountElement;}
else if(elementChoice=="No"){massEle[c]=No*amountElement;}
else if(elementChoice=="Lr"){massEle[c]=Lr*amountElement;}
else if(elementChoice=="Rf"){massEle[c]=Rf*amountElement;}
else if(elementChoice=="Db"){massEle[c]=Db*amountElement;}
else if(elementChoice=="Sg"){massEle[c]=Sg*amountElement;}
else if(elementChoice=="Bh"){massEle[c]=Bh*amountElement;}
else if(elementChoice=="Hs"){massEle[c]=Hs*amountElement;}
else if(elementChoice=="Mt"){massEle[c]=Mt*amountElement;}
else if(elementChoice=="Ds"){massEle[c]=Ds*amountElement;}
else if(elementChoice=="Rg"){massEle[c]=Rg*amountElement;}
else if(elementChoice=="Cn"){massEle[c]=Cn*amountElement;}
else if(elementChoice=="Nh"){massEle[c]=Nh*amountElement;}
else if(elementChoice=="Fl"){massEle[c]=Fl*amountElement;}
else if(elementChoice=="Mc"){massEle[c]=Mc*amountElement;}
else if(elementChoice=="Lv"){massEle[c]=Lv*amountElement;}
else if(elementChoice=="Ts"){massEle[c]=Ts*amountElement;}
else if(elementChoice=="Og"){massEle[c]=Og*amountElement;}
else{cout<<"Please enter a real element you stupid human";}
c++;
}while(elementChoice!="aa"||"AA");

cout<<endl;
for(i=0;i<=c;i++)
{
sumCom=sumCom+massEle[i];	
}//end of for loop
cout<<"Molar mass: "<<sumCom<<" g/mol\n";
	
}//end of if else statement

break;

case 2:
cout<<"Moles of substance\n";
cout<<endl;
cout<<"Element or Compound? (E/C)\n";
cin>>sigCom;

if((sigCom=='E'||'e')&&(sigCom!='C')&&(sigCom!='c'))
{
cout<<"Enter element\n";
cin>>elementChoice;
cout<<"Enter grams of element\n";	
cin>>grams;
if(elementChoice=="R"){cout<<"Error,there is no element with the symbol R";} //if statement there as a filler. Is there a way to do without this?
else if(elementChoice=="H"){cout<<"Moles: "<<grams/H <<" mol";}
else if(elementChoice=="He"){cout<<"Moles: "<<grams/He <<" mol";}
else if(elementChoice=="Li"){cout<<"Moles: "<<grams/Li <<" mol";}
else if(elementChoice=="Be"){cout<<"Moles: "<<grams/Be <<" mol";}
else if(elementChoice=="B"){cout<<"Moles: "<<grams/B <<" mol";}
else if(elementChoice=="C"){cout<<"Moles: "<<grams/C <<" mol";}
else if(elementChoice=="N"){cout<<"Moles: "<<grams/N <<" mol";}
else if(elementChoice=="O"){cout<<"Moles: "<<grams/O <<" mol";}
else if(elementChoice=="F"){cout<<"Moles: "<<grams/F <<" mol";}
else if(elementChoice=="Ne"){cout<<"Moles: "<<grams/Ne <<" mol";}
else if(elementChoice=="Na"){cout<<"Moles: "<<grams/Na <<" mol";}
else if(elementChoice=="Mg"){cout<<"Moles: "<<grams/Mg <<" mol";}
else if(elementChoice=="Al"){cout<<"Moles: "<<grams/Al <<" mol";}
else if(elementChoice=="Si"){cout<<"Moles: "<<grams/Si <<" mol";}
else if(elementChoice=="P"){cout<<"Moles: "<<grams/P <<" mol";}
else if(elementChoice=="S"){cout<<"Moles: "<<grams/S <<" mol";}
else if(elementChoice=="Cl"){cout<<"Moles: "<<grams/Cl <<" mol";}
else if(elementChoice=="K"){cout<<"Moles: "<<grams/K <<" mol";}
else if(elementChoice=="Ar"){cout<<"Moles: "<<grams/Ar <<" mol";}
else if(elementChoice=="Ca"){cout<<"Moles: "<<grams/Ca <<" mol";}
else if(elementChoice=="Sc"){cout<<"Moles: "<<grams/Sc <<" mol";}
else if(elementChoice=="Ti"){cout<<"Moles: "<<grams/Ti <<" mol";}
else if(elementChoice=="V"){cout<<"Moles: "<<grams/V <<" mol";}
else if(elementChoice=="Cr"){cout<<"Moles: "<<grams/Cr <<" mol";}
else if(elementChoice=="Mn"){cout<<"Moles: "<<grams/Mn <<" mol";}
else if(elementChoice=="Fe"){cout<<"Moles: "<<grams/Fe <<" mol";}
else if(elementChoice=="Ni"){cout<<"Moles: "<<grams/Ni <<" mol";}
else if(elementChoice=="Co"){cout<<"Moles: "<<grams/Co <<" mol";}
else if(elementChoice=="Cu"){cout<<"Moles: "<<grams/Cu <<" mol";}
else if(elementChoice=="Zn"){cout<<"Moles: "<<grams/Zn <<" mol";}
else if(elementChoice=="Ga"){cout<<"Moles: "<<grams/Ga <<" mol";}
else if(elementChoice=="Ge"){cout<<"Moles: "<<grams/Ge <<" mol";}
else if(elementChoice=="As"){cout<<"Moles: "<<grams/As <<" mol";}
else if(elementChoice=="Se"){cout<<"Moles: "<<grams/Se <<" mol";}
else if(elementChoice=="Br"){cout<<"Moles: "<<grams/Br <<" mol";}
else if(elementChoice=="Kr"){cout<<"Moles: "<<grams/Kr <<" mol";}
else if(elementChoice=="Rb"){cout<<"Moles: "<<grams/Rb <<" mol";}
else if(elementChoice=="Sr"){cout<<"Moles: "<<grams/Sr <<" mol";}
else if(elementChoice=="Y"){cout<<"Moles: "<<grams/Y <<" mol";}
else if(elementChoice=="Zr"){cout<<"Moles: "<<grams/Zr <<" mol";}
else if(elementChoice=="Nb"){cout<<"Moles: "<<grams/Nb <<" mol";}
else if(elementChoice=="Mo"){cout<<"Moles: "<<grams/Mo <<" mol";}
else if(elementChoice=="Tc"){cout<<"Moles: "<<grams/Tc <<" mol";}
else if(elementChoice=="Ru"){cout<<"Moles: "<<grams/Ru <<" mol";}
else if(elementChoice=="Rh"){cout<<"Moles: "<<grams/Rh <<" mol";}
else if(elementChoice=="Pd"){cout<<"Moles: "<<grams/Pd <<" mol";}
else if(elementChoice=="Ag"){cout<<"Moles: "<<grams/Ag <<" mol";}
else if(elementChoice=="Cd"){cout<<"Moles: "<<grams/Cd <<" mol";}
else if(elementChoice=="In"){cout<<"Moles: "<<grams/In <<" mol";}
else if(elementChoice=="Sn"){cout<<"Moles: "<<grams/Sn <<" mol";}
else if(elementChoice=="Sb"){cout<<"Moles: "<<grams/Sb <<" mol";}
else if(elementChoice=="I"){cout<<"Moles: "<<grams/I <<" mol";}
else if(elementChoice=="Te"){cout<<"Moles: "<<grams/Te <<" mol";}
else if(elementChoice=="Xe"){cout<<"Moles: "<<grams/Xe <<" mol";}
else if(elementChoice=="Cs"){cout<<"Moles: "<<grams/Cs <<" mol";}
else if(elementChoice=="Ba"){cout<<"Moles: "<<grams/Ba <<" mol";}
else if(elementChoice=="La"){cout<<"Moles: "<<grams/La <<" mol";}
else if(elementChoice=="Ce"){cout<<"Moles: "<<grams/Ce <<" mol";}
else if(elementChoice=="Pr"){cout<<"Moles: "<<grams/Pr <<" mol";}
else if(elementChoice=="Nd"){cout<<"Moles: "<<grams/Nd <<" mol";}
else if(elementChoice=="Pm"){cout<<"Moles: "<<grams/Pm <<" mol";}
else if(elementChoice=="Sm"){cout<<"Moles: "<<grams/Sm <<" mol";}
else if(elementChoice=="Eu"){cout<<"Moles: "<<grams/Eu <<" mol";}
else if(elementChoice=="Gd"){cout<<"Moles: "<<grams/Gd <<" mol";}
else if(elementChoice=="Tb"){cout<<"Moles: "<<grams/Tb <<" mol";}
else if(elementChoice=="Dy"){cout<<"Moles: "<<grams/Dy <<" mol";}
else if(elementChoice=="Ho"){cout<<"Moles: "<<grams/Ho <<" mol";}
else if(elementChoice=="Er"){cout<<"Moles: "<<grams/Er <<" mol";}
else if(elementChoice=="Tm"){cout<<"Moles: "<<grams/Tm <<" mol";}
else if(elementChoice=="Yb"){cout<<"Moles: "<<grams/Yb <<" mol";}
else if(elementChoice=="Lu"){cout<<"Moles: "<<grams/Lu <<" mol";}
else if(elementChoice=="Hf"){cout<<"Moles: "<<grams/Hf <<" mol";}
else if(elementChoice=="Ta"){cout<<"Moles: "<<grams/Ta <<" mol";}
else if(elementChoice=="W"){cout<<"Moles: "<<grams/W <<" mol";}
else if(elementChoice=="Re"){cout<<"Moles: "<<grams/Re <<" mol";}
else if(elementChoice=="Os"){cout<<"Moles: "<<grams/Os <<" mol";}
else if(elementChoice=="Ir"){cout<<"Moles: "<<grams/Ir <<" mol";}
else if(elementChoice=="Pt"){cout<<"Moles: "<<grams/Pt <<" mol";}
else if(elementChoice=="Au"){cout<<"Moles: "<<grams/Au <<" mol";}
else if(elementChoice=="Hg"){cout<<"Moles: "<<grams/Hg <<" mol";}
else if(elementChoice=="Tl"){cout<<"Moles: "<<grams/Tl <<" mol";}
else if(elementChoice=="Pb"){cout<<"Moles: "<<grams/Pd <<" mol";}
else if(elementChoice=="Bi"){cout<<"Moles: "<<grams/Bi <<" mol";}
else if(elementChoice=="Po"){cout<<"Moles: "<<grams/Po <<" mol";}
else if(elementChoice=="At"){cout<<"Moles: "<<grams/At <<" mol";}
else if(elementChoice=="Rn"){cout<<"Moles: "<<grams/Rn <<" mol";}
else if(elementChoice=="Fr"){cout<<"Moles: "<<grams/Fr <<" mol";}
else if(elementChoice=="Ra"){cout<<"Moles: "<<grams/Ra <<" mol";}
else if(elementChoice=="Ac"){cout<<"Moles: "<<grams/Ac <<" mol";}
else if(elementChoice=="Pa"){cout<<"Moles: "<<grams/Pa <<" mol";}
else if(elementChoice=="Th"){cout<<"Moles: "<<grams/Th <<" mol";}
else if(elementChoice=="Np"){cout<<"Moles: "<<grams/Np <<" mol";}
else if(elementChoice=="U"){cout<<"Moles: "<<grams/U <<" mol";}
else if(elementChoice=="Am"){cout<<"Moles: "<<grams/Am <<" mol";}
else if(elementChoice=="Pu"){cout<<"Moles: "<<grams/Pu <<" mol";}
else if(elementChoice=="Cm"){cout<<"Moles: "<<grams/Cm <<" mol";}
else if(elementChoice=="Bk"){cout<<"Moles: "<<grams/Bk <<" mol";}
else if(elementChoice=="Cf"){cout<<"Moles: "<<grams/Cf <<" mol";}
else if(elementChoice=="Es"){cout<<"Moles: "<<grams/Es <<" mol";}
else if(elementChoice=="Fm"){cout<<"Moles: "<<grams/Fm <<" mol";}
else if(elementChoice=="Md"){cout<<"Moles: "<<grams/Md <<" mol";}
else if(elementChoice=="No"){cout<<"Moles: "<<grams/No <<" mol";}
else if(elementChoice=="Lr"){cout<<"Moles: "<<grams/Lr <<" mol";}
else if(elementChoice=="Rf"){cout<<"Moles: "<<grams/Rf <<" mol";}
else if(elementChoice=="Db"){cout<<"Moles: "<<grams/Db <<" mol";}
else if(elementChoice=="Sg"){cout<<"Moles: "<<grams/Sg <<" mol";}
else if(elementChoice=="Bh"){cout<<"Moles: "<<grams/Bh <<" mol";}
else if(elementChoice=="Hs"){cout<<"Moles: "<<grams/Hs <<" mol";}
else if(elementChoice=="Mt"){cout<<"Moles: "<<grams/Mt <<" mol";}
else if(elementChoice=="Ds"){cout<<"Moles: "<<grams/Ds <<" mol";}
else if(elementChoice=="Rg"){cout<<"Moles: "<<grams/Rg <<" mol";}
else if(elementChoice=="Cn"){cout<<"Moles: "<<grams/Cn <<" mol";}
else if(elementChoice=="Nh"){cout<<"Moles: "<<grams/Nh <<" mol";}
else if(elementChoice=="Fl"){cout<<"Moles: "<<grams/Fl <<" mol";}
else if(elementChoice=="Mc"){cout<<"Moles: "<<grams/Mc <<" mol";}
else if(elementChoice=="Lv"){cout<<"Moles: "<<grams/Lv <<" mol";}
else if(elementChoice=="Ts"){cout<<"Moles: "<<grams/Ts <<" mol";}
else if(elementChoice=="Og"){cout<<"Moles: "<<grams/Og <<" mol";}
else{cout<<"Please enter a real element you stupid human";}
}//end of if statement
else if(sigCom=='C'||'c')
{
cout<<"Enter grams of compound: \n";
cin>>grams;
do{
cout<<"Enter element. Type aa when done \n";
cin>>elementChoice;
if(elementChoice=="aa"){break;}
cout<<"Enter moles of element: \n";
cin>>amountElement;

if(elementChoice=="R"){cout<<"Error,there is no element with the symbol R";} //if statement there as a filler. Is there a way to do without this?
else if(elementChoice=="H"){massEle[c]=H*amountElement;}
else if(elementChoice=="He"){massEle[c]=He*amountElement;}
else if(elementChoice=="Li"){massEle[c]=Li*amountElement;}
else if(elementChoice=="Be"){massEle[c]=Be*amountElement;}
else if(elementChoice=="B"){massEle[c]=B*amountElement;}
else if(elementChoice=="C"){massEle[c]=C*amountElement;}
else if(elementChoice=="N"){massEle[c]=N*amountElement;}
else if(elementChoice=="O"){massEle[c]=O*amountElement;}
else if(elementChoice=="F"){massEle[c]=F*amountElement;}
else if(elementChoice=="Ne"){massEle[c]=Ne*amountElement;}
else if(elementChoice=="Na"){massEle[c]=Na*amountElement;}
else if(elementChoice=="Mg"){massEle[c]=Mg*amountElement;}
else if(elementChoice=="Al"){massEle[c]=Al*amountElement;}
else if(elementChoice=="Si"){massEle[c]=Si*amountElement;}
else if(elementChoice=="P"){massEle[c]=P*amountElement;}
else if(elementChoice=="S"){massEle[c]=S*amountElement;}
else if(elementChoice=="Cl"){massEle[c]=Cl*amountElement;}
else if(elementChoice=="K"){massEle[c]=K*amountElement;}
else if(elementChoice=="Ar"){massEle[c]=Ar*amountElement;}
else if(elementChoice=="Ca"){massEle[c]=Ca*amountElement;}
else if(elementChoice=="Sc"){massEle[c]=Sc*amountElement;}
else if(elementChoice=="Ti"){massEle[c]=Ti*amountElement;}
else if(elementChoice=="V"){massEle[c]=V*amountElement;}
else if(elementChoice=="Cr"){massEle[c]=Cr*amountElement;}
else if(elementChoice=="Mn"){massEle[c]=Mn*amountElement;}
else if(elementChoice=="Fe"){massEle[c]=Fe*amountElement;}
else if(elementChoice=="Ni"){massEle[c]=Ni*amountElement;}
else if(elementChoice=="Co"){massEle[c]=Co*amountElement;}
else if(elementChoice=="Cu"){massEle[c]=Cu*amountElement;}
else if(elementChoice=="Zn"){massEle[c]=Zn*amountElement;}
else if(elementChoice=="Ga"){massEle[c]=Ga*amountElement;}
else if(elementChoice=="Ge"){massEle[c]=Ge*amountElement;}
else if(elementChoice=="As"){massEle[c]=As*amountElement;}
else if(elementChoice=="Se"){massEle[c]=Se*amountElement;}
else if(elementChoice=="Br"){massEle[c]=Br*amountElement;}
else if(elementChoice=="Kr"){massEle[c]=Kr*amountElement;}
else if(elementChoice=="Rb"){massEle[c]=Rb*amountElement;}
else if(elementChoice=="Sr"){massEle[c]=Sr*amountElement;}
else if(elementChoice=="Y"){massEle[c]=Y*amountElement;}
else if(elementChoice=="Zr"){massEle[c]=Zr*amountElement;}
else if(elementChoice=="Nb"){massEle[c]=Nb*amountElement;}
else if(elementChoice=="Mo"){massEle[c]=Mo*amountElement;}
else if(elementChoice=="Tc"){massEle[c]=Tc*amountElement;}
else if(elementChoice=="Ru"){massEle[c]=Ru*amountElement;}
else if(elementChoice=="Rh"){massEle[c]=Rh*amountElement;}
else if(elementChoice=="Pd"){massEle[c]=Pd*amountElement;}
else if(elementChoice=="Ag"){massEle[c]=Ag*amountElement;}
else if(elementChoice=="Cd"){massEle[c]=Cd*amountElement;}
else if(elementChoice=="In"){massEle[c]=In*amountElement;}
else if(elementChoice=="Sn"){massEle[c]=Sn*amountElement;}
else if(elementChoice=="Sb"){massEle[c]=Sb*amountElement;}
else if(elementChoice=="I"){massEle[c]=I*amountElement;}
else if(elementChoice=="Te"){massEle[c]=Te*amountElement;}
else if(elementChoice=="Xe"){massEle[c]=Xe*amountElement;}
else if(elementChoice=="Cs"){massEle[c]=Cs*amountElement;}
else if(elementChoice=="Ba"){massEle[c]=Ba*amountElement;}
else if(elementChoice=="La"){massEle[c]=La*amountElement;}
else if(elementChoice=="Ce"){massEle[c]=Ce*amountElement;}
else if(elementChoice=="Pr"){massEle[c]=Pr*amountElement;}
else if(elementChoice=="Nd"){massEle[c]=Nd*amountElement;}
else if(elementChoice=="Pm"){massEle[c]=Pm*amountElement;}
else if(elementChoice=="Sm"){massEle[c]=Sm*amountElement;}
else if(elementChoice=="Eu"){massEle[c]=Eu*amountElement;}
else if(elementChoice=="Gd"){massEle[c]=Gd*amountElement;}
else if(elementChoice=="Tb"){massEle[c]=Tb*amountElement;}
else if(elementChoice=="Dy"){massEle[c]=Dy*amountElement;}
else if(elementChoice=="Ho"){massEle[c]=Ho*amountElement;}
else if(elementChoice=="Er"){massEle[c]=Er*amountElement;}
else if(elementChoice=="Tm"){massEle[c]=Tm*amountElement;}
else if(elementChoice=="Yb"){massEle[c]=Yb*amountElement;}
else if(elementChoice=="Lu"){massEle[c]=Lu*amountElement;}
else if(elementChoice=="Hf"){massEle[c]=Hf*amountElement;}
else if(elementChoice=="Ta"){massEle[c]=Ta*amountElement;}
else if(elementChoice=="W"){massEle[c]=W*amountElement;}
else if(elementChoice=="Re"){massEle[c]=Re*amountElement;}
else if(elementChoice=="Os"){massEle[c]=Os*amountElement;}
else if(elementChoice=="Ir"){massEle[c]=Ir*amountElement;}
else if(elementChoice=="Pt"){massEle[c]=Pt*amountElement;}
else if(elementChoice=="Au"){massEle[c]=Au*amountElement;}
else if(elementChoice=="Hg"){massEle[c]=Hg*amountElement;}
else if(elementChoice=="Tl"){massEle[c]=Tl*amountElement;}
else if(elementChoice=="Pb"){massEle[c]=Pb*amountElement;}
else if(elementChoice=="Bi"){massEle[c]=Bi*amountElement;}
else if(elementChoice=="Po"){massEle[c]=Po*amountElement;}
else if(elementChoice=="At"){massEle[c]=At*amountElement;}
else if(elementChoice=="Rn"){massEle[c]=Rn*amountElement;}
else if(elementChoice=="Fr"){massEle[c]=Fr*amountElement;}
else if(elementChoice=="Ra"){massEle[c]=Ra*amountElement;}
else if(elementChoice=="Ac"){massEle[c]=Ac*amountElement;}
else if(elementChoice=="Pa"){massEle[c]=Pa*amountElement;}
else if(elementChoice=="Th"){massEle[c]=Th*amountElement;}
else if(elementChoice=="Np"){massEle[c]=Np*amountElement;}
else if(elementChoice=="U"){massEle[c]=U*amountElement;}
else if(elementChoice=="Am"){massEle[c]=Am*amountElement;}
else if(elementChoice=="Pu"){massEle[c]=Pu*amountElement;}
else if(elementChoice=="Cm"){massEle[c]=Cm*amountElement;}
else if(elementChoice=="Bk"){massEle[c]=Bk*amountElement;}
else if(elementChoice=="Cf"){massEle[c]=Cf*amountElement;}
else if(elementChoice=="Es"){massEle[c]=Es*amountElement;}
else if(elementChoice=="Fm"){massEle[c]=Fm*amountElement;}
else if(elementChoice=="Md"){massEle[c]=Md*amountElement;}
else if(elementChoice=="No"){massEle[c]=No*amountElement;}
else if(elementChoice=="Lr"){massEle[c]=Lr*amountElement;}
else if(elementChoice=="Rf"){massEle[c]=Rf*amountElement;}
else if(elementChoice=="Db"){massEle[c]=Db*amountElement;}
else if(elementChoice=="Sg"){massEle[c]=Sg*amountElement;}
else if(elementChoice=="Bh"){massEle[c]=Bh*amountElement;}
else if(elementChoice=="Hs"){massEle[c]=Hs*amountElement;}
else if(elementChoice=="Mt"){massEle[c]=Mt*amountElement;}
else if(elementChoice=="Ds"){massEle[c]=Ds*amountElement;}
else if(elementChoice=="Rg"){massEle[c]=Rg*amountElement;}
else if(elementChoice=="Cn"){massEle[c]=Cn*amountElement;}
else if(elementChoice=="Nh"){massEle[c]=Nh*amountElement;}
else if(elementChoice=="Fl"){massEle[c]=Fl*amountElement;}
else if(elementChoice=="Mc"){massEle[c]=Mc*amountElement;}
else if(elementChoice=="Lv"){massEle[c]=Lv*amountElement;}
else if(elementChoice=="Ts"){massEle[c]=Ts*amountElement;}
else if(elementChoice=="Og"){massEle[c]=Og*amountElement;}
else{cout<<"Please enter a real element you stupid human";}
c++;
}while(elementChoice!="aa"||"AA");

cout<<endl;
for(i=0;i<=c;i++)
{
sumCom=sumCom+massEle[i];		
}//end of for loop
molesCompound=grams/sumCom;
cout<<"Moles: "<<molesCompound<<" mol\n";
}//end of else if statement
break;
//end of case 2

case 3:
cout<<"Enter number of numbers:\n";
cin>>numNum;
cout<<"Enter numbers below: \n";
for(counter=1;counter<=numNum;counter++)
{
cout<<"Enter number\n";
cin>>number;
sum=sum+number;
}
average=sum/numNum;
cout<<"The average is: "<<average<<endl;
break;

//beginning of default switch argument	
default:
cout<<"I cannot do that operation at this time\n";	
}//end of switch statement
for(i=0;i<=c;i++)
{
massEle[i]=0;
//cout<<"This worked"<<i<<" times!\n";
}

//reassinging variables
sumCom=0; 
c=0; 
molesCompound=0;

cout<<endl;
cout<<"Continue? (Y/N)\n";
cin>>loopContinue;		

}while(loopContinue=='Y');//end of switch loop
	
	
	
	
	
	
	
	
	
	
return 0;	
}//end of program
