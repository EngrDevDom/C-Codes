#include<iostream.h>
#include<fstream.h> 
#include<process.h> 
#include<string.h> 
#include<stdlib.h> 
#include<stdio.h> 
#include<ctype.h> 
#include<conio.h>
#include<dos.h> 

char description() 
{ delay(2000); 
cout<<"\t\t ELECTION VOTING SOFTWARE \n\n";
delay(500);
cout<<"\t DESCRIPTION : IN THIS PROJECT , A PREDETERMINED SET OF \n\n\n";
delay(500);
cout<<"\t VOTERS WILL BE ABLE TO CAST THE VOTE .VOTERS WILL HAVE \n\n\n";
delay(500);
cout<<"\t TO PROVE THEIR IDENTITY BY GIVING THEIR IDENTIFICATION \n\n\n";
delay(500);
cout<<"\t NO. A AUTHENTICATED USER WILL BE ABLE TO CAST THE VOTE.\n\n\n";
delay(500);
cout<<"\t A USER WHO HAS CASTED THE VOTE CANNOT CAST AGAIN.AFTER \n\n\n";
delay(500);
cout<<"\t VOTING HAS FINISHED RESUTS WILL BE DECLAIR. A SETUP \n\n\n";
delay(500); 
cout<<"\t OPTION BEFORE ELECTION STARTS , WILL ALLOW VOTER TO BE \n\n\n"; 
delay(500); 
cout<<"\t CREATED AND CANDIDATE CHOOSEN. \n\n\n"; 
delay(1500); 
cout<<"\n\n\n\t\t\tPLEASE PRESS ENTER TO CONTINUE & Esc. TO EXIT\t"; 
char ch; 
for(;;) 
{ 
ch=getch(); 
if(ch==13) 
break; 
else 
if(ch==27) 
exit(-1); 
else 
cout<<"\n\n\t\t\t\a ! WRONG KEY ENTERED !"; 
delay(300); 
cout<<"\n\n\n\n\t\t\t PRESS ENTER "; 
} 
return 0; 
} 

int pass() 
{ 
char ch; 
int r=0; 
char pass[20]; 
for(;;) 
{ 
clrscr(); 
gotoxy(16,20); 
cout<<"Enter the password to initialize the setup :"; 
r=0; 
for(int i=0;;i++) 
{ 
ch=getch(); 

if(ch==13) 
{ pass[r]='\0'; 
break; 
} 

if(ch==8) 
{ 

if(i>0) 
{ cout<<ch<<" "<<ch; 
   i-=2;r--; 
} 
else 
i--; 
} 
else 
{ cout<<"*"; 
pass[r]=ch; 
r++; 
} 
} 
if(strcmp("omkar",pass)==0) 
return 0; 
else 
{ 
cout<<"\n\n\t\t\a!! INVALID PASSWORD !!"; 
delay(300); 
cout<<"\n\n\t\t--> TRY AGAIN"; 
getch(); 
} 
} 
} 
int string_is_number(char* s) 
{ 
int size = strlen(s); 
for(int i = 0; i < size; i++) 
if (!(s[i] >= '0' && s[i] <= '9')) 
return 0; 
return 1; 
} 
class voter_status 
{ 
public: 
int voter_namecode; 
int voting_status; 
}; 
class candidate_record:public voter_status 
{ 
public: 
int candidate_namecode ; 
char candidate_name[50] ; 
char partyname[50], partysign[50] ; 
char summary[1]; 
char revenue[100]; 
char age[100]; 
char area[50]; 
}; 
class voter_record 
{ 
public: 
int voter_namecode ; 
char voter_name[50] ; 
char age[10], gender[10] ; 
}; 
class candidate_status 
{ 
public: 
int candidate_namecode; 
int numVotes; 
}; 
class vote 
{ 
public : 
void add_candidate_name(void) ; 
void delete_candidate_name(void) ; 
void modify_candidate_name(void) ; 
void list_of_candidate_names(void) ; 
void voting(void) ; 
void add_voter_name(void) ; 
void delete_voter_name(void) ; 
void modify_voter_name(void) ; 
void list_of_voters_names(void) ; 
private : 
int last_candidate_code(int &num_candidates) ; 
void delete_candidate_record(int) ; 
void modify_candidate_record(int) ; 
void display_candidate_record(int) ; 
int name_candidate_found(int) ; 
int candidate_recordno(int, candidate_record&) ; 
void candidate_sort(void) ; 
int last_voter_code(int &num_voters) ; 
void delete_voter_record(int) ; 
void modify_voter_record(int) ; 
void display_voter_record(int) ; 
int name_voter_found(int) ; 
int voter_recordno(int, voter_record &vr) ; 
void voter_sort(void) ; 
voter_status* init_voter_status(int &num); 
candidate_status* init_candidate_status(int &num); 
} ; 
class menu 
{ 
public : 
void main_menu(void) ; 
private : 
void edit_menu(void) ; 
vote v; 
} ; 
void menu :: main_menu(void) 
{ 
clrscr() ; 
char ch ; 
while (1) 
{ 
clrscr(); 
gotoxy(27,4) ; 
cout<<" E L E C T I O N "; 
gotoxy(27,6); 
cout <<" V O T I N G  S O F T W A R E " ; 
gotoxy(31,8) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~" ; 
gotoxy(32,9) ; 
cout <<"1: VOTE " ; 
gotoxy(32,11) ; 
cout <<"2: SEE MENU " ; 
gotoxy(32,13) ; 
cout <<"3: EDIT " ; 
gotoxy(32,17) ; 
cout <<"0: QUIT " ; 
gotoxy(32,20) ; 
cout <<"Enter Choice : " ; 
ch = getche() ; 
if (ch == 27) 
return ; 
else 
if (ch == '1') 
{ 
vote v ; 
v.voting() ; 
} 
else 
if (ch == '2') 
{ 
vote v ; 
v.list_of_candidate_names() ; 
gotoxy(1,20) ; 
cout <<"Press any key to see the voters details" ; 
getche() ; 

v.list_of_voters_names(); 
} 
else 
if (ch == '3') 
edit_menu() ; 

else 
if (ch == '0') 
break ; 
} 
} 

 void menu :: edit_menu(void) 
{ 
clrscr(); 
char ch,choice; 
cout<<" \EDIT \MENU \n\n"; 

cout<<" 1: \* EDIT CANDIDATE RECORD \*\n"; 

cout<<" 2: \* EDIT VOTER RECORD \*\n"; 

cout<<" 0: \* EXIT \*\n"; 
cout<<" \ENTER \CHOICE: "; 
choice = getche(); 
if (choice == '1') 
{ 
while(1) 
{ 
gotoxy(28,10) ; 
cout <<" * EDIT CANDIDATE RECORD *" ; 
gotoxy(28,12) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
gotoxy(28,14) ; 
cout <<"1: * \ADD \CANDIDATE \NAME * " ; 
gotoxy(28,16) ; 
cout <<"2: * \MODIFY \CANDIDATE \NAME *" ; 
gotoxy(28,18) ; 
cout <<"3: * \DELETE \CANDIDATE \NAME *" ; 
gotoxy(28,20) ; 
cout <<"0: * \EXIT *" ; 
gotoxy(28,22) ; 
cout <<" ENTER CHOICE: " ; 
ch = getche() ; 
if (ch == '1') 
{ 
vote v ; 
v.add_candidate_name() ; 
break ; 
} 
else if (ch == '2') 
{ 
vote v ; 
v.modify_candidate_name() ; 
break ; 
} 
else if (ch == '3') 
{ 
vote v ; 
v.delete_candidate_name() ; 
break ; 
} 
else 
if (ch == '0') 
break ; 
} 
} 
if(choice=='2') 
{ 
while (1) 
{ 
gotoxy(28,10) ; 
cout <<" * EDIT VOTER RECORD *" ; 
gotoxy(28,12) ; 
cout <<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
gotoxy(28,14) ; 
cout <<"1: * \ADD \VOTER \NAME * " ; 
gotoxy(28,16) ; 
cout <<"2: * \MODIFY \VOTER \NAME * " ; 
gotoxy(28,18) ; 
cout <<"3: * \DELETE \VOTER \NAME * " ; 
gotoxy(28,20) ; 
cout <<"0: * EXIT " ; 
gotoxy(28,22) ; 
cout <<"Enter Choice: " ; 
ch = getche() ; 
if (ch == '1') 
{ 
vote v ; 
v.add_voter_name() ; 
break ; 
} 
else if (ch == '2') 
{ 
vote v ; 
v.modify_voter_name() ; 
break ; 
} 
else if (ch == '3') 
{ 
vote v ; 
v.delete_voter_name() ; 
break ; 
} 
else if (ch == '0') 
break ; 
} 
} 
} 

