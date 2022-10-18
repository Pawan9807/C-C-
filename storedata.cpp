#include<iostream>
#include<fstream>
#include<cctype>
#include<conio.h>
#include<time.h>

using namespace std;

class address{

    private:
    int pincode;
    char state[15];
    char capital[20];
    char street[30];

    public:
    void add_input()
    {
        cout<<"-----Address Details----";

        cout<<"\t\t\tEnter Street:   \n";
        cin>>street;
        cout<<"\t\t\tEnter Capital:  \n";
        cin>>capital;
        cout<<"\t\t\tEnter State :   \n";
        cin>>state;
        cout<<"\t\t\tEnter Pincode:  \n";
        cin>>pincode;
    }
    void add_display()
    {
     cout<<"Address of Customer A/C: "<<street<<"-"<<pincode<<","<<capital<<"("<<state<<")";
  
     cout<<endl;
    }
    //void addressDB(); //here address store in file
};

class cust_account : public address
{

private:
    string name;
    string atype;
    int phone_num;
    string gmail_id;

public:
    void  getAccountDetails()
    {
        cout<<"\t\t\t Enter Customer Name   : ";
        cin>>name;
        cout<<"\t\t\t Enter Account Type    : ";
        cin>>atype;
        cout<<"\t\t\t Enter phone number    : ";
        cin>>phone_num;
        cout<<"\t\t\t Enter Gmail ID        :";
        cin>>gmail_id;
    }
    
    void account_num()
    {
    
    int random_number;
    srand(time(0)); 

	random_number= rand();
        cout<<"\t\t\t Account Number         :"<<random_number<<endl;
       
    }
    
    void displayDetails()
    {
       
        cout<<"\t\t\t Customer Name      : "<<name<<endl;
      //  cout<<"\t\t\t Account Number     : "<<random_number<<endl;
        cout<<"\t\t\t Account Type       : "<<atype<<endl;
        cout<<"\t\t\t Enter phone number : "<<phone_num<<endl;
        cout<<"\t\t\t Enter Gmail ID     :"<<gmail_id<<"@gmail.com "<<endl;
    }
   
};


/*
void address:: addressDB()
{
    
   address addr; 
   ofstream fout;
   fout.open("Database.dat",ios::binary|ios::app);
   //ca.getAccountDetails();
   addr.add_input();
   
   fout.write(reinterpret_cast<char *>(&addr),sizeof(address));
   fout.close();
} 
*/
class current_account : public cust_account
{
private:
    float balance;
public:
    void c_display();
    void c_deposit();
    void c_withdraw();
     void  currentDB();
};
 void current_account::c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void current_account:: c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
    }
    void current_account:: c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to be withdraw :";
        cin>>withdraw;
        if(balance > 1000)
        {
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
 
    }
 
    
void current_account:: currentDB()
    {
    
   current_account ca; 
   ofstream fout;
   fout.open("Database.dat",ios::binary|ios::app);
   //ca.getAccountDetails();
   ca.c_display();
   ca.c_deposit();
   ca.c_withdraw();
   fout.write(reinterpret_cast<char *> (&ca),sizeof(current_account));
   fout.close();
} 
class saving_account : public cust_account
{
private:
    float sav_balance;
public:

