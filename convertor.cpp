#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

long double numar;

long double MtoFt(long double numar)
{
    return numar*3.280839895;
}
long double FttoM(long double numar)
{
    return numar/3.280839895;
}
long double MtoIn(long double numar)
{
    return numar*39.37007874;
}
long double IntoM(long double numar)
{
    return numar/39.37007874;
}
long double MtoMila(long double numar)
{
    return numar*0.0006213711922;
}
long double MilatoM(long double numar)
{
    return numar/0.0006213711922;
}
long double MtoMilaMar(long double numar)
{
    return numar*0.0005399568035;
}
long double MilaMartoM(long double numar)
{
    return numar/0.0005399568035;
}
long double MtoY(long double numar)
{
    return numar*1.093613298;
}
long double YtoM(long double numar)
{
    return numar/1.093613298;
}
void transformare_lungime(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nKilometru (a)\nMetru (b)\nCentimetru (c)\nMilimetru (d)\nPicior (e)\nInch (f)\nMila (g)\nMila maritima (h)\nYard (i)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti? (cod corespunzator) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*pow(10,3)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,5)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,6)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MtoFt(numar*pow(10,3))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MtoIn(numar*pow(10,3))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MtoMila(numar*pow(10,3))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MtoMilaMar(numar*pow(10,3))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MtoY(numar*pow(10,3))<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,2)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,3)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MtoFt(numar)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MtoIn(numar)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MtoMila(numar)<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MtoMilaMar(numar)<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MtoY(numar)<<'\n'; break;}
            case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar/pow(10,5)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/pow(10,2)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*10<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MtoFt(numar/pow(10,2))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MtoIn(numar/pow(10,2))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MtoMila(numar/pow(10,2))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MtoMilaMar(numar/pow(10,2))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MtoY(numar/pow(10,2))<<'\n'; break;}
            case 'd':
                    if(l2=='a')
                        { cout<<fixed<<(numar/pow(10,6)); break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar/10<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MtoFt(numar/pow(10,3))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MtoIn(numar/pow(10,3))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MtoMila(numar/pow(10,3))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MtoMilaMar(numar/pow(10,3))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MtoY(numar/pow(10,3))<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<FttoM(numar)/pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<FttoM(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<FttoM(numar)*pow(10,2)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<FttoM(numar)*pow(10,4)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MtoIn(FttoM(numar))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MtoMila(FttoM(numar))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MtoMilaMar(FttoM(numar))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MtoY(FttoM(numar))<<'\n'; break;}
            case 'f':
                    if(l2=='a')
                        { cout<<fixed<<IntoM(numar)/pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<IntoM(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<IntoM(numar)*pow(10,2)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<IntoM(numar)*pow(10,3)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MtoFt(IntoM(numar))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MtoMila(IntoM(numar))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MtoMilaMar(IntoM(numar))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MtoY(IntoM(numar))<<'\n'; break;}
            case 'g':
                    if(l2=='a')
                        { cout<<fixed<<MilatoM(numar)/pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<MilatoM(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<MilatoM(numar)*pow(10,2)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<MilatoM(numar)*pow(10,3)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MtoFt(MilatoM(numar))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MtoIn(MilatoM(numar))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MtoMilaMar(MilatoM(numar))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MtoY(MilatoM(numar))<<'\n'; break;}
            case 'h':
                    if(l2=='a')
                        { cout<<fixed<<MilaMartoM(numar)/pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<MilaMartoM(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<MilaMartoM(numar)*pow(10,2)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<MilaMartoM(numar)*pow(10,3)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MtoFt(MilaMartoM(numar))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MtoIn(MilaMartoM(numar))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MtoMila(MilaMartoM(numar))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MtoY(MilaMartoM(numar))<<'\n'; break;}
            case 'i':
                    if(l2=='a')
                        { cout<<fixed<<YtoM(numar)/pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<YtoM(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<YtoM(numar)*pow(10,2)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<YtoM(numar)*pow(10,3)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MtoFt(YtoM(numar))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MtoIn(YtoM(numar))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MtoMila(YtoM(numar))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MtoMilaMar(YtoM(numar))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') {cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(l1!='z');
}

long double MptoFtp(long double numar)
{
    return numar*10.764262648008613;
}
long double FtptoMp(long double numar)
{
    return numar/10.764262648008613;
}
long double MptoInp(long double numar)
{
    return numar*1549.9070055796653;
}
long double InptoMp(long double numar)
{
    return numar/1549.9070055796653;
}
long double MptoYp(long double numar)
{
    return numar/0.836127816;
}
long double YptoMp(long double numar)
{
    return numar*0.836127816;
}
void transformare_arie(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nKilometri (a)\nMetri (b)\nCentimetri (c)\nMilimetri (d)\nPicior (e)\nInch (f)\nAri (g)\nHectari (h)\nYard (i)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti? (cod corespunzator) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*pow(10,6)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,10)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,12)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MptoFtp(numar*pow(10,6))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MptoInp(numar*pow(10,6))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*pow(10,4)<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*pow(10,2)<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MptoYp(numar*pow(10,6))<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar/pow(10,6)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,4)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,6)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MptoFtp(numar)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MptoInp(numar)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar/pow(10,2)<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar/pow(10,4)<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MptoYp(numar)<<'\n'; break;}
            case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar/pow(10,10)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/pow(10,4)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,2)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MptoFtp(numar/pow(10,4))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MptoInp(numar/pow(10,4))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar/pow(10,6)<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar/pow(10,8)<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MptoYp(numar/pow(10,4))<<'\n'; break;}
            case 'd':
                    if(l2=='a')
                        { cout<<fixed<<(numar/pow(10,12)); break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/pow(10,6)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar/pow(10,2)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MptoFtp(numar/pow(10,6))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MptoInp(numar/pow(10,6))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar/pow(10,8)<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar/pow(10,10)<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MptoYp(numar/pow(10,6))<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<FtptoMp(numar)/pow(10,6)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<FtptoMp(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<FtptoMp(numar)*pow(10,4)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<FtptoMp(numar)*pow(10,8)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MptoInp(FtptoMp(numar))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.000928999999<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.0000092899999<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MptoYp(FtptoMp(numar))<<'\n'; break;}
            case 'f':
                    if(l2=='a')
                        { cout<<fixed<<InptoMp(numar)/pow(10,6)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<InptoMp(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<InptoMp(numar)*pow(10,4)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<InptoMp(numar)*pow(10,6)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MptoFtp(InptoMp(numar))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.000006452<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.00000006452<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MptoYp(IntoM(numar))<<'\n'; break;}
            case 'g':
                    if(l2=='a')
                        { cout<<fixed<<numar/pow(10,4)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*pow(10,2)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,6)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,8)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*1076.4262648008612<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*154990.70055796654<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*pow(10,2)<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar*119.5989394042597<<'\n'; break;}
            case 'h':
                    if(l2=='a')
                        { cout<<fixed<<numar/pow(10,4)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*pow(10,4)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,8)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,10)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*107642.62648008612<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*15499070.055796653<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*pow(10,2)<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar*11959.89394042597<<'\n'; break;}
            case 'i':
                    if(l2=='a')
                        { cout<<fixed<<YptoMp(numar)/pow(10,6)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<YptoMp(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<YptoMp(numar)*pow(10,4)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<YptoMp(numar)*pow(10,6)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<MptoFtp(YptoMp(numar))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<MptoInp(YptoMp(numar))<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.008361278159999999<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.0000836127816<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while (l1!='z');
}

long double MttoFtt(long double numar)
{
    return numar*35.3107344632;
}
long double FtttoMt(long double numar)
{
    return numar/35.3107344632;
}
long double MttoInt(long double numar)
{
    return numar*61023.7440947;
}
long double InttoMt(long double numar)
{
    return numar/61023.7440947;
}
long double MttoYt(long double numar)
{
    return numar*1.30794182274;
}
long double YttoMt(long double numar)
{
    return numar/1.30794182274;
}
void transformare_volum(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nCentimetri (a)\nDecimetri (b)\nMetri (c)\nCentilitri (d)\nDecilitri (e)\nLitri (f)\nPicioare (g)\nInch (h)\nYard (i)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti? (cod corespunzator) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar/pow(10,6)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar/10<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar/pow(10,2)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.00003531073<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.06102374409<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar*0.00000130794<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar*pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*100<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*10<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.0353107344<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*61.02374409<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar*0.00130794<<'\n'; break;}
            case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar*pow(10,6)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*pow(10,3)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,6)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*pow(10,5)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*pow(10,3)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MttoFtt(numar)<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MttoInt(numar)<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MttoYt(numar)<<'\n'; break;}
            case 'd':
                    if(l2=='a')
                        { cout<<fixed<<numar*10<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/pow(10,2)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar/pow(10,5)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar/10<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar/pow(10,2)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.000353107344<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.6102374409<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar*0.0000130794<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<numar*pow(10,2)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/10<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar/pow(10,4)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*10<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar/10<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.00353107344<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*6.102374409<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar*0.000130794<<'\n'; break;}
            case 'f':
                    if(l2=='a')
                        { cout<<fixed<<numar*pow(10,4)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*pow(10,2)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*10<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.0353107344<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*61.02374409<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar*0.00130794<<'\n'; break;}
            case 'g':
                    if(l2=='a')
                        { cout<<fixed<<numar*28320<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*28.32<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.02832<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*2832<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*283.2<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*28.32<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MttoInt(FtttoMt(numar))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MttoYt(FtttoMt(numar))<<'\n'; break;}
            case 'h':
                    if(l2=='a')
                        { cout<<fixed<<numar*16.387064<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.016387064<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.0000163870642<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*1.6387064<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.16387064<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*0.016387064<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MttoFtt(InttoMt(numar))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<MttoYt(InttoMt(numar))<<'\n'; break;}
            case 'i':
                    if(l2=='a')
                        { cout<<fixed<<numar*764560<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*764.560<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.764560<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*764560<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*7645.60<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*764.560<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<MttoFtt(YttoMt(numar))<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<MttoInt(YttoMt(numar))<<'\n'; break;}
                    if(l2=='i')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(l1!='z');
}

