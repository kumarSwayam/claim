#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<conio.h>
using namespace std;
int sum=0;
void menustudent();
void get();


///////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////STAFF CLASS//////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

class STAFF
{
	private:
		char personal_file_number[20];
		char name[50];
		char designation[20];
		char purpose_of_advance[20];
		char advance_required_from[20];
		char head_of_expenditure[20];
		char advance[20];
		char financial_number[20];
		char budget_number[20];
		char account_holder[20];
		char account_number[20];
		char bank_name[20];
		char bank_branch[20];
		char Ifsc[20];
	public:
		int createyours()
		{
			system("cls");
			cout<<"\n********** Enter The Details **********";
			cout<<"\n\n\tEnter Personal File Number:-";
			cin>>personal_file_number;
			fflush(stdin);
			cout<<"\n\n\tEnter Name:-";
			gets(name);
			cout<<"\n\n\tEnter Designation:-";
			gets(designation);
			cout<<"\n\n\tEnter Purposr Of Advance:-";
			gets(purpose_of_advance);
			cout<<"\n\n\tEnter Advance required From:-\n\n\t\t1.Institute Budget\n\n\t\t2.Department Budget\n\n\t\t3.Other";
			cout<<"\n\n\tEnter Responce:-";
			gets(advance_required_from);
			cout<<"\n\n\tEnter Head Of Expenditure:-\n\n\t\t1.Contigency\n\n\t\t2.Consumable\n\n\t\t3.Non Consumable\n\n\t\t4.CPDA\n\n\t\t5.Other";
			cout<<"\n\n\tEnter Responce:-";
			gets(head_of_expenditure);
			cout<<"\n\n\tAmount Of Advance:-";
			gets(advance);
			cout<<"\n\n\tFinancial Sanction Number:-";
			gets(financial_number);
			cout<<"\n\n\tBudget Available:-";
			gets(budget_number);
			cout<<"\n\n\tBank Details:-";
			cout<<"\n\n\t\t1.Name Of Account Holder:-";
			gets(account_holder);
			cout<<"\n\n\t\t2.Account Number:-";
			gets(account_number);
			cout<<"\n\n\t\t3.Bank Name:-";
			gets(bank_name);
			cout<<"\n\n\t\t4.Bank Branch:-";
			gets(bank_branch);
			cout<<"\n\n\t\t5.IFSC Code:-";
			gets(Ifsc);
			cout<<"\n\n\n Data Enter Successfully ";
			cout<<"\n\nPLEASE PRESS ANY KEY TO CONTINUE...............................";
			getch();
			fflush(stdin);
			//system("cls");
			//menustudent();
			return 1;
			
		}
		int showyour()
		{
			system("cls");
			cout<<"*********** Your Personal Details ***********";
			cout<<"\n\n\tPersonal File Number :- ";
			puts(personal_file_number);
			cout<<"\n\n\tName :- ";
			puts(name);
			cout<<"\n\n\tDesignation :- ";
			puts(designation);
			cout<<"\n\n\tPurposr Of Advance :- ";
			puts(purpose_of_advance);
			cout<<"Advance required From:-\n\n\t\t1.Institute Budget\n\n\t\t2.Department Budget\n\n\t\t3.Other";
			puts(advance_required_from);
			cout<<"\n\n\tHead Of Expenditure:-\n\n\t\t1.Contigency\n\n\t\t2.Consumable\n\n\t\t3.Non Consumable\n\n\t\t4.CPDA\n\n\t\t5.Other";
			puts(head_of_expenditure);
			cout<<"\n\n\tAmount Of Advance:-";
			puts(advance);
			cout<<"\n\n\tFinancial Sanction Number:-";
			puts(financial_number);
			cout<<"\n\n\tBudget Available:-";
			puts(budget_number);
			cout<<"\n\n\tBank Details:-";
			cout<<"\n\n\t\t1.Name Of Account Holder:-";
			puts(account_holder);
			cout<<"\n\n\t\t2.Account Number:-";
			puts(account_number);
			cout<<"\n\n\t\t3.Bank Name:-";
			puts(bank_name);
			cout<<"\n\n\t\t4.Bank Branch:-";
			puts(bank_branch);
			cout<<"\n\n\t\t5.IFSC Code:-";
			puts(Ifsc);
			//cout<<"\n\t\tBill Amount :- ";
			//put(billamount);
			cout<<"Press Any Key To Contine............";
			getch();
			system("cls");
			menustudent();
			return 1;
			
		}
		int modifyyour()
		{
			system("cls");
			cout<<"************** Update Your Details ***********";
			cout<<"\n\n\tPersonal_File_Number :-"<<personal_file_number;
			fflush(stdin);
			cout<<"\n\n\tEnter Name:-";
			gets(name);
			cout<<"\n\n\tEnter Designation:-";
			gets(designation);
			cout<<"\n\n\tEnter Purposr Of Advance:-";
			gets(purpose_of_advance);
			cout<<"\n\n\tEnter Advance required From:-\n\n\t\t1.Institute Budget\n\n\t\t2.Department Budget\n\n\t\t3.Other";
			cout<<"\n\n\tEnter Responce:-";
			gets(advance_required_from);
			cout<<"\n\n\tEnter Head Of Expenditure:-\n\n\t\t1.Contigency\n\n\t\t2.Consumable\n\n\t\t3.Non Consumable\n\n\t\t4.CPDA\n\n\t\t5.Other";
			cout<<"\n\n\tEnter Responce:-";
			gets(head_of_expenditure);
			cout<<"\n\n\tAmount Of Advance:-";
			gets(advance);
			cout<<"\n\n\tFinancial Sanction Number:-";
			gets(financial_number);
			cout<<"\n\n\tBudget Available:-";
			gets(budget_number);
			cout<<"\n\n\tBank Details:-";
			cout<<"\n\n\t\t1.Name Of Account Holder:-";
			gets(account_holder);
			cout<<"\n\n\t\t2.Account Number:-";
			gets(account_number);
			cout<<"\n\n\t\t3.Bank Name:-";
			gets(bank_name);
			cout<<"\n\n\t\t4.Bank Branch:-";
			gets(bank_branch);
			cout<<"\n\n\t\t5.IFSC Code:-";
			gets(Ifsc);
			cout<<"\n\nPLEASE PRESS ANY KEY TO CONTINUE...............................";
			getch();
			fflush(stdin);
			return 1;
		}
	char* retadmno()
		{
			return personal_file_number;
		}
		
};
class STATUS
{
	private:
		char status[20];
		char personal_file_number[20];
	public:
		int createstatus()
		{
			system("cls");
			cout<<"\n********** Enter The Details **********";
			cout<<"\n\n\tEnter Personal File Number:-";
			cin>>personal_file_number;
			fflush(stdin);
			cout<<"\n\n\tEnter The Status:-";
			gets(status);
		}
		char* retadmno()
		{
			return personal_file_number;
		}
		int showstatus()
		{
			system("cls");
			cout<<"*********** Your Status Details ***********";
			cout<<"\n\n\tPersonal File Number :- ";
			puts(personal_file_number);
			cout<<"\n\n\tStatus :- ";
			puts(status);
		}
		int modifystatus()
		{
			system("cls");
			cout<<"************** Update Your Details ***********";
			cout<<"\n\n\tPersonal_File_Number :-"<<personal_file_number;
			fflush(stdin);
			cout<<"\n\n\tEnter Staus:-";
			gets(status);
		}		 
};

