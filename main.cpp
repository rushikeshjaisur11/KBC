#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;
int flag=0,top=0;
main(void)
{
    //program starts from here
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15,p,S,l,w,c,x,y,J,O,U,k;
 char n[30],P[30],q,opt,b[10];
 //PlaySound("kbc.wav",SND_SYNC,NULL);
 cout<<"                           KAUN BANEGA CROREPATI\a\a\a\a\a\a\a"; //prints headline
 cout<<"\n                           *********************";
   printf("\n\n      WE WANT SOME INFORMATION ABOUT YOU BEFORE PLAYING KBC");
    cout<<"\n\n\a NAME : ";
    gets(n);
    cout<<"\n\n\a PLACE(STATE) : ";
    gets(P);
    cout<<"\n\n\a MALE(1)\FEMALE(2) : ";
    cin>>S;
    printf("\t\tWELCOME TO KAUN BANEGA CROREPATI ");
     if (S==1)
    cout<<"\n\n\n      AAJ HAMARE SAMNE EK NAYE KHILADI MOAJUD HAIN\n      JINKA NAAM \""<<n<<"\" HAI \n      AUR YE \""<<P<<"\" SE AAYe HAIN\n      HUM AAPKA EES GAME SHOW ME HARDIK SWAGAT KARTEIN HAIN\n      CHALIYE AAP AUR HUM KHELTE HAIN 'KAUN BANEGA CROREPATI\n      TO AAPKA SAWAL AAPKE SAMNE YE RAHA";
    else
    cout<<"\n\n\n      AAJ HAMARE SAMNE EK NAYE KHILADI MOAJUD HAIN\n      JINKA NAAM \""<<n<<"\" HAI \n      AUR YE \""<<P<<"\" SE AAYee HAIN\n      HUM AAPKA EES GAME SHOW ME HARDIK SWAGAT KARTEIN HAIN\n      CHALIYE AAP AUR HUM KHELTE HAIN 'KAUN BANEGA CROREPATI\n      TO AAPKA SAWAL AAPKE SAMNE YE RAHA";
  Sleep(2000);
  system("cls");
    cout<<"\n QUESTION NO. 1";
    printf("\n(Q) WHICH OF THE FOLLOWING THING CONTAINS 200 V (VOLT) ? ");
    cout<<"\n YOUR OPTIONS ARE :\n\a";
    printf("(1) TAPE RECORDER\t");
    printf("(2) TORCH BATTERIE\n");
    printf("(3) ELECTIC BULB\t");
    printf("(4) CAR BATTERIE\n");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 1,000 : ");
    cin>>ans1;
    switch(ans1)
    {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 3 :
	       cout<<" YOU ARE RIGHT\a";
	       Sleep(500);
	       break;
      case 4 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
    }

if(ans1==3)
{
    system("cls");
    cout<<"\n\n\n      CONGRATULATION YOU HAVE WON Rs. 1000";
    cout<<"\n      NOW COME TO THE NEXT QUESTION\n";
    system("cls");
    cout<<" QUESTION NO. 2\n";
    printf("\t(Q) WHO WAS THE SEVENTH PRIME MINISTER OF INDIA ? ");
    cout<<"\n YOUR OPTIONS ARE :\n\a";

    printf("(1) INDIRA GANDHI\t");
    printf("(2) RAJIB GANDHI\n");
    printf("(3) V.P.SINGH\t");
    printf("(4) CHANDRA SHEKHAR\n");
    printf("PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 2,000 : ");
    cin>>ans2;
    switch(ans2)
    {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE RIGHT \a";
      Sleep(500);
	       break;
      case 3 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 4 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
    }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 1000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans2==2)
{
    cout<<"\n\n\n      AAPKA JAWAB BILKUL SAHI\n      AAP JEET CHUKE HAIN DO HAJAR RUPAY";
    Sleep(1000);
    cout<<"\n      AGLA SAWAL AAPKE COMPUTER SCREEN PE YEH RAHA\n";
    system("cls");
    cout<<" QUESTION NO. 3\n";
    printf("(Q) WHO WON THE THIRD CRICKET WORLD CUP ? ");
    cout<<"\n AAPKA OPTION YEH RAHA :\n\a";

    printf("(1) INDIA\t");
    printf("(2) WEST INDIES\n");
    printf("(3) AUSTRALIA\t");
    printf("(4) ENGLAND\n");
    cin>>ans3; // gets answers
    switch(ans3)
     {
       case 1 :

            cout<<" YOU ARE RIGHT \a";
            Sleep(500);
		break;
       case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
		break;
       case 3 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
       case 4 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
     }
     system("cls");
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 2000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
    Sleep(500);
}
if(ans3==1)
{
    cout<<"\n\n\n      AAPKA JAWAB BILKUL SAHI\n      TO KAISA LAG RAHA HAI,\n      CHALIYE AGLE SAWAL KI AUR BADTE HAIN\n";
    system("cls");
    cout<<" QUESTION NO. 4\n";
    printf("(Q) WHICH OF THE FOLLOWING THING USED TO MAKE JEWELLARY ? ");//U UTTRANCHAL HAS BEEN COME FROM WHICH STATE ? ");
    cout<<"\n AAPKA OPTION AAPKE SAMNE YEH RAHA :\n\a";

    printf("(1) MICA\t");
    printf("(2) GARNET\n");
    printf("(3) NICKEL\t");
    printf("(4) BRONZE\n");

    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 5,000 : ");
    cin>>ans4;
    switch(ans4)
    {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE RIGHT \a";
      Sleep(500);
	       break;
      case 3 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 4 : cout<<" YOU ARE WRONG AAP JAA SAKTE HAIN";
	       break;
    }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 4000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans4==2)
{
    cout<<"\n\n\n AAPKA JAWAB BILKUL SAHI\n      AGLA PRASHNA AAPKO PEHLI PARI TAK PAHUNCHAAYEGA ,\n      TAB AAP YAHAIN SE KAM SE KAM\n      DUS HAZAR RUPAY LEKAR JA SAKTEIN HAIN";
    system("cls");
    cout<<"\n PAANCHWA SAWAL AAPKE COMPUTER SCREEN PE YEH RAHA\n";
    cout<<" QUESTION NO. 5\n";
    printf("\n(Q) WHICH OF THE HERO HAS SIRNAME \"SRIVASTAVA\" ");
    printf("\n    BUT HE DON'T USE AFTER HIS NAME ? ");
    cout<<"\n\nAAPKA OPTION YEH RAHA :\n\a";
    printf("(1) DILIP KUMAR\t");
    printf("2) AMITAB BACHCHAN\n");
    printf("(3) DHARMENDRA\t");
    printf("(4) RAJ KUMAR\n");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 10,000 : ");
    cin>>ans5;
    cout<<" AAPKA JAWAB SAHI HE YA NAHI YE HUM BATAYIENGE\n EK CHOTE SE BREAK KE BAD\n SO DON'T GO AWAY WE WILL BE BACK\a ";
    cout<<"\n\n press \"0\" & \"enter\" ";
    cin>>c;
    if (c==0)
    goto h;
h:

    cout<<"\n\n \"KAUN BANEGA CROREPATI\" ke prayojak hain :";

    printf("\n\n NIRMA WASHING POWDER hai achchaa washing powder \n\n aaj raat aath baje dekhiye \a\"THE PREMIRE SHOW OF KABHIE KHUSHI KABHI GHAM\" \a\n\n AAD GEL STRECH INK PEN jo likhta hi chala jai \a");
    cout<<"\n\n press \"0\" & \"enter\" ";
    cin>>x;
    if (x==0)
    goto v;
v:

    if (S==1)
    cout<<" NAMASHKAR AAPKA PHIR SE SWAGAT HAI KAUN BANEGA CROREPATI MEIN \n MERE SAMNE BAITHein HIAN "<<n<<" JINSE MAINE EK SAWAL PUCHA THA \n DEKHTE HAIN INKA JAWAB SAHI HAI YA NAHI\a ";
    else
    cout<<" NAMASHKAR AAPKA PHIR SE SWAGAT HAI KAUN BANEGA CROREPATI MEIN \n MERE SAMNE BAITHee HIAN "<<n<<" JINSE MAINE EK SAWAL PUCHA THA \n DEKHTE HAIN INKA JAWAB SAHI HAI YA NAHI\a ";
    cout<<"\n\n press \"0\" & \"enter\" ";
    cin>>y;
    if (y==0)
    goto g;
g:  switch(ans5)
     {
   //
   //
      case 1 : cout<<" OH! YE GALAT JAWAB THA   ";
	       break;
      case 2 : cout<<" YOU ARE RIGHT,AAP BILKUL SAHI HAIN \a\a";
	       Sleep(500);
	       break;

      case 3 : cout<<" OH! YE GALAT JAWAB THA";
	       break;
      case 4 : cout<<" OH! YE GALAT JAWAB THA";
	       break;
     }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 5000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans5==2)
{
    cout<<"\n\n\n      BILKUL SAHI JAWAAB\n      TO AAPNE PEHLA PARAW PAR KAR HI LIYA\n      CHALIYE AGLE SAWAL KI AUR BADTE HAIN";
    cout<<"\n      BEES HAZAAR RUPAY KE LIYE AAPKA SAWAL YEH RAHA\n";
    system("cls");
    cout<<" QUESTION NO. 6\n";
    printf("(Q) WHICH DAY IS CELEBRATE ON 5TH SEPTEMBER ?");
    cout<<"\n AAPKA OPTION YEH RAHA :\n\a";
    printf("(1) ROSE DAY\t");
    printf("(2) VALENTIENS DAY\n");
    printf("(3) TEACHERS DAY\t");
    printf("(4) CHILDRENS DAY\n");
    printf("PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 20,000 : ");
    cin>>ans6;
    switch(ans6)
     {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 3 : cout<<" YOU ARE RIGHT \a";
      Sleep(500);
	       break;
      case 4 : cout<<" YOU ARE WRONG,AAP JAA SAKTE HAIN";
	       break;
      }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 10000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans6==3)
{


    cout<<"\n\n\n      CHALIYE AGLE SAWAL KI AUR BADTE HAIN";
    cout<<"\n      AGLAA SAWAL AAPKE COMPUTER SCREEN PE YEH RAHA\n";
    Sleep(200);
    system("cls");
    cout<<" QUESTION NO. 7\n";
    printf("(Q) IN WHICH BANK OF INDIA PEOPLE COULD NOT OPEN THEIR ACCOUNT ? ");
    cout<<"\n AAPKA OPTION YEH RAHA\n\a";

    printf("(1) S.B.I.\n");
    printf("(2) AMERICAN EXPRESS\n");
    printf("(3) CITI BANK\n");
    printf("(4) R.B.I.\n");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 40,000 : ");
    cin>>ans7;
    switch(ans7)
     {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 3 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 4 : cout<<" YOU ARE RIGHT\a";
      Sleep(500);
	       break;
     }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 20000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans7==4)
{
    cout<<"\n\n\n      CONGRATULATION YOU HAVE WON Rs. 40,000";
    cout<<"\n      NOW COME TO THE NEXT QUESTION\n";
    Sleep(200);
    system("cls");
    cout<<" QUESTION NO. 8\n";
    printf("      (Q) IN WHICH GAME BLACK BALL IS USE ?");
    cout<<"\n YOUR OPTIONS ARE :\n\a";

    printf("(1) BILLIARD\t");
    printf("(2) POLO\n");
    printf("(3) TABLE TENNIS\t");
    printf("(4) FOOTBALL\n");

    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 80,000 : ");
    cin>>ans8;
switch(ans8)
    {
      case 1 : cout<<" YOU ARE RIGHT \a";
      Sleep(500);
	       break;
      case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 3 : cout<<" YOU ARE WRONG,aap jaa sakte hain YOU ARE RIGHT \a";
	       break;
      case 4 : cout<<" YOU ARE WRONG,aap jaa sakte hain\a\a";
	       break;
    }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 40000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans8==1)
{
    cout<<"\n\n\n      AAPKA JAWAB BILKUL SAHI\n      AAP JEET CHUKE HAIN ASSI HAZAR RUPAY";
    cout<<"\n      AGLA SAWAL AAPKE COMPUTER SCREEN PE YEH RAHA\n";
    Sleep(200);
    system("cls");
    cout<<" QUESTION NO. 9\n";
    printf("      (Q) MOHALI IS SITUATED IN WHICH STATE ? ");
    cout<<"\n AAPKA OPTION YEH RAHA :\n\a";

    printf("(1) U.P.\t");
    printf("(2) MAHARASTRA\n");
    printf("(3) PUNJAB\t");
    printf("(4) RAJASHTHAN\n");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 1,60,000 : ");
    cin>>ans9;
    switch(ans9)
     {
       case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
		break;
       case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
		break;
       case 3 : cout<<" YOU ARE RIGHT \a";
       Sleep(500);
	       break;
       case 4 : cout<<" YOU ARE WRONG AAP JAA SAKTE HAIN";
	       break;
     }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 80000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans9==3)
{
    cout<<"\n      DUSWA SAWAL AAPKE COMPUTER SCREEN PAR YEH RAHA\n";
    Sleep(200);
    system("cls");
    cout<<" QUESTION NO. 10\n";
    printf(" (Q) WHICH OF FOLLWING PLACE IS KNOWN AS \"QUEEN OF HILLS\" ? ");
    cout<<"\n AAPKA OPTION YEH RAHA :\n\a";

    printf("(1) NAINITAL\t");
    printf("(2) MOSSOURIE\n");
    printf("(3) OOTY\t");
    printf("(4) DARGEELING\n");

    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 3,20,000 : ");
    cin>>ans10;
    switch(ans10)
    {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE RIGHT \a";
      Sleep(500);
	       break;
      case 3 : cout<<" YOU ARE WRONG AAP JAA SAKTE HAIN";
	       break;
      case 4 : cout<<" YOU ARE WRONG AAP JAA SAKTE HAIN";
	       break;
}
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 160000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans10==2)
{
    cout<<"\n\n\n      YEH BILKUL SAHI JAWAB HAI\n      IS PRAKAR AAPNE DUSRI PARI PAR KAR LI HAI\n      AB AAP YAHAIN SE KAM SE KAM\n      TEEN LAKH BIS HAZAR RUPAYE LEKAR JA SAKTE HAIN\n";
  Sleep(200);
  system("cls");
    cout<<" QUESTION NO. 11\n";
    printf("(Q) (NA TUM HO UDAAS JO MAIN HUN TERE PAAS HAMESHA...) IS THE SONG                  OF WHICH FILM ? ");
    cout<<"\n AAPKA OPTION YEH RAHA :\n\a";
    printf("(1) KUCH KUCH HOTA HAI\t");
    printf("(2) KABHI KHUSHI KABHI GUM\n");
    printf("(3) DEEWANAPAN\t");
    printf("(4) KOI MERE DIL SE PUCHE\n");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 6,40,000 : ");
    cin>>ans11;
    switch(ans11)
     {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE WRONG AAP JAA SAKTE HAIN\a";
	       break;
      case 3 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 4 : cout<<" YOU ARE RIGHT \a";
      Sleep(1000);
	       break;
     }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 320000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans11==4)
{
    cout<<"\n\n\n      BILKUL SAHI JAWAAB\n";
    cout<<"      BARA LAKH PACHAAS HAZAR RUPAYE KE LIYE AAPKA SAWAL YEH RAHA\n";
    Sleep(200);
    system("cls");
    cout<<" QUESTION NO. 12\n";
    printf("      (Q) IN WHICH YEAR RABINDRANATH TAGORE'S GITANJALI WAS ");
    printf("\n\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b    FIRST PUBLISHED IN ENGLISH ?");
    cout<<"\n AAPKA OPTION YEH RAHA :\n\a";
    printf("(1) 1910\t");
    printf("(2) 1911\n");
    printf("(3) 1912\t");
    printf("(4) 1913\n");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 12,50,000 : ");
    cin>>ans12;
    cout<<" AAPKA JAWAB SAHI HE YA NAHI YE HUM BATAYIENGE\n EK CHOTE SE BREAK KE BAD\n SO DON'T GO AWAY WE WILL BE BACK\a ";
    cout<<"\n\n press \"0\" & \"enter\" ";
    cin>>J;
    if (J==0)
    goto N;
N:

    cout<<"\n\n \"KAUN BANEGA CROREPATI\" ke prayojak hain :";

    printf("\a\n\n RUPA THERMOCOTE jo thandi mein bhi de garmi ka ehsas \a\aUJAALA SUPREME bas char bund hi kaafi kai \a\n\n\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b PERK thodi si pet puja kabhi bhi kanhi bhi ");
    cout<<"\n\n press \"0\" & \"enter\" ";
    cin>>O;
    if (O==0)
    goto P;
P:

    if (S==1)
    cout<<" NAMASHKAR AAPKA PHIR SE SWAGAT HAI KAUN BANEGA CROREPATI MEIN \n MERE SAMNE BAITHein HIAN "<<n<<" JINSE MAINE EK SAWAL PUCHA THA \n DEKHTE HAIN INKA JAWAB SAHI HAI YA NAHI\a ";
    else
    cout<<" NAMASHKAR AAPKA PHIR SE SWAGAT HAI KAUN BANEGA CROREPATI MEIN \n MERE SAMNE BAITHee HIAN "<<n<<" JINSE MAINE EK SAWAL PUCHA THA \n DEKHTE HAIN INKA JAWAB SAHI HAI YA NAHI\a ";
    cout<<"\n\n press \"0\" & \"enter\" ";
    cin>>U;
    if (U==0)
    goto i;
i:    switch(ans12)
     {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain YOU ARE RIGHT";
	       break;
      case 3 : cout<<" YOU ARE RIGHT \a ";
      Sleep(500);
	       break;
      case 4 : cout<<" YOU ARE WRONG,aap jaa sakte hain ";
	       break;
      }
     cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 640000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans12==3)
{
    cout<<"\n\n\n      TO AAP KO KAISA LAG RAHA HAI\n      CHALIYE AGLE SAWAL KI AUR BADTE HAIN";
    cout<<"\n      AGLAA SAWAL AAPKE COMPUTER SCREEN PE YEH RAHA\n";
    cout<<" QUESTION NO. 13\n";

    printf("      (Q) WHAT IS THE VALUE OF (A-X)(B-X)(C-X)....(Z-X) ?");
    cout<<"\n AAPKA OPTION YEH RAHA :\n\a";

    printf("(1) 0\t");
    printf("(2) 1\n");
    printf("(3) (ABCD...)(AX-X)\t");
    printf("(4) OTHER\n");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 25,00,000 : ");
    cin>>ans13;
    switch(ans13)
     {
      case 1 : cout<<" YOU ARE RIGHT\a";
      Sleep(500);
	       break;
      case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain ";
	       break;
      case 3 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 4 : cout<<" YOU ARE WRONG AAP JAA SAKTE HAIN";
	       break;
     }
	 cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 1250000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans13==1)
{
    cout<<"\n\n      TO AAP AAB PACHCHIS LAKH RUPAY JEET CHUKE HAIN\n      AUR AAP SIRF DO PRSHNA DUR HAIN EK CRORE RUPAYE SE,\n      CHALIYE AAGE BADTE HAIN";
    cout<<"\n      AGLAA SAWAL AAPKE COMPUTER SCREEN PE YEH RAHA\n";
    cout<<" QUESTION NO. 14\n";

    printf("      (Q) IN WHICH CITY JRD TATA SPORT COMPLEX LOCATED ? ");
    cout<<"\n AAPKA OPTION YEH RAHA :\n\a";

    printf("(1) KOLKATA\n");
    printf("(2) KANPUR\n");
    printf("(3) MUMBAI\n");
    printf("(4) JAMSHEDPUR\n");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 50,00,000 : ");
    cin>>ans14;
    switch(ans14)
     {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 2 : cout<<" YOU ARE WRONG AAP JAA SAKTE HAIN";
	       break;
      case 3 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 4 : cout<<" YOU ARE RIGHT \a";
      Sleep(500);
	       break;
     }
	  cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 2500000 \n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
}
if(ans14==4)
{
    cout<<"\n\n\n      AAPKA SWAGAT HAI HAMARE AAKHRI AUR PANDRAWE SAWAL ME\n      JO AAPKO EK CRORE RUPAY DILAA SAKTA HAI";
    cout<<"\n      KYA AAP TAIYAAR HAIN,\n      TO AAPKA SAWAL YEH RAHA\n";
    cout<<" DANGEROUS QUESTION NO. 15\n";

    printf("      (Q)WHO WAS THE FIRST WOMAN TO CROSS ENGLISH CHANNEL ? ");
    cout<<"\n AAPKA KHATARNAK OPTION YEH RAHA :\n\a";

    printf("(1) ARPITA CHATTERJEE\t");
    printf("(2) SOBHA GANGULY\n");
    printf("(3) AARTI SAHA\n");
    printf("(4) ROMA MUKHERJEE\t");
    printf("\n PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR Rs. 1,00,00,000 : ");
    cin>>ans15;
    cout<<"  "<<n<<",";
    switch(ans15)
     {
      case 1 : cout<<" YOU ARE WRONG,aap jaa sakte hainout";
	       break;
      case 2 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
      case 3 : printf("YOU ARE RIGHT,YOU BECOME CROREPATI\a\a");
      Sleep(500);
	       break;
      case 4 : cout<<" YOU ARE WRONG,aap jaa sakte hain";
	       break;
     }

	if (ans15==3)
      {
	cout<<"\n  WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 1,00,00,000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
      }
      if (ans15!=3)
      {
	cout<<"\n  YOU ARE WRONG BUT, WE ARE GIVING MANY MANY CONGRATULATION TO YOU\n  FOR WINNING RS. 50,00,000\n  GOVERNMENT WILL CUT 100% TAX\n  SO, SORRY WE CAN'T GIVE YOU ANY MONEY";
      }
}
else
{
cout<<"\n afsos "<<n<<" aapko game chodrkar,jana padrega ";
}
 getch();
}