void transformare_timp(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nSecunde (a)\nMinute (b)\nOre (c)\nZile (d)\nSaptamani (e)\nLuni (f)\nAni (g)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti? (cod corespunzator) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.016667<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.00027778<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.0000115741<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.0000016534<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*3.8025705376834734*pow(10,-7)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*3.168808781402895*pow(10,-8)<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar*60<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.016667<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.00069444<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.0000992063<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*0.0000228154<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.0000019013<<'\n'; break;}
            case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar*3600<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*60<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.041667<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.00595238<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*0.00136893<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.00011408<<'\n'; break;}
            case 'd':
                    if(l2=='a')
                        { cout<<fixed<<numar*86400<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*1440<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*24<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.142857<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*0.032854<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.00273785<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<numar*604800.02<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*10080<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*168<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*7<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*0.229979<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.019165<<'\n'; break;}
            case 'f':
                    if(l2=='a')
                        { cout<<fixed<<numar*2629800<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*43830<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*730.5<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*30.4375<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*4.3482<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.083333<<'\n'; break;}
            case 'g':
                    if(l2=='a')
                        { cout<<fixed<<numar*31557600<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*525960<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*8766<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*365.25<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*52.1786<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*12<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(l1!='z');
}

void transformare_viteza(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nKilometri pe ora (a)\nKilometri pe secunda (b)\nNoduri (c)\nMetri pe secunda (d)\nMile pe ora (e)\nViteza luminii (f)\nPicioare pe secunda(g)\nViteza sunetului (h)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti? (cod corespunzator) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.00027778<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.539957<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.277778<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.621371<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*9.265669311059779*pow(10,-10)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.911344<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.00080985<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar*3600<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*1943.85<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*1000<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*2236.94<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*0.0000033356<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*3280.84<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*2.9155<<'\n'; break;}
              case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar*1.852<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.00051444<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.514444<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*1.1508<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*1.7160015083412106*pow(10,-9)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*1.6878<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.00149984<<'\n'; break;}
              case 'd':
                    if(l2=='a')
                        { cout<<fixed<<numar*3.6<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.001<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*1.9438<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*2.2369<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*3.3356409519815204*pow(10,-9)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*3.2808<<'\n'; break;}
                    if(l2=='h')
                    { cout<<fixed<<numar*0.00291545<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<numar*1.6093<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.00044704<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.868977<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.44704<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*1.4911651258603376*pow(10,-9)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*1.4667<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.00130332<<'\n'; break;}
            case 'f':
                    if(l2=='a')
                        { cout<<fixed<<numar*1079252848.8<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*299792.46<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*582750070.52<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*299792458<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*670616541.83<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*983571087.9<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*874030.49<<'\n'; break;}
            case 'g':
                    if(l2=='a')
                        { cout<<fixed<<numar*1.0973<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.0003048<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.592484<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.3048<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.681818<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*1.0167033296294609*pow(10,-9)<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.00088863<<'\n'; break;}
            case 'h':
                    if(l2=='a')
                        { cout<<fixed<<numar*1234.8<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.343<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*666.74<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*343<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*767.27<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*0.0000011441<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*1125.33<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(l1!='z');
}