int vote :: last_voter_code(int &num_voters) 
{ 
voter_record vr; 
fstream file ; 
num_voters = 0; 
file.open("VOTER.DAT", ios::in|ios::binary) ; 
file.seekg(0,ios::beg) ; 
int t=0 ; 
while (file.read((char *)&vr,sizeof(voter_record))) 
{ 
t = vr.voter_namecode ; 
num_voters++; 
} 
file.close() ; 
return t ; 
} 

void vote :: list_of_voters_names(void) 
{ 
clrscr() ; 
voter_record vr; 
fstream file ; 
file.open("VOTER.DAT", ios::in|ios::binary) ; 
file.seekg(0) ; 
int row = 6 , found = 0 , pageno = 1 ; 
gotoxy(30,2) ; 
cout <<"LIST OF NAMES OF VOTERS" ; 
gotoxy(29,3) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
gotoxy(3,4) ; 
cout <<"NAME CODE NAME AGE GENDER" ; 
gotoxy(2,5) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
while (file.read((char *)&vr, sizeof(voter_record))) 
{ 
delay(20) ; 
found = 1 ; 
gotoxy(5,row) ; 
cout <<vr.voter_namecode ; 
gotoxy(14,row) ; 
cout	<<vr.voter_name ; 
gotoxy(37,row) ; 
cout	<<vr.age; 
gotoxy(51,row) ; 
cout	<<vr.gender; ; 
if ( row == 22 ) 
{ 
row = 5 ; 
gotoxy(66,1) ; 
cout <<"Page no. : " <<pageno ; 
gotoxy(66,2) ; 
cout <<"===============" ; 
pageno++ ; 
gotoxy(1,25) ; 
cout <<"Press any key to continue..." ; 
getche() ; 
clrscr() ; 
gotoxy(3,4) ; 
cout << "NAME CODE NAME AGE GENDER " ; 
gotoxy(2,5) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
} 
else 
row++ ; 
} 
if ( !found ) 
{ 
gotoxy(5,10) ; 
cout <<"\7Records not found " ; 
} 
gotoxy(66,1) ; 
cout <<"Page no. : " <<pageno ; 
gotoxy(66,2) ; 
cout <<"===============" ; 
gotoxy(1,20) ; 
cout <<"Press any key to continue..." ; 
getche() ; 
file.close () ; 
} 

