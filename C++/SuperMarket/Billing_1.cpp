#include <iostream>
using namespace std;

class shopping{
    private:
        int pcode;
        float price;
        float discount;
        string pname;
    public:
        void menu();
        void administrator();
        void buyer();
        void add();
        void edit();
        void rem();
        void list();
        void recept();
}; // put the ; at the end of the class

void shopping :: menu(){ // class - shopping , menu() inside shopping class

        int choice;
    do{
        string email;
        string password;

        cout <<"\t\t\t\t______________________________\n";
        cout <<"\t\t\t\t                              \n";
        cout <<"\t\t\t\t     SuperMarket Main menu    \n";
        cout <<"\t\t\t\t______________________________\n";
        cout <<"\t\t\t\t                              \n";
        cout <<"\t\t\t\t    1. Administrator    \n";
        cout <<"\t\t\t\t                        \n";
        cout <<"\t\t\t\t    2. Buyer            \n";
        cout <<"\t\t\t\t                        \n";
        cout <<"\t\t\t\t    3. Exit             \n";
        cout <<"\t\t\t\t                        \n"; 

        cout <<"\n\t\t\t Please Select";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "\t\t\t Please Login\n";
                cout << "\t\t\t Enter Email \n";
                cin >> email;
                cout << "\t\t\t Password    \n";
                cin >> password;
                if(email == "root.root.com" && password=="root.password")
                    administrator();
                else
                    cout << "Invalid Email/Password\n";
                break;

            case 2:
                buyer();
                break;
            case 3:
                exit(0);
            default:
                cout<<"please Select from the given options\n";
        }
        
    }
    while(choice != 3);
}

void shopping:: administrator(){
    int choice;
    do{
        cout <<"\n\n\n\t\t\\t Administrator Menu";
        cout <<"\n\t\t\t|____1. Add the product____|";
        cout <<"\n\t\t\t|                          |";
        cout <<"\n\t\t\t|____2. Modify the product_|";
        cout <<"\n\t\t\t|                          |";
        cout <<"\n\t\t\t|____3. Delete the product_|";
        cout <<"\n\t\t\t|                          |";
        cout <<"\n\t\t\t|____4. Add the product____|";
        cout <<"\n\t\t\t|                          |";

        cout << "\n\n\t Please Enter you choice \n";
        cin >> choice;

        switch(choice){
            case 1:
                add();
                break;
            case 2:
                edit();
                break;
            case 3:
                rem();
                break;
            case 4:
                menu();
                break;
            defautl:
                cout<<"Invalid choice\n";

        }
    }
    while(choice != 9090);
}

void shopping:: buyer(){
    int choice;
    do{
        cout <<"\t\t\t 1. Buyer       \n";
        cout <<"\t\t\t________________\n";
        cout <<"\t\t\t 2. Buy product \n";
        cout <<"                      \n";
        cout <<"\t\t\t 3. Go back \n";
        cout <<"                \n";

        cout <<"\t\t\t Enter Your Choice\n";
        cin >> choice;
        switch(choice){
            case 1:
                recept();
                break;
            case 2:
                menu();
            default:
                cout <<"Invalid Choice\n";
        }
    }
        while(choice != 9090);
}

void shopping ::add(){
    m:
    fstream data; // file handiling
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout <<"\n\n\t\t\ Add New Product";
    cout <<"\n\n\t Product Code of the product";
    cin >>pcode;
    cout << "\n\n\t Name of the product";
    cin>>pname;
    cout <<"\n\n\t Price of the product";
    cin >> price;
    cout <<"\n\n\t Discount on the product";
    cin >> discount;

    data.open("database.txt",ios::in); // ios::in reading mode ios::out writing mode
    if(!data){
        data.open("database.txt",ios::app|ios::out); // ios::app append mode
        data <<" " <<pcode<< " "<<price<<" "<<discount<<"\n";
        data.close();
    }
    else{
        data>>c>>n>>p>>d;
        while(!data.eof()){
            if(c == pcode)
                token++;
            data >>c>>n>>p>>d;  
        }
        data.close();
    
        if(token == 1)
            goto m;
         else{
            data.open("database.txt",ios::app|ios::out); // ios::app append mode
            data <<" " <<pcode<< " "<<price<<" "<<discount<<"\n";
            data.close();
        }
    }

    cout <<"\n\n\t\t Record inserted !\n";
}

void shopping ::edit(){
    fstream data, data1; // data, data1 are the objects of the fstream class
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout <<"\n\t\t\t Modify the record";
    cout <<"\n\t\t\t Product code :";
    cin >>pkey;

    dataf.open("database.txt",ios::in);
    if(!data)
        cout <<"\n\n file doesn't exist";
    else{
        data1.open("database1.txt",ios::app|ios::out);
        data >>pcode >>pname >>price>>discount;
        while(!data.eof()){
            if(pkey == pcode){
                cout <<"\n\t\t\ product new code: ";
                cin>>continue;
                cout <<"\n\t\t Name of the product: ";
                cin >>n;
                cout <<"\n\t\t price : ";
                cin >>p;
                cout <<"'n't't Discount: ";
                data1<<" " <<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout <<"\n\n\t\t Record edited";
                token++;
            }
            else
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";

            data>>pcode>>pname>>price>>discount;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt","database.txt");
        if ( token == 0)
            cout << "\n\n Record not fount\n";
    }
}

void shopping::rem(){
    fstream data, data1;
    int pkey;
    int token = 0;
    cout <<"\n\n\t Delete product";
    cout <<"\n\n\t Enter the product code :";
    cin >>pkey;
    data.open("database.txt",ios::in);
    if(!data)
        cout<<"File doesn't exit\n";
    else{
        data1.open("database.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>discount;
        while (!data.eof())
        {
            if(pcode == pkey){
                cout<<"\n\n\t Product deleted successfully";
                token++;
            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";
            }
            data>>pcode>>pname>>price>>discount;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token == 0){
            cout<<"\n\n Record can not be found";
        }
        
    }
}

void shopping::list(){
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\n\n|_________________________________________\n";
    cout<<"proNo \t\tName\t\tPrice\n";
    data>>pcode>>pname>>price>>discount;
    while (!data.eof())
    {
        cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>discount;
    }
    data.close();
}

void shopping::recept(){
    fstream 
}