long double FtoC (long double numar)
{
    return (numar-32)*5/9;
}
long double KtoC (long double numar)
{
    return numar-273.15;
}
long double RtoC (long double numar)
{
    return (numar-491.67)*5/9;
}
long double CtoF(long double numar)
{
    return numar*9/5+32;
}
long double CtoK(long double numar)
{
    return numar+273.15;
}
long double CtoR(long double numar)
{
    return (numar+273.15)*9/5;
}
void transformare_temperatura(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nCelsius (a) \nFahrenheit(b) \nKelvin (c) \nRankine(d) \n";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti temperatura? (litera corespunzatoare) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura doriti sa transformati? (litera corespunzatoare) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case'a':

                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<CtoF(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<CtoK(numar)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<CtoR(numar)<<'\n'; break;}
            case'b':

                    if(l2=='a')
                        { cout<<fixed<<FtoC(numar)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<CtoK(FtoC(numar))<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<CtoR(FtoC(numar))<<'\n'; break;}
            case 'c':

                    if(l2=='a')
                        { cout<<fixed<<KtoC(numar)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<CtoF(KtoC(numar))<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<CtoR(KtoC(numar))<<'\n'; break;}
            case 'd':

                    if(l2=='a')
                        { cout<<fixed<<RtoC(numar)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<CtoF(RtoC(numar))<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<CtoK(RtoC(numar))<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}

        }
    } while(l1!='z');
}