   void s_display();
   void s_deposit();
   void s_withdraw();
   void  savingDB();

};
    void saving_account:: savingDB()
    {
    
    saving_account sa; 
    ofstream fout;
    fout.open("Database.dat",ios::binary|ios::app);
    //ca.getAccountDetails();
    sa.s_display();
    sa.s_deposit();
    sa.s_withdraw();
    fout.write(reinterpret_cast<char *> (&sa),sizeof(saving_account));
    fout.close();
   } 
    void saving_account::s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
    void saving_account::s_deposit()
    {
        float deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void saving_account::s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance :- "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance > 500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }


class Loan {   //it behave like database
	//variables which will be stored in the database of emi installments.
	private:
		int EMI_no;
		float principal_EMI;
		float interest_EMI;
		float total_EMI;
		string EMI_date;
		float principal_Remaining;
	public:
		
		Loan(){} 

		Loan(int emi_no, float principal_emi, float interest_emi, float total_emi, string emi_date, float principal_remaining)
		{
			EMI_no = emi_no;
			principal_EMI = principal_emi;
			interest_EMI = interest_emi;
			total_EMI = total_emi;
			EMI_date = emi_date;
			principal_Remaining = principal_remaining;
		}

		int getEMI(){
			return EMI_no;
		}
	
		float getPrincipalEMI(){
			return principal_EMI;
		}

		float getInterestEMI(){
			return interest_EMI;
		}
		
		float getTotalEMI(){
			return total_EMI;
		}

		string getEMIDate(){
			return EMI_date;
		}
		 
	  
		float getPrincipalRemaining(){
			return principal_Remaining;
		}
};
// To  calculate the emi & display result
class EMICalculator{
	
	private:
		int EMINo = 1;
		int timet;
		int SlNo = 1;
		int nextMnth = 30;
		float interest = 120;
	public:
		
		string returnMonthString(string startmonth){
			if(startmonth == "January" || startmonth == "jan" || startmonth == "january")
				startmonth = "Jan";

			else if(startmonth == "February" || startmonth == "feb" || startmonth == "february")
				startmonth = "Feb";
			else if(startmonth == "March" || startmonth == "mar" || startmonth == "march")
				startmonth = "Mar";
			else if(startmonth == "April" || startmonth == "apr" || startmonth == "april")
				startmonth = "Apr";
			else if(startmonth == "may")
				startmonth = "May";
			else if(startmonth == "June" || startmonth == "jun" || startmonth == "june")\
				startmonth = "June";
			else if(startmonth == "July" || startmonth == "jul" || startmonth == "july")
				startmonth = "Jul";
			else if(startmonth == "August" || startmonth == "aug" || startmonth == "august")
				startmonth = "Aug";
			else if(startmonth == "September" || startmonth == "sept" || startmonth == "september")
				startmonth = "Sept";
			else if(startmonth == "October" || startmonth == "oct" || startmonth == "october")
				startmonth = "Oct";
			else if(startmonth == "November" || startmonth == "nov" || startmonth == "november")
				startmonth = "Nov";
			else
				startmonth = "Dec";
			return startmonth;
		}
		// Function to get the next month installment.
		string returnMonthStart(string startmonth){
			if(startmonth == "Jan")
				startmonth = "Feb";
			else if(startmonth == "Feb")
				startmonth = "Mar";
			else if(startmonth == "Mar")
				startmonth = "Apr";
			else if(startmonth == "Apr")
				startmonth = "May";
			else if(startmonth == "May")
				startmonth = "Jun";
			else if(startmonth == "Jun")
				startmonth = "Jul";
			else if(startmonth == "Jul")
				startmonth = "Aug";
			else if(startmonth == "Aug")
				startmonth = "Sept";
			else if(startmonth == "Sept")
				startmonth = "Oct";
			else if(startmonth == "Oct")
				startmonth = "Nov";
			else if(startmonth == "Nov")
				startmonth = "Dec";
			else
				startmonth = "Jan";
			return startmonth;
		}


void calculateNETAmount(Loan *db, float amount, int timet, float principalemi, float interestemi, int startdate, string startMonth, int startyear)
{
		
			float totalAmount = amount + interest;
			
			float totalemi = principalemi + interestemi;
			
			string startmonthnew = returnMonthString(startMonth);
		
			cout<<"Loan creation date: "<<startdate<<" "<<startmonthnew<<" "<<startyear<<endl;
			cout<<"Principal Amount : "<<amount<<endl;
			cout<<"No of EMI's: "<<timet<<endl;
			cout<<"Total Payable amount: "<<totalAmount<<endl;
			cout<<"EMI Details: "<<endl;
			float netEMI;
			
			for(int i = 0; i < timet; i++)
			{
				
				string startmonth = returnMonthStart(startmonthnew);
				if(startmonth == "Dec")
					startyear += 1;
				
				string finaldate = to_string(startdate) + " " + startmonth + " " + to_string(startyear);
				netEMI = totalAmount - totalemi;

				db[i] = Loan(EMINo++, principalemi, interestemi, totalemi, finaldate, float(netEMI));
			
				startmonthnew = startmonth;
				
				totalAmount = netEMI;
			}
}

void printLoan(Loan *db, int timet)
		{
			for(int i = 0; i < timet; i++)
			{
				cout<<"EMI No: "<<db[i].getEMI()<<", "<<"Principal EMI: "<<db[i].getPrincipalEMI()<<", "<<"Interest EMI: "<<db[i].getInterestEMI()<<", "<<"Total EMI: "<<db[i].getTotalEMI()<<", "<<"EMI Date: "<<db[i].getEMIDate()<<", "<<"Principal remaining: "<<db[i].getPrincipalRemaining()<<endl;
			}
		}
};

 
void cust_loan() 
      {
	   EMICalculator a;
	   float amount;
	   cout<<"Enter the total amount"<<endl;
	   cin>>amount;
	   int timet;
	   cout<<"Enter the time period"<<endl;
	cin>>timet;
	float principalEMI;
	cout<<"Enter the principal EMI"<<endl;
	cin>>principalEMI;
	float interestEMI;
	cout<<"Enter the interest EMI"<<endl;
	cin>>interestEMI;
	int date;
	cout<<"Enter the start date"<<endl;
	cin>>date;
	string month;
	cout<<"Enter the start month"<<endl;
	cin>>month;
	int year;
	cout<<"Enter the start year"<<endl;
	cin>>year;
	Loan db[timet];
	a.calculateNETAmount(db, amount, timet, principalEMI, interestEMI, date, month, year);
	a.printLoan(db, timet);
//	return 0;
}
 
void operation()
{
    current_account c1;
    saving_account s1;
    address add;

    int s_no;
    cout<<"$$$$ 1. Saving a/c   $$$$ \n";
    cout<<"$$$$ 2. Current a/c  $$$$ \n";
    cout<<"$$$$$ 3. Loan         $$$$ \n";
    
    cin>>s_no;
    int choice;
    if(s_no==1)
    {   
        s1.getAccountDetails();
        s1.account_num();
        //s1.storeAccount();
        add.add_input();
        add.add_display();
        while(1)
        {
            cout<<"\nChoose any one"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display A/C Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s1.s_deposit();
                break;
            case 2 :
                s1.s_withdraw();
                break;
            case 3 :
                s1.s_display();
                break;
            case 4 :
               // s1.account_num();
                s1.displayDetails();
                s1.s_display();
                break;
            case 5 :
                goto end;
            default:
                cout<<"\n\nnvalid,\"TRY AGAIN\"";
            }
        }
    }
    else if(s_no==2)
    {    
        
        c1.getAccountDetails();
        add.add_input();
        add.add_display();
       
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display A/C Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter any choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                c1.c_deposit();
                break;
            case 2 :
                c1.c_withdraw();
                break;
            case 3 :
                c1.c_display();
                break;
            case 4 :
              //   c1.currentDB();
              // c1.displayDetails();
                c1.c_display();
                break;
            case 5 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else
     if(s_no==3)
   {
    
    //cus_loan();
      getch();
      }
      else
    {
        cout<<"\nInvalid Account Selection";
    }
end:
    cout<<"\nThank You for visiting in our Bank...";
    //return 0;
}

// user and registration

// admin login part

class Branch{

  private:
    int B_id;    
    string B_Name;
  

  public:

  void B_list(){
    // delete 

    cout<<"Enter Branch Id: ";
    cin>>B_id;
    cout<<"Enter Branch Name: ";
    cin>>B_Name;

    if(B_id==9807 && B_Name=="Deoria")
       {
        cout<<"Branch Name: Landis gyr, Deoria"<<endl;
        cout<<"Address- c.c road deoria ,274001"<<endl;
        cout<<"Branch IFSC Code: DEO000LNG"<<endl;

         
         getch();
        } else
        if(B_id==9808 && B_Name=="Lucknow")
         {

          cout<<"Branch Name:Landis Gyr , Lucknnow"<<endl;
          cout<<"Address- c.c road deoria -208010"<<endl;;
          cout<<"Branch IFSC Code: LKO000LNG";
     
          getch();
         }
         else 
          if(B_id==9809 && B_Name=="Noida")
          {
          cout<<"Branch Name:Landis Gyr , Noida"<<endl;
          cout<<"Address- c.c road deoria ,218020"<<endl;
          cout<<"Branch IFSC Code: NOD0000LNG"<<endl;
      
          getch();
          }
          else
          {
            cout<<"Try Again";
            getch();
          }
  }
};

void bank(){
 
    cout<<"!!!! WELCOME TO OUR LANDIS GYR BANK !!!!"<<endl;
    cout<<"!!!! Bank Code- 924141               !!!!"<<endl;
    cout<<"!!!! Add-Candor Techspace tower no.6!!!!\n!!!! sector 62 noida u.p            !!!!"<<endl;
    cout<<endl;

  Branch b;
  
  b.B_list();

  /*    int digit;
     
         cout<<"\t\t 1. Delete any account holder \n";
         cout<<"\t\t 2. Show All Account Holder List \n";
		 cout<<"Press digit:";
		 cin>>digit;
         switch(digit)
         {

          case 1:  void delete_account(int);
          break;
         
          case 2: void display_all();
                  break;
          default:
                cout<<"Invalid digit \t try again "<<endl;
              //  main();
         };
         */
 //  b.B_input();
  // b.B_show();
  //return 0;
}