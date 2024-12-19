/*Create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private.*/

#include <iostream>
using namespace std;

class BankAccount{
    private :
        int accn;
        int balance;
        string name;
    public :
        BankAccount(){balance =0;}
    
    
        void create(){
            char v;

            cout<<"\nEnter account number (5digits): ";
            cin>>accn;
            cout<<"Enter account holder name     : ";
            cin>>name;
            bool a = show();


            if(a){

                cout<<"\ndeposite ammount [y/n] : ";
                cin>>v;
                if(v == 'y'){
                    deposite();                
                }
            }

        }
        
        bool show(){
            int an;
            string n;

            cout<<"\n------varify deatils------";
            cout<<"\nEnter account no   : ";
            cin>>an;
            cout<<"Enter account name : ";
            cin>>n;

            if(an == accn && n == name){
                cout<<"\n---------------DETAILS-------------";
                cout<<"\nAccount no.  : "<<accn;
                cout<<"\nHolder name. : "<<name;
                cout<<"\nAc Balance.  : "<<balance;
                cout<<"\n-----------------------------------\n";
                return true;
            } else{
                cout<<"\nWrong credintieales: ";
                return false;
            }
        }

        void deposite(){
            unsigned int amm;
            cout<<"\nEnter deposite ammount: ";
            cin>>amm;

            this->balance = balance + amm;
            cout<<"Account balance is : "<<balance;
        }

        void withdraw(){
            unsigned int amm;
            cout<<"\nEnter withdraweal ammount : ";
            cin>>amm;

            if(!(amm > balance)){
                this->balance = balance - amm;
                cout<<"Account balance is : "<<balance;

            }else {
                cout<<"\nAmmount is more then account balance "<<endl;
                cout<<"--------------------------------------\n";
                cout<<"Account balance is : "<<balance<<endl;
                cout<<"--------------------------------------\n";
            }
                  
        }
        
        
};


int main(){
    BankAccount b1;

    char ch ='y' ;
    
    do{
        cout<<"\n\n**************MENU*****************";
        cout<<"\n=====================================";
        cout<<"\n1. Create account    : ";
        cout<<"\n2. Show Deatils      : ";
        cout<<"\n3. Deposite Ammount  : ";
        cout<<"\n4. Withdraw Ammount  : ";
        cout<<"\nn. For exit the menu : "<<endl;
        cout<<"====================================="<<endl<<endl;

        cin>>ch;

        switch(ch){
            case '1':
                b1.create();
            break;

            case '2':
                b1.show();
            break;

            case '3':
                b1.deposite();
            break;

            case '4':
                b1.withdraw();
            break;

        }

        
        
    }while(ch != 'n');

}