long double KgtoSlug(long double numar)
{
    return numar*0.06852176556196105;
}
long double SlugtoKg(long double numar)
{
    return numar/0.06852176556196105;
}
long double KgtoPounds(long double numar)
{
    return numar*2.2046244201837775;
}
long double PoundstoKg(long double numar)
{
    return numar/2.2046244201837775;
}
void transformare_masa(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nGrame (a)\nKilograme (b)\nMiligrame (c)\nTone (d)\nSlug (e)\nPounds (f)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti temperatura? (litera corespunzatoare) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura doriti sa transformati? (litera corespunzatoare) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        {cout<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,3)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar/pow(10,6)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<KgtoSlug(numar)/pow(10,3)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<KgtoPounds(numar)/pow(10,3)<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar*pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,6)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<KgtoSlug(numar)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<KgtoPounds(numar)<<'\n'; break;}
            case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar/pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar/pow(10,6)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar/pow(10,9)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<KgtoSlug(numar)/pow(10,6)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<KgtoPounds(numar)/pow(10,6)<<'\n'; break;}
            case 'd':
                    if(l2=='a')
                        { cout<<fixed<<numar*pow(10,6)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*pow(10,3)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*pow(10,9)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<KgtoSlug(numar)*pow(10,3)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<KgtoPounds(numar)*pow(10,3)<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<SlugtoKg(numar)*pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<SlugtoKg(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<SlugtoKg(numar)*pow(10,6)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<SlugtoKg(numar)/pow(10,3)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<KgtoPounds(SlugtoKg(numar))<<'\n'; break;}
            case 'f':
                    if(l2=='a')
                        { cout<<fixed<<PoundstoKg(numar)*pow(10,3)<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<PoundstoKg(numar)<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<PoundstoKg(numar)*pow(10,6)<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<PoundstoKg(numar)/pow(10,3)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<KgtoSlug(KgtoPounds(numar))<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
    }
    }
    while (l1!='z');
}