void vote :: add_voter_name(void) 
{ 
voter_record vr; 
int vcode, valid ; 
char ch; 
int num_voters; 
vcode = last_voter_code(num_voters) ; 
vcode++ ; 
do 
{ 
clrscr() ; 
gotoxy(71,2) ; 
cout <<"<0>=Exit" ; 
gotoxy(23,3) ; 
cout <<" ADD NAME TO THE VOTER LIST" ; 
gotoxy(23,4) ; 
cout <<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
gotoxy(5,6) ; 
cout <<"Name Code : " <<vcode ; 
gotoxy(5,8) ; 
cout <<"Name: " ; 
gotoxy(5,10) ; 
cout <<"Age: " ; 
gotoxy(5,12) ; 
cout <<"Gender: " ; 
do 
{ 
valid = 1 ; 
gotoxy(1,8) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER NAME OF THE VOTER TO ADD IN THE LIST" ; 
gotoxy(5,8) ; 
cout <<" Name : " ; 
gets(vr.voter_name) ; 
strupr(vr.voter_name) ; 
if (vr.voter_name[0] == '0') 
return ; 
if ((strlen(vr.voter_name) < 1) || (strlen(vr.voter_name) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = A...Z" ; 
getch() ; 
} 
} while (!valid) ; 
do 
{ 
valid = 1 ; 
gotoxy(1,10) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER AGE OF VOTER TO ADD IN THE LIST" ; 
gotoxy(5,10) ; 
cout <<"Age : " ; 
gets(vr.age) ; 
strupr(vr.age); 
if (vr.age[0] == '0') 
return ; 
if ((strlen(vr.age) < 1) || (strlen(vr.age) > 3 ) || (!string_is_number(vr.age))) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = 18...100" ; 
getch() ; 
} 
if (atoi(vr.age) < 18) 
{ 
valid = 0; 
gotoxy(3,24); 
cout <<"\7 Voter's age is less than 18"; 
getch(); 
} 

} while (!valid) ; 
do 
{ 
valid = 1 ; 
gotoxy(1,12) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER GENDER OF VOTER TO ADD IN THE MENU" ; 
gotoxy(5,12) ; 
cout <<"GENDER : " ; 
gets(vr.gender) ; 
strupr(vr.gender); 
if (vr.gender[0] == '0') 
return ; 
if ((strlen(vr.gender) < 1) ||(strlen(vr.gender) > 1) 
|| (strcmp(vr.gender,"M") && strcmp(vr.gender,"F"))) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = M/F" ; 
getch() ; 
} 
} while (!valid) ; 
do 
{ 
gotoxy(1,15) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(5,15) ; 
cout <<"Do you want to save this record (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
if (ch == 'Y') 
{ 
vr.voter_namecode = vcode ; 
fstream file ; 
file.open("VOTER.DAT", ios::out | ios::app |ios::binary) ; 
file.write((char *)&vr, sizeof(voter_record)) ; 
file.close() ; 
vcode++ ; 
} 
do 
{ 
gotoxy(1,17) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(5,17) ; 
cout <<"Do you want to add more records (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
} while (ch == 'Y') ; 
} 

void vote :: display_voter_record(int vcode) 
{ 
voter_record vr; 
fstream file ; 
file.open("VOTER.DAT", ios::in|ios::binary) ; 
file.seekg(0,ios::beg) ; 
while (file.read((char *)&vr, sizeof(voter_record))) 
{ 
if (vr.voter_namecode == vcode) 
{ 
gotoxy(5,3) ; 
cout <<"Name Code : "<<vr.voter_namecode ; 
gotoxy(5,4) ; 
cout <<"Name : "<<vr.voter_name ; 
gotoxy(5,5) ; 
cout <<"Age : "<<vr.age ; 
gotoxy(5,6) ; 
cout <<"Gender : "<<vr.gender ; 
break ; 
} 
} 
file.close() ; 
} 

int vote :: name_voter_found(int tcode) 
{ 
voter_record vr; 
fstream file ; 
file.open("VOTER.DAT", ios::in|ios::binary) ; 
file.seekg(0,ios::beg) ; 
int found=0 ; 
while (file.read((char *)&vr, sizeof(voter_record))) 
{ 
if (vr.voter_namecode == tcode) 
{ 
found++ ; 
break ; 
} 
} 
file.close() ; 
return found ; 
} 

int vote :: voter_recordno(int tcode, voter_record &vr) 
{ 
voter_record temp; 
fstream file ; 
file.open("VOTER.DAT", ios::in|ios::binary) ; 
file.seekg(0,ios::beg) ; 
int found=0 ; 
while (file.read((char *)&temp, sizeof(voter_record))) 
{ 
found++ ; 
if (temp.voter_namecode == tcode) 
{ 
vr = temp; 
break ; 
} 
} 
file.close() ; 
return found ; 
} 

void vote :: delete_voter_record(int tcode) 
{ 
voter_record vr; 
fstream file ; 
file.open("VOTER.DAT", ios::in|ios::binary) ; 
fstream temp ; 
temp.open("temp.dat", ios::out|ios::binary) ; 
file.seekg(0,ios::beg) ; 
while ( !file.eof() ) 
{ 
file.read((char *)&vr, sizeof(voter_record)) ; 
if ( file.eof() ) 
break ; 
if ( vr.voter_namecode != tcode ) 
temp.write((char *)&vr, sizeof(voter_record)) ; 
} 
file.close() ; 
temp.close() ; 
file.open("VOTER.DAT", ios::out|ios::binary) ; 
temp.open("temp.dat", ios::in|ios::binary) ; 
temp.seekg(0,ios::beg) ; 
while ( !temp.eof() ) 
{ 
temp.read((char *)&vr, sizeof(voter_record)) ; 
if ( temp.eof() ) 
break ; 
file.write((char *)&vr, sizeof(voter_record)) ; 
} 
file.close() ; 
temp.close() ; 
} 

void vote :: delete_voter_name(void) 
{ 
clrscr() ; 
char t_code[5], ch ; 
int tcode ; 
gotoxy(3,25) ; 
cout <<"Press <ENTER> to see the list" ; 
gotoxy(5,3) ; 
cout <<"Enter Name Code of the item to be deleted : " ; 
gets(t_code) ; 
tcode = atoi(t_code) ; 
if (tcode == 0) 
{ 
list_of_voters_names() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"Press <ENTER> to Exit" ; 
gotoxy(5,24) ; 
cout <<"Enter Name Code of the item to be deleted : " ; 
gets(t_code) ; 
tcode = atoi(t_code) ; 
if (tcode == 0) 
return ; 
} 
clrscr() ; 
if (!name_voter_found(tcode)) 
{ 
gotoxy(5,5) ; 
cout <<"\7Record not found" ; 
getch() ; 
return ; 
} 
display_voter_record(tcode) ; 
do 
{ 
gotoxy(1,8) ; clreol() ; 
gotoxy(5,8) ; 
cout <<"Do you want to delete this record (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
} while (ch != 'N' && ch != 'Y') ; 
if (ch == 'N') 
return ; 
delete_voter_record(tcode) ; 
gotoxy(5,15) ; 
cout <<"\7Record Deleted" ; 
getch() ; 
} 

void vote :: modify_voter_record(int tcode) 
{ 
voter_record vr; 
int recno ; 
recno = voter_recordno(tcode,vr) ; 

if (recno == 0) 
return; 
int valid, t_code ; 
char ch,t_namecode[5] ; 
gotoxy(71,2) ; 
cout <<"<0>=Exit" ; 
gotoxy(5,12) ; 
cout <<"Name Code : " ; 
gotoxy(5,14) ; 
cout <<" Name : " ; 
gotoxy(5,16) ; 
cout <<" Age : " ; 
gotoxy(5,18) ; 
cout <<"Gender: " ; 
do 
{ 
gotoxy(20,12) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,12) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER NAME CODE TO ADD IN THE MENU" ; 
gotoxy(5,12) ; 
cout <<"Name Code : " ; 
gets(t_namecode) ; 
vr.voter_namecode = atoi(t_namecode) ; 
if (vr.voter_namecode == 0) 
return ; 
if (name_voter_found(vr.voter_namecode) && vr.voter_namecode != tcode) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 CODE ALREADY GIVEN" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(20,14) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,14) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER NAME TO ADD IN THE MENU" ; 
gotoxy(5,14) ; 
cout <<" Name : " ; 
gets(vr.voter_name) ; 
strupr(vr.voter_name) ; 
if (vr.voter_name[0] == '0') 
return ; 
if ((strlen(vr.voter_name) < 1) || (strlen(vr.voter_name) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = 1..50" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(20,16) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,16) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER AGE OF VOTER TO ADD IN THE MENU" ; 
gotoxy(5,16) ; 
cout <<"Age : " ; 
gets(vr.age) ; 
strupr(vr.age); 
if (vr.age[0] == '0') 
return ; 
if ((strlen(vr.age) < 1) || (strlen(vr.age) > 10) || !string_is_number(vr.age)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = 1..10" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(20,18) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,18) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER GENDER OF VOTER TO ADD IN THE MENU" ; 
gotoxy(5,18) ; 
cout <<"Gender : " ; 
gets(vr.gender) ; 
strupr(vr.gender); 
if (vr.gender[0] == '0') 
return ; 
if ((strlen(vr.gender) < 1) || (strlen(vr.gender) > 10)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = " <<vr.gender <<"..10" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(1,21) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(5,21) ; 
cout <<"Do you want to save this record (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
if (ch == 'N') 
return ; 

getch() ; 
fstream file ; 
file.open("VOTER.DAT", ios::out | ios::ate|ios::binary) ; 
int location ; 
location = (recno-1) * sizeof(vr) ; 
cout << " Location is " << location; 
file.seekp(location) ; 
file.write((char *) &vr, sizeof(voter_record)) ; 
file.close() ; 
voter_sort() ; 
clrscr() ; 
gotoxy(5,15) ; 
cout <<"\7Record Modified" ; 
getch() ; 
} 
void vote :: modify_voter_name(void) 
{ 
clrscr() ; 
char t_code[5], ch ; 
int tcode ; 
gotoxy(3,25) ; 
cout <<"Press <ENTER> to see the list" ; 
gotoxy(5,3) ; 
cout <<"Enter Name Code of the item to be Modify : " ; 
gets(t_code) ; 
tcode = atoi(t_code) ; 
if (tcode == 0) 
{ 
list_of_voters_names() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"Press <ENTER> to Exit" ; 
gotoxy(5,24) ; 
cout <<"Enter Name Code of the item to be modify : " ; 
gets(t_code) ; 
tcode = atoi(t_code) ; 
if (tcode == 0) 
return ; 
} 
clrscr() ; 
if (!name_voter_found(tcode)) 
{ 
gotoxy(5,5) ; 
cout <<"\7Record not found" ; 
getch() ; 
return ; 
} 
display_voter_record(tcode) ; 
do 
{ 
gotoxy(5,8) ; 
cout <<"Do you want to Modify this record (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
} while (ch != 'N' && ch != 'Y') ; 
if (ch == 'N') 
return ; 
modify_voter_record(tcode) ; 
} 
void vote :: voter_sort(void) 
{ 
int i=0,j ; 
voter_record *arr, temp ; 
fstream file ; 
file.open("VOTER.DAT", ios::in|ios::binary) ; 
while (file.read((char *) &temp, sizeof(voter_record))) 
i++ ; 
file.clear(); 
arr = (voter_record*) new voter_record[i]; 
int size ; 
size = i ; 
file.seekg(0,ios::beg) ; 
for( i = 0; i < size; i++) 
file.read((char*)&(arr[i]),sizeof(voter_record)); 
file.close() ; 

for (i=1; i<size; i++) 
{ 
for (j=0; j<size-i; j++) 
{ 
if (arr[j].voter_namecode > arr[j+1].voter_namecode) 
{ 
temp=arr[j]; 
arr[j]=arr[j+1]; 
arr[j+1]=temp; 
} 
} 
} 

file.open("VOTER.DAT", ios::out|ios::binary) ; 

for (i=0; i<size; i++) 
file.write((char *) &arr[i], sizeof(voter_record)); 
delete[] arr; 

file.close() ; 
} 

void main(void) 
{ 
clrscr() ; 
char des; 
description(); 
//	exit(); 
clrscr(); 
char p; 
pass(); 
clrscr(); 
menu m ; 
m.main_menu() ; 

} 
void vote :: candidate_sort(void) 
{ 
int i=0,j ; 
candidate_record *arr, temp ; 
fstream file ; 
file.open("CANDIDATE.DAT", ios::in|ios::binary) ; 

while (file.read((char *) &temp, sizeof(candidate_record))) 
i++ ; 

file.clear(); 

arr = (candidate_record*) new candidate_record[i]; 
int size ; 
size = i ; 
file.seekg(0,ios::beg) ; 
for( i = 0; i < size; i++) 
file.read((char*)&arr[i],sizeof(candidate_record)); 
file.close() ; 
for (i=1; i<size; i++) 
{ 
for (j=0; j<size-i; j++) 
{ 
if (arr[j].candidate_namecode > arr[j+1].candidate_namecode) 
{ 
temp=arr[j]; 
arr[j]=arr[j+1]; 
arr[j+1]=temp; 
} 
} 
} 
file.open("CANDIDATE.DAT", ios::out|ios::binary) ; 
for (i=0; i<size; i++) 
file.write((char *) &arr[i], sizeof(candidate_record)); 
delete[] arr; 

file.close() ; 
} 

void vote :: modify_candidate_name(void) 
{ 
clrscr() ; 
char t_code[5], ch ; 
int tcode ; 
gotoxy(3,25) ; 
cout <<"Press <ENTER> to see the list" ; 
gotoxy(5,3) ; 
cout <<"Enter Name Code of the item to be Modify : " ; 
gets(t_code) ; 
tcode = atoi(t_code) ; 
if (tcode == 0) 
{ 
list_of_candidate_names() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"Press <ENTER> to Exit" ; 
gotoxy(5,24) ; 
cout <<"Enter Name Code of the item to be modify : " ; 
gets(t_code) ; 
tcode = atoi(t_code) ; 
if (tcode == 0) 
return ; 
} 
clrscr() ; 
if (!name_candidate_found(tcode)) 
{ 
gotoxy(5,5) ; 
cout <<"\7Record not found" ; 
getch() ; 
return ; 
} 
display_candidate_record(tcode) ; 
do 
{ 
gotoxy(5,8) ; 
cout <<"Do you want to Modify this record (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
} while (ch != 'N' && ch != 'Y') ; 
if (ch == 'N') 
return ; 
modify_candidate_record(tcode) ; 
} 
void vote :: modify_candidate_record(int tcode) 
{ 
candidate_record cr; 
int recno ; 
int revenue; 
recno = candidate_recordno(tcode,cr) ; 
int valid, t_code ; 
char ch,t_namecode[5] ; 
gotoxy(71,2) ; 
cout <<"<0>=Exit" ; 
gotoxy(5,12) ; 
cout <<"Name Code : " ; 
gotoxy(5,14) ; 
cout <<" Name : " ; 
gotoxy(5,16) ; 
cout <<" Party Name : " ; 
gotoxy(5,18) ; 
cout <<"Party Sign: " ; 
gotoxy(5,20) ; 
cout <<"Summary : " ; 
do 
{ 
gotoxy(20,12) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,12) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER NAME CODE TO ADD IN THE MENU" ; 
gotoxy(5,12) ; 
cout <<"Name Code : " ; 
gets(t_namecode) ; 
cr.candidate_namecode = atoi(t_namecode) ; 
if (cr.candidate_namecode == 0) 
return ; 
if (name_candidate_found(cr.candidate_namecode) && cr.candidate_namecode != tcode) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 CODE ALREADY GIVEN" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(20,14) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,14) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER NAME TO ADD IN THE MENU" ; 
gotoxy(5,14) ; 
cout <<" Name : " ; 
gets(cr.candidate_name) ; 
strupr(cr.candidate_name) ; 
if (cr.candidate_name[0] == '0') 
return ; 
if ((strlen(cr.candidate_name) < 1) || (strlen(cr.candidate_name) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = 1..50" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(20,16) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,16) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER PARTY NAME TO ADD IN THE MENU" ; 
gotoxy(5,16) ; 
cout <<"Party Name : " ; 
gets(cr.partyname) ; 
strupr(cr.partyname); 
if (cr.partyname[0] == '0') 
return ; 
if ((strlen(cr.partyname) < 1) || (strlen(cr.partyname) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = 1..50" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(20,18) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,18) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER PARTY SIGN TO ADD IN THE MENU" ; 
gotoxy(5,18) ; 
cout <<"Party Sign : " ; 
gets(cr.partysign) ; 
strupr(cr.partysign); 
if (cr.partysign[0] == '0') 
return ; 
if ((strlen(cr.partysign) < 1) || (strlen(cr.partysign) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = " <<cr.partysign <<"..50" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(20,20) ; clreol() ; 
cout <<"Change (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
valid = 0 ; 
while (ch == 'Y' && !valid) 
{ 
valid = 1 ; 
gotoxy(1,20) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER THE SUMMARY OF THE CANDIDATE" ; 
gotoxy(5,20) ; 
cout <<"Summary declared: " ; 
gets(cr.summary) ; 
strupr(cr.summary); 
if (cr.summary[0] == '0') 
return ; 
if ((strlen(cr.summary) < 1) || (strlen(cr.summary) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = " <<cr.summary <<"..50" ; 
getch() ; 
} 
} 
do 
{ 
gotoxy(1,21) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(5,21) ; 
cout <<"Do you want to save this record (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
if (ch == '0') 
return ; 
} while (ch != 'N' && ch != 'Y') ; 
if (ch == 'N') 
return ; 
getch() ; 
fstream file ; 
file.open("CANDIDATE.DAT", ios::out | ios::ate|ios::binary) ; 
int location ; 
location = (recno-1) * sizeof(cr) ; 
file.seekp(location) ; 
file.write((char *) &cr, sizeof(candidate_record)) ; 
file.close() ; 
candidate_sort() ; 
clrscr() ; 
gotoxy(5,15) ; 
cout <<"\7Record Modified" ; 
getch() ; 
} 
int vote :: name_candidate_found(int tcode) 
{ 
candidate_record cr; 
fstream file ; 
file.open("CANDIDATE.DAT", ios::in|ios::binary) ; 
file.seekg(0,ios::beg) ; 
int found=0 ; 
while (file.read((char *)&cr, sizeof(candidate_record))) 
{ 
if (cr.candidate_namecode == tcode) 
{ 
found++ ; 
break ; 
} 
} 
file.close() ; 
return found ; 
} 
void vote :: display_candidate_record(int tcode) 
{ candidate_record cr; 
fstream file ; 
file.open("CANDIDATE.DAT", ios::in|ios::binary) ; 
file.seekg(0,ios::beg) ; 
while (file.read((char *)&cr, sizeof(candidate_record))) 
{ 
if (cr.candidate_namecode == tcode) 
{ 
gotoxy(5,3) ; 
cout <<"Name Code : "<<cr.candidate_namecode ; 
gotoxy(5,4) ; 
cout <<"Name : "<<cr.candidate_name ; 
gotoxy(5,5) ; 
cout <<"Party Name : "<<cr.partyname ; 
gotoxy(5,6) ; 
cout <<"Party Sign : "<<cr.partysign ; 
gotoxy(5,7) ; 
cout <<"Revenue : "<<cr.revenue ; 
gotoxy(5,8) ; 
cout <<"Age : "<<cr.age ; 
gotoxy(5,9) ; 
cout <<"Area : "<<cr.area ; 
break ; 
} 
} 
file.close() ; 
} 
void vote :: add_candidate_name(void) 
{ 
candidate_record cr; 
int tcode, valid ; 
char ch; 
int num_candidates; 
tcode = last_candidate_code(num_candidates) ; 
tcode++ ; 
do 
{ 
clrscr() ; 
gotoxy(71,2) ; 
cout <<"<0>=Exit" ; 
gotoxy(27,3) ; 
cout <<" ADD NAME TO THE CANDIDATE LIST" ; 
gotoxy(26,4) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
gotoxy(5,6) ; 
cout <<"Name Code : " <<tcode ; 
gotoxy(5,8) ; 
cout <<"Name : " ; 
gotoxy(5,10) ; 
cout <<"Party Name : " ; 
gotoxy(5,12) ; 
cout <<"Party Sign : " ; 
gotoxy(5,14) ; 
cout <<"Summary : " ; 
do 
{ 
valid = 1 ; 
gotoxy(1,8) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"ENTER NAME TO ADD IN THE CANDIDATE LIST" ; 
gotoxy(5,8) ; 
cout <<"Name : " ; 
gets(cr.candidate_name) ; 
strupr(cr.candidate_name) ; 
if (cr.candidate_name[0] == '0') 
return ; 
if ((strlen(cr.candidate_name) < 1) || (strlen(cr.candidate_name) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = A.....Z" ; 
getch() ; 
} 
}while (!valid) ; 
do 
{ 
valid = 1 ; 
gotoxy(1,10) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(5,25) ; 
cout <<"ENTER PARTY NAME TO ADD IN THE LIST" ; 
gotoxy(5,10) ; 
cout <<"Party Name : " ; 
gets(cr.partyname) ; 
strupr(cr.partyname); 
if (cr.partyname[0] == '0') 
return ; 
if ((strlen(cr.partyname) < 1) || (strlen(cr.partyname) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = A.....Z" ; 
getch() ; 
} 
} while (!valid) ; 
do 
{ 
valid = 1 ; 
gotoxy(1,12) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 

gotoxy(5,25) ; 
cout <<"ENTER PARTY SIGN TO ADD IN THE MENU" ; 
gotoxy(5,12) ; 
cout <<"Party Sign : " ; 
gets(cr.partysign) ; 
strupr(cr.partysign); 
if (cr.partysign[0] == '0') 
return ; 
if ((strlen(cr.partysign) < 1) ||(strlen(cr.partysign) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = A.....Z" ; 
getch() ; 
} 
} while (!valid) ; 
do 
{ 
valid = 1; 
gotoxy(1,14) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 

gotoxy(5,25) ; 
cout <<"ENTER SUMMARY OF THE CANDIDATE" ; 
gotoxy(5,14) ; 
cout <<"SUMMARY AS FOLLOWS " ; 
getch(); 
//	gets(cr.summary) ; 
strupr(cr.summary); 
if (cr.summary[0] == '0') 
return ; 
if ((strlen(cr.summary) < 1) ||(strlen(cr.summary) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = A.....Z" ; 
getch() ; 
} 
} while (!valid) ; 
do 
{ 
valid = 1; 
gotoxy(1,16) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 

gotoxy(5,25) ; 
cout <<"ENTER REVENUE OF THE CANDIDATE" ; 
gotoxy(5,16) ; 
cout <<"Revenue : " ; 
gets(cr.revenue) ; 
strupr(cr.revenue); 
if (cr.revenue[0] == '0') 
return ; 
if ((strlen(cr.revenue) < 1) ||(strlen(cr.revenue) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = A.....Z" ; 
getch() ; 
} 
} while (!valid) ; 
do 
{ 
valid = 1; 
gotoxy(1,18) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 

gotoxy(5,25) ; 
cout <<"ENTER AGE OF THE CANDIDATE" ; 
gotoxy(5,18) ; 
cout <<"Age : " ; 
gets(cr.age) ; 
strupr(cr.age); 
if (cr.age[0] == '0') 
return ; 
if ((strlen(cr.age) < 1) ||(strlen(cr.age) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = A.....Z" ; 
getch() ; 
} 
} while (!valid) ; 
do 
{ 
valid = 1; 
gotoxy(1,20) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 

gotoxy(5,25) ; 
cout <<"ENTER AREA OF THE CANDIDATE" ; 
gotoxy(5,20) ; 
cout <<"Area : " ; 
gets(cr.area) ; 
strupr(cr.area); 
if (cr.area[0] == '0') 
return ; 
if ((strlen(cr.area) < 1) ||(strlen(cr.area) > 50)) 
{ 
valid = 0 ; 
gotoxy(3,24) ; 
cout <<"\7 Range = A.....Z" ; 
getch() ; 
} 
} while (!valid) ; 
do 
{ 
gotoxy(1,15) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(5,28) ; 
cout <<"Do you want to save this record (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
} while (ch != 'N' && ch != 'Y') ; 
if (ch == 'Y') 
{ 
cr.candidate_namecode = tcode ; 
fstream file ; 
file.open("CANDIDATE.DAT", ios::out | ios::app | ios::binary) ; 
file.write((char *)&cr, sizeof(candidate_record)) ; 
file.close() ; 
tcode++ ; 
} 
do 
{ 
gotoxy(1,17) ; clreol() ; 
gotoxy(1,24) ; clreol() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(5,30) ; 
cout <<"Do you want to add more records (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
} while (ch != 'N' && ch != 'Y') ; 
} while (ch == 'Y') ; 
} 

void vote :: list_of_candidate_names(void) 
{ 
clrscr() ; 

candidate_record cr; 
fstream file ; 
file.open("CANDIDATE.DAT", ios::in|ios::binary) ; 
file.seekg(0) ; 
int row = 6 , found = 0 , pageno = 1 ; 
gotoxy(30,2) ; 
cout <<"LIST OF NAMES OF CANDIDATES" ; 
gotoxy(29,3) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
gotoxy(3,4) ; 
cout <<"NAME CODE NAME PARTY NAME PARTY SIGN REVENUE AGE AREA"; 
gotoxy(2,5) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
while (file.read((char *)&cr, sizeof(candidate_record))) 
{ 
delay(20) ; 
found = 1 ; 
gotoxy(5,row) ; 
cout <<cr.candidate_namecode ; 
gotoxy(14,row) ; 
cout	<<cr.candidate_name ; 
gotoxy(31,row) ; 
cout	<<cr.partyname ; 
gotoxy(45,row) ; 
cout	<<cr.partysign ; 
gotoxy(58,row) ; 
cout <<cr.revenue ; 
gotoxy(69,row) ; 
cout <<cr.age ; 
gotoxy(75,row) ; 
cout <<cr.area ; 
if ( row == 22 ) 
{ 
row = 5 ; 
gotoxy(66,1) ; 
cout <<"Page no. : " <<pageno ; 
gotoxy(66,2) ; 
cout <<"===============" ; 
pageno++ ; 
gotoxy(1,25) ; 
cout <<"Press any key to continue..." ; 
getche() ; 
clrscr() ; 
gotoxy(3,4) ; 
cout << "NAME CODE NAME PARTY NAME PARTY SIGN REVENUE AGE AREA" ; 
gotoxy(2,5) ; 
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ; 
} 
else 
row++ ; 
} 
if ( !found ) 
{ 
gotoxy(5,10) ; 
cout <<"\7Records not found " ; 
} 
gotoxy(66,1) ; 
cout <<"Page no. : " <<pageno ; 
gotoxy(66,2) ; 
cout <<"===============" ; 
gotoxy(1,20) ; 
cout <<"Press any key to continue..." ; 
getche() ; 
file.close () ; 
} 
int vote :: last_candidate_code(int &num_candidates) 
{ 
candidate_record cr; 
fstream file ; 
num_candidates = 0; 
file.open("CANDIDATE.DAT", ios::in|ios::binary) ; 
file.seekg(0,ios::beg) ; 
int t=0 ; 
while (file.read((char *) &cr, sizeof(candidate_record))) 
{ 
t = cr.candidate_namecode ; 
num_candidates++; 
} 
file.close() ; 
return t ; 
} 

int vote :: candidate_recordno(int tcode,candidate_record &cr) 
{ 
candidate_record temp; 
fstream file ; 
file.open("CANDIDATE.DAT", ios::in|ios::binary) ; 
file.seekg(0,ios::beg) ; 
int found=0 ; 
while (file.read((char *) &temp, sizeof(candidate_record))) 
{ 
found++ ; 
if (temp.candidate_namecode == tcode) 
{ 
cr = temp; 
break ; 
} 
} 
file.close() ; 
return found ; 
}  
void vote :: delete_candidate_record(int tcode) 
{ 
candidate_record cr; 
fstream file ; 
file.open("CANDIDATE.DAT", ios::in|ios::binary) ; 
fstream temp ; 
temp.open("temp.dat", ios::out|ios::binary) ; 
file.seekg(0,ios::beg) ; 
while ( !file.eof() ) 
{ 
file.read((char *)&cr, sizeof(candidate_record)) ; 
if ( file.eof() ) 
break ; 
if ( cr.candidate_namecode != tcode ) 
temp.write((char *)&cr, sizeof(candidate_record)) ; 
} 
file.close() ; 
temp.close() ; 
file.open("CANDIDATE.DAT", ios::out|ios::binary) ; 
temp.open("temp.dat", ios::in|ios::binary) ; 
temp.seekg(0,ios::beg) ; 
while ( !temp.eof() ) 
{ 
temp.read((char *)&cr, sizeof(candidate_record)) ; 
if ( temp.eof() ) 
break ; 
file.write((char *) &cr, sizeof(candidate_record)) ; 
} 
file.close() ; 
temp.close() ; 
}  
void vote :: delete_candidate_name(void) 
{ 
clrscr() ; 
char t_code[5], ch ; 
int tcode ; 
gotoxy(3,25) ; 
cout <<"Press <ENTER> to see the list" ; 
gotoxy(5,3) ; 
cout <<"Enter Name Code of the item to be deleted : " ; 
gets(t_code) ; 
tcode = atoi(t_code) ; 

if (tcode == 0) 
{ 
list_of_candidate_names() ; 
gotoxy(1,25) ; clreol() ; 
gotoxy(3,25) ; 
cout <<"Press 0 to EXIT" ; 
gotoxy(5,24) ; 
cout <<"Enter Name Code of the item to be deleted : " ; 
gets(t_code) ; 
tcode = atoi(t_code) ; 
if (tcode == 0) 
return ; 
} 
clrscr() ; 
if (!name_candidate_found(tcode)) 
{ 
gotoxy(5,5) ; 
cout <<"\7Record not found" ; 
getch() ; 
return ; 
} 
display_candidate_record(tcode) ; 
do 
{ 
gotoxy(1,8) ; clreol() ; 
gotoxy(5,8) ; 
cout <<"Do you want to delete this record (y/n) : " ; 
ch = getche() ; 
ch = toupper(ch) ; 
} while (ch != 'N' && ch != 'Y') ; 
if (ch == 'N') 
return ; 
delete_candidate_record(tcode) ; 
gotoxy(5,15) ; 
cout <<"\7Record Deleted" ; 
getch() ; 
} 
voter_status* vote::init_voter_status(int &num) 
{ 
voter_status *vs = NULL; 
num = 0; 
last_voter_code(num); 
if (num != 0) 
{ 
vs = new voter_status[num]; 
voter_record vr; 
fstream file ; 
file.open("VOTER.DAT", ios::in|ios::binary) ; 
for(int i = 0; i < num; i++) 
{ 
file.read((char *)&vr, sizeof(voter_record)); 
vs[i].voter_namecode = vr.voter_namecode; 
vs[i].voting_status = 0; 
} 
file.close(); 
} 
return vs; 
} 
candidate_status* vote::init_candidate_status(int &num) 
{ 
candidate_status *cs = NULL;; 
num = 0; 
last_candidate_code(num); 
if (num != 0) 
{ 
cs = new candidate_status[num]; 
candidate_record cr; 
fstream file; 
file.open("CANDIDATE.DAT",ios::in|ios::binary); 
for(int i = 0; i < num; i++) 
{ 
file.read((char *)&cr, sizeof(candidate_record)); 
cs[i].candidate_namecode = cr.candidate_namecode; 
cs[i].numVotes = 0; 
} 
file.close(); 
} 
return cs; 
} 
void vote::voting() 
{ 
clrscr() ; 

char ch,name[50]; 
int n ,num_voters = 0, num_candidates = 0; 
int vtr_rec; 
voter_status* vs = init_voter_status(num_voters); 
candidate_status* cs = init_candidate_status(num_candidates); 
int valid=0; 
if (num_voters == 0) 
{ 
gotoxy(3,6); 
cout << "There are NO VOTERS"; 
ch = getche(); 
delete[] vs; 
delete[] cs; 
return; 
} 
if (num_candidates == 0) 
{ 
gotoxy(3,6); 
cout << "There are NO CANDIDATES"; 
ch = getche(); 
delete[] vs; 
delete[] cs; 
return; 
} 
while(1) 
{ 
clrscr(); 
gotoxy(30,2); 
cout <<"VOTING HAS STARTED"; 
gotoxy(29,3); 
cout <<"~~~~~~~~~~~~~~~~~~~~~~"; 
{ 
int i; 
for(i = 0; i < num_voters; i++) 
{ 
if (vs[i].voting_status == 0) break; 
} 
if (i == num_voters) 
{ 
gotoxy(3,4); 
cout<<"All VOTES have been casted"; 
getche(); 
break; 
} 
} 
gotoxy(3,24) ; 
clreol(); 
cout <<"To End the voting Enter <STOP>.\n"; 
gotoxy(3,25); 
clreol(); 
cout <<"Once voting is stopped it cann't resume. You will have to start a fresh" ; 
gotoxy(6,3); 
clreol(); 
cout <<"Enter the voter code <To view listof voters press <ENTER>- "; 
gets(name); 
if (strcmp(name,"STOP") == 0) 
{ 
gotoxy(6,5); 
clreol(); 
cout <<"Do you want to STOP the voting and start counting votes (y/n) - "; 
ch = getche(); 
ch = toupper(ch); 
while(!(ch == 'Y' || ch == 'N')) 
{ 
gotoxy(70,5); 
clreol(); 
ch = getche(); 
ch = toupper(ch); 
} 
if (ch == 'N') 
{ 
gotoxy(6,5); 
clreol(); 
continue; 
} 
else break; 
} 
n = string_is_number(name); 
gotoxy(6,5); 
clreol(); 
if (n == 0) 
{ 
cout << "Incorrect voter code, enter only digits, try again "; 
getche(); 
continue; 
} 
n = atoi(name); 
if (n == 0) 
{ 
list_of_voters_names(); 
continue; 
} 
for(vtr_rec = 0; vtr_rec < num_voters; vtr_rec++) 
{ 
if (vs[vtr_rec].voter_namecode == n) 
{ 
if (vs[vtr_rec].voting_status == 1) 
{ 
cout << "Voter with voter code "<< n <<" has alread voted"; 
} 
getche(); 
break; 
} 
} 
if ( vtr_rec == num_voters) 
{ 
cout << "Voter code "<< n << " not found in Voter list"; 
getche(); 
continue; 
} 
if (vs[vtr_rec].voting_status == 1) 
{ 
cout << "Voter code "<<n<< " has already voted, can't vote again"; 
getche(); 
continue; 
} 
while(1) 
{ 
clrscr(); 
gotoxy(3,24) ; 
clreol(); 
cout<<"To cast invalid vote press <y>"; 
gotoxy(3,3); 
cout <<"Voter with voter code " << vs[vtr_rec].voter_namecode<<" is voting"; 
gotoxy(3,4); 
cout<<"Enter the candidate code <To view list of candidate press <ENTER>-" ; 
char can_code[50]; 
gets(can_code); 
if (can_code[0] == 'Y' || can_code[0] == 'y') 
{ 
vs[vtr_rec].voting_status = 1; 
clrscr(); 
cout<<"Voter "; 
gotoxy(3,7); 
display_voter_record(vs[vtr_rec].voter_namecode); 
gotoxy(3,8); 
cout <<"has casted a invalid vote"; 
getche(); 
break; 
} 
int can = string_is_number(can_code); 
gotoxy(3,6); 
if (can == 0) 
{ 
cout << "Incorrect candidate code, enter only digits, try again "; 
getche(); 
continue; 
} 
can = atoi(can_code); 
if (can == 0) 
{ 
list_of_candidate_names(); 
getche(); 
continue; 
} 
int can_rec; 
for(can_rec=0; can_rec<num_candidates; can_rec++) 
{ 
if (cs[can_rec].candidate_namecode == can) 
break; 
} 
if (can_rec == num_candidates) 
{ 
cout <<"Candidate code "<<can<<" not found in Candidate List"; 
getche(); 
continue; 
} 
cs[can_rec].numVotes++; 
vs[vtr_rec].voting_status = 1; 
clrscr(); 
gotoxy(3,6); 
voter_record vr; 
voter_recordno(vs[vtr_rec].voter_namecode, vr) ; 
cout<<"Voter " << vr.voter_name<< " has voterd for Candidate "; 
candidate_record cr; 
candidate_recordno(cs[can_rec].candidate_namecode,cr); 
cout << cr.candidate_name; 
gotoxy(35,20); 
cout<<"VOTE CASTED"; 
getche(); 
valid=1; 
break; 
} 
} 
if (valid) 
{ 
clrscr(); 
gotoxy(20,9); 
cout<<"VOTING RESULTS"; 
int tie =0; 
int winner=0; 
int max = 0; 
int i; 
for(i = 0; i < num_candidates; i++) 
{ 
if (cs[i].numVotes > max) 
{ 
max = cs[i].numVotes; 
} 
else if (cs[i].numVotes == max && max > 0) 
tie = 1; 
} 
gotoxy(20,12); 
if (tie) cout<<"Voting has resulted in tie, joint winners are"; 
else cout <<"WINNER is "; 
gotoxy(20,13); 
for(i = 0; i < num_candidates; i++) 
{ 
if (cs[i].numVotes == max) 
{ 
candidate_record cr; 
candidate_recordno(cs[i].candidate_namecode,cr); 
if (winner) 
cout<<", "; 
cout << "\n\n\t\t\t"<<cr.candidate_name<<endl; 
gotoxy(25,25); 
cout<<"THE SUMMARY FOLLOWS"; 
delay(500); 
gotoxy(25,27); 
delay(500); 
cout << "PARTY NAME -->"<<cr.partyname<<endl; 
gotoxy(25,29); 
delay(500); 
cout << "PARTY SIGN -->"<<cr.partysign<<endl; 
gotoxy(25,31); 
delay(500); 
cout << "REVENUE -->"<<cr.revenue<<endl; 
gotoxy(25,33); 
delay(500); 
cout << "AGE -->"<<cr.age<<endl; 
gotoxy(25,35); 
delay(500); 
cout << "AREA -->"<<cr.area; 
winner++; 
} 
} 

} 
ch = getche(); 
delete[] vs; 
delete[] cs; 
} 