//////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////CREATE FILES//////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////


fstream fp,fp1,fp2,fp3,fp4;
STAFF s;
STATUS a;
int staffwrite()
{
	char ch;
	fp.open("STAFF.txt",ios::out|ios::app);
	int o=s.createyours();
	fp.write((char*)&s,sizeof(STAFF));
		
	fp.close();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
//	menustudent();
return 1;
}
int statuswrite()
{
	char ch;
	fp.open("STATUS.txt",ios::out|ios::app);
	int o=a.createstatus();
	fp.write((char*)&a,sizeof(STATUS));
		
	fp.close();
}


///////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// READ FROM A FILE ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

int displaystaff(char n[])
{
	//char n[20];
	//cout<<"###### YOUR DETAILS ##########";
	int flag=0;
	int o;
	fp.open("STAFF.txt",ios::in);
	while(fp.read((char*)&s,sizeof(STAFF)))
	{
		if(strcmpi(s.retadmno(),n)==0)
		{
			o=s.showyour();
			flag=1;
		}
	}
	fp.close();
	if(flag==0)
	{
		cout<<"\n\nSTAFF DOES NOT EXIST";
	}
	getch();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
	return 1;
}
int displaystatus(char n[])
{
	int flag=0;
	int o;
	fp.open("STATUS.txt",ios::in);
	while(fp.read((char*)&a,sizeof(STATUS)))
	{
		if(strcmpi(a.retadmno(),n)==0)
		{
			o=a.showstatus();
			flag=1;
		}
	}
	fp.close();
	if(flag==0)
	{
		cout<<"\n\nSTAFF DOES NOT EXIST";
	}
	getch();
	//cout<<"\n\nPress Any Key To Contine............";
	//getch();
	//system("cls");
	return 1;
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// MODIFY THE FILES ////////////////////////////
///////////////////////////////////////////////////////////////////////////////

int modifystaff()
{
	char n[20];
	int found=0;
	int o;
	system("cls");
	cout<<"Enter Your Personal File Number :-";
	cin>>n;
	fflush(stdin);
	fp.open("STAFF.txt",ios::in|ios::out);
	while(fp.read((char*)&s,sizeof(STAFF))&&found==0)
	{
		if(strcmpi(s.retadmno(),n)==0)
		{
			o=s.showyour();
			cout<<"\n\n\tEnter Your New Details"<<endl;
			o=s.modifyyour();
			int pos=-1*sizeof(s);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&s,sizeof(STAFF));
			cout<<"\n\n\n\t\tRECORD UPDATES";
			found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\tRecord Not Found";
		getch();
	}
	return 1;
}
int modifystatus()
{
	char n[20];
	int found=0;
	int o;
	system("cls");
	cout<<"Enter Your Personal File Number :-";
	cin>>n;
	fflush(stdin);
	fp.open("STATUS.txt",ios::in|ios::out);
	while(fp.read((char*)&a,sizeof(STATUS))&&found==0)
	{
		if(strcmpi(a.retadmno(),n)==0)
		{
			o=a.showstatus();
			cout<<"\n\n\tEnter Your New Details"<<endl;
			o=a.modifystatus();
			int pos=-1*sizeof(a);
			fp.seekp(pos,ios::cur);
			fp.write((char*)&a,sizeof(STATUS));
			cout<<"\n\n\n\t\tRECORD UPDATES";
			found=1;
		}
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\n\t\tRecord Not Found";
		getch();
	}
	return 1;	
}


///////////////////////////////////////////////////////////////////////////////////
////////////////////////////// STAFF MENU ///////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

void menustudent()
{
	STAFF s; 
	int i;
	int o;
	cout<<"\n\nt\t\t\t\t########### WELCOME ####################\n\n";
	cout<<"\n\n\n\t\t1.See Your Form\n\n\n\t\t2.Update Your Forms\n\n\t\t3.Fill The Form\n\n\t\t4.SEE STATUS\n\n\t\t5.Exit";
	cout<<"\n\n\t\t Enter Your Choise :-";
	cin>>i;
	/*if(i==1)
	{
		//system("cls");
		o=studentwrite();
		system("cls");
		menustudent();
	}*/
	int a1;
	if(i==1)
	{
		//cout<<"under construction";
		//s.showyour();
		system("cls");
		char num[20];
		cout<<"Please Enter Your Personal File Number :-";
		cin>>num;
		fflush(stdin);
		o=displaystaff(num);
		system("cls");
		menustudent();
	}
	else if(i==2)
	{
		//cout<<"under construction";
		o=modifystaff();
		system("cls");
		menustudent();
	}
	else if(i==3)
	{
		system("cls");
		a1=staffwrite();
		system("cls");
		menustudent();
	}
	else if(i==4)
	{
		system("cls");
		char num[20];
		cout<<"Please Enter Your Personal File Number :-";
		cin>>num;
		fflush(stdin);
		o=displaystatus(num);
		system("cls");
		menustudent();
	}
	else if(i==5)
	{
		exit(1);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// ADMIN MENU //////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

void menuadmin()
{
	int i,a1,a2,a3,a4;
	int o;
	system("cls");
	cout<<"################ WELCOME HEAD OF DEPARTMENT ######################";
	cout<<"\n\n\t\t1.See Record\n\n\t\t2.Enter Status\n\n\t\t3.EXIT";
	cout<<"\n\n\n\t\tPlease Enter Your Choise :- ";
	cin>>i;
	switch(i)
	{
		case 1:
			{
				system("cls");
				char num[20];
				cout<<"Please Enter Personal File Number :-";
				cin>>num;
				fflush(stdin);
				o=displaystaff(num);
				system("cls");
				break;
			}
		case 2:
			{
				o=statuswrite();
				system("cls");	
				break;
			}
		case 3:
			{
				exit (1);
				break;
			}	
	}
	menuadmin();
}

/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// LOGIN OF ADMIN ///////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

void login()
{
	int i;
	cout<<"\n\n\t1.HEAD OF COMPUTER SCIENCE DEPARTMENT\n\n\t2.HEAD ELECTRICAL DEPARTMENT\n\n\t3.HEAD OF MECHANICAL DEPARTMENT\n\n\t4.HEAD OF BIOSCIENCE DEPARTMENT";
	cout<"\n\n\t\tENTER YOUR RESPONCE:-";
	cin>>i;
	char ch[21],ch1[21]={"pass"},ch2[21]="pass2",ch3[21]="pass3",ch4[21]="pass4";
	cout<<"\n\n\tEnter The Password :-";
	cin>>ch;
//ch1[21]={"pass"};
	int b=0;
	int n=strlen(ch);
	int n1=strlen(ch1);
	int n2=strlen(ch2);
	int n3=strlen(ch3);
	int n4=strlen(ch4);
	//cout<<"n="<<n<<endl<<"n1="<<n1<<endl;
	if(i==1)
	{
		if(n1==n)
	{
		for(int i=0;i<n;i++)
		{
			if(ch[i]==ch1[i])
			{
				
			}
			else if(ch[i]!=ch1[i])
			{
				b=1;
			}
		}
		if(b==0)
		{
			menuadmin();
		}
		else if(b==1)
		{
			cout<<"Wrong Password\n";
			cout<<"Press any key ...............";
			getch();
			system("cls");
			get();
		}
	}
	else 
	{
		cout<<"Wrong Password\n";
		cout<<"Press any key ...............";
		getch();
		system("cls");
		get();
	}
	}
	else if(i==2)
	{
		if(n2==n)
	{
		for(int i=0;i<n;i++)
		{
			if(ch[i]==ch2[i])
			{
				
			}
			else if(ch[i]!=ch2[i])
			{
				b=1;
			}
		}
		if(b==0)
		{
			menuadmin();
		}
		else if(b==1)
		{
			cout<<"Wrong Password\n";
			cout<<"Press any key ...............";
			getch();
			system("cls");
			get();
		}
	}
	else 
	{
		cout<<"Wrong Password\n";
		cout<<"Press any key ...............";
		getch();
		system("cls");
		get();
	}
	}
	else if(i==3)
	{
		if(n1==n)
	{
		for(int i=0;i<n;i++)
		{
			if(ch[i]==ch3[i])
			{
				
			}
			else if(ch[i]!=ch3[i])
			{
				b=1;
			}
		}
		if(b==0)
		{
			menuadmin();
		}
		else if(b==1)
		{
			cout<<"Wrong Password\n";
			cout<<"Press any key ...............";
			getch();
			system("cls");
			get();
		}
	}
	else 
	{
		cout<<"Wrong Password\n";
		cout<<"Press any key ...............";
		getch();
		system("cls");
		get();
	}
	}
	else if(i==4)
	{
		if(n1==n)
	{
		for(int i=0;i<n;i++)
		{
			if(ch[i]==ch4[i])
			{
				
			}
			else if(ch[i]!=ch4[i])
			{
				b=1;
			}
		}
		if(b==0)
		{
			menuadmin();
		}
		else if(b==1)
		{
			cout<<"Wrong Password\n";
			cout<<"Press any key ...............";
			getch();
			system("cls");
			get();
		}
	}
	else 
	{
		cout<<"Wrong Password\n";
		cout<<"Press any key ...............";
		getch();
		system("cls");
		get();
	}
	}
}

/////////////////////////////////////////////////////////////////////////////////
///////////////////////////// THE MAIN INTERFACE ////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

void get()
{
	int i;
        cout<<"\n\t\t1.STAFF\n\n\t\t2.HEAD OF DEPARTMENT\n\n\t\t3.Close Application\n";
        cout<<"\n\t\tEnter your choice : ";
        cin>>i;
        if(i==1)
        {
            system("cls");
            menustudent();
        }
        else if(i==2)
            login();
        else if(i==3)
            exit(0);
        else
        {
        	cout<<"\a\a\a\a\a";
            cout<<"\n\t\tPlease enter correct option :(";
            getch();
            fflush(stdin);
            system("CLS");
          	get();
        }
}

/////////////////////////////////////////////////////////
//////////////////////////// MAIN //////////////////////
//////////////////////////////////////////////////////

int main()
{
	get();
}