void transformare_energie(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nBritish thermal unitati (a)\nCalorii (b)\nJouli (c)\nKilowati ora (d)\nThermie (e)\nPicior de livre (f)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti? (cod corespunzator) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*252<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*1055.06<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.00029307<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.000252<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*778.19<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.00396832<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*4.1868<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.000001163<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.000001<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*3.0881<<'\n'; break;}
            case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.00094782<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.238846<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar <<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*2.7777777777777776*pow(10,-7)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*2.388459*pow(10,-7)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*0.737582<<'\n'; break;}
            case 'd':
                    if(l2=='a')
                        { cout<<fixed<<numar*3412.14<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*859845.24<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*3600000<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.859845<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*2655295.92<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<numar*3968.32<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*1000000<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*4186799.94<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*1.163<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*3088109.11<<'\n'; break;}
            case 'f':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.00128503<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.323823<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*1.3558<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*3.766058586795855*pow(10,-7)<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*3.238227549417543*pow(10,-7)<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(l1!='z');
}

void transformare_presiune(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nAtmosfera (a)\nBar (b)\nInch de mercur (c)\nMetri de apa (d)\nMilimetri de mercur (e)\nPascali (f)\nLivre pe inch patrat (g)\nTorr (h)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti? (cod corespunzator) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*1.0132<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*29.9213<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*10.3326<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*760<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*101325<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*14.6959<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*760<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.986923<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar <<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*29.5301<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*10.1974<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*750.06<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*100000<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*14.5038<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*750.06<<'\n'; break;}
            case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.033421<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.033864<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.345324<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*25.4<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*3386.38<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.491153<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*25.4<<'\n'; break;}
            case 'd':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.096781<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.098064<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*2.8958<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*73.5541<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*9806.38<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*1.4223<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*73.5541<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.00131579<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.00133322<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.03937<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.013595<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*133.32<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.019337 <<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar<<'\n'; break;}
            case 'f':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.0000098692<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.00001 <<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.0002953 <<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.00010197 <<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.00750064<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar <<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.00014504 <<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*0.00750064<<'\n'; break;}
            case 'g':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.068046<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.068948 <<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*2.036 <<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.703089 <<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*51.7151<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*6894.76 <<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar*51.7151<<'\n'; break;}
            case 'h':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.00131579<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.00133322<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.03937<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*0.013595<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='f')
                        { cout<<fixed<<numar*133.32<<'\n'; break;}
                    if(l2=='g')
                        { cout<<fixed<<numar*0.019337 <<'\n'; break;}
                    if(l2=='h')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(l1!='z');
}

void transformare_densitate(long double &numar)
{
    char l1,l2;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nKilogram pe metru cub (a)\nKilogram pe litru (b)\nDensitatea aerului la nivelul marii (c)\nLivra pe yard cub (d)\nSlug pe picior cub (e)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
        cout<<"\n In ce unitate de masura introduceti? (cod corespunzator) \n";
        cin>>l1;
        if(l1!='z')
        {
            cout<<"Introduceti valoarea ";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator) \n";
            cin>>l2;
        }
        switch(l1)
        {
            case 'a':
                    if(l2=='a')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.001<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.8333<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*1.686<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.00194<<'\n'; break;}
            case 'b':
                    if(l2=='a')
                        { cout<<fixed<<numar*1.000<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*833.3<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*26.970<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*1.94<<'\n'; break;}
            case 'c':
                    if(l2=='a')
                        { cout<<fixed<<numar*1.2<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.0012<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*2.023<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.002328<<'\n'; break;}
            case 'd':
                    if(l2=='a')
                        { cout<<fixed<<numar*0.5933<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.0005933<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*0.4944<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar*0.001151<<'\n'; break;}
            case 'e':
                    if(l2=='a')
                        { cout<<fixed<<numar*515.4<<'\n'; break;}
                    if(l2=='b')
                        { cout<<fixed<<numar*0.5154<<'\n'; break;}
                    if(l2=='c')
                        { cout<<fixed<<numar*429.5<<'\n'; break;}
                    if(l2=='d')
                        { cout<<fixed<<numar*868.7<<'\n'; break;}
                    if(l2=='e')
                        { cout<<fixed<<numar<<'\n'; break;}
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(l1!='z');
}

void transformare_combustibil(long double &numar)
{
    char l1;
    cout.precision(10);
    cout<<"Unitati de masura disponibile: \nMile/galon (a)\nKm/Litru (b)";
    cout<<'\n';
    cout<<"Pentru iesire apasati tasta z \n";
    cout<<'\n';
    do
    {
            cout<<"Introduceti valoarea in L/100 Km\n";
            cin>>numar;
            cout<<"In ce unitate de masura transformati? (cod corespunzator)\n";
            cin>>l1;
            cout<<'\n';
        switch(l1)
        {
            case 'a': cout<<fixed<<235.2/numar<<'\n'; break;
            case 'b': cout<<fixed<<100/numar<<'\n'; break;
            default: if(l1!='z') { cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(l1!='z');
}

int main()
{
    cout<< "-----  -----  -   -  -   -  -----  -----  -----  -----  -----"<<endl;
    cout<< "|      |   |  |-  |  |   |  |      |   |    |    |   |  |   |"<<endl;
    cout<< "|      |   |  | - |   | |   |----  -----    |    |   |  -----"<<endl;
    cout<< "|      |   |  |  -|    |    |      | -      |    |   |  | -  "<<endl;
    cout<< "-----  -----  -   -    -    -----  -  --    -    -----  -  --"<<endl;
    cout<<"a.Lungime \nb.Arie \nc.Volum \nd.Timp \ne.Viteza \nf.Temperatura \ng.Masa \nh.Energie \ni.Presiune \nj.Densitate \nk.Consum combustibil \n ";
    char c;
    do
    {
        cout<<'\n';
        cout<<"Alegeti litera corespunzatoare marimii fizice \n"; cin>>c;
        switch (c)
        {
            case 'a': transformare_lungime(numar); break;
            case 'b': transformare_arie(numar); break;
            case 'c': transformare_volum(numar); break;
            case 'd': transformare_timp(numar); break;
            case 'e': transformare_viteza(numar); break;
            case 'f': transformare_temperatura(numar); break;
            case 'g': transformare_masa(numar); break;
            case 'h': transformare_energie(numar); break;
            case 'i': transformare_presiune(numar); break;
            case 'j': transformare_densitate(numar); break;
            case 'k': transformare_combustibil(numar); break;
            default: if(c!='x') {cout<<"Alegere incorecta!"<<'\n'; break;}
        }
    }
    while(c!='x');
    return 0;
}
