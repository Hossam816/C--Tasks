// SuperMarket.cpp
#include "SuperMarket.h"

using namespace std;

void SuperMarket::appMenu() {
    // Implementation of appMenu

     m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t______________________________________\n"; // \t represent horizontal space
    cout<<"\t\t\t\t                                      \n";
	cout<<"\t\t\t\t          Supermarket Main Menu       \n";
	cout<<"\t\t\t\t                                      \n";
	cout<<"\t\t\t\t______________________________________\n";
    cout<<"\t\t\t\t                                      \n";
	cout<<"\t\t\t\t|  1) Admin           |\n";
	cout<<"\t\t\t\t|                     |\n";
	cout<<"\t\t\t\t|  2) Buyer           |\n";
	cout<<"\t\t\t\t|                     |\n";
	cout<<"\t\t\t\t|  3) Exit            |\n";
	cout<<"\t\t\t\t|                     |\n";
	cout<<"\n\t\t\t Please select! ";
	cin>>choice;

	// Use switch  to read role of the user
	switch(choice)
	{
    case 1:
        cout<<"\t\t\t Please Login \n";
        cout<<"\t\t\t Enter Email   \n";
        cin>>email;
        cout<<"\t\t\t Password       \n";
        cin>>password;
        if(email=="dummy@example.com" && password=="dummy1234")
        {
            admin();
        }
        else
        {
            cout<<"Email Or Password Incorrect";
        }
        break;
    case 2:
        {
            buyer();
        }
    case 3:
        {
           exit(0);
        }
    default:
        {
            cout<<"Select From The Given Options!";
        }

	}

	goto m; //goto method it will jump us to the main menu again after the switch fn is done m is a label

}

void SuperMarket::admin() {
    // Implementation of admin

     m:
    int choice;
        cout<<"\n\n\n\t\t\t Admin menu";
        cout<<"\n\t\t\t|_____1) Add the product_____|";
        cout<<"\n\t\t\t|                            |";
        cout<<"\n\t\t\t|_____2) Modify the product__|";
        cout<<"\n\t\t\t|                            |";
        cout<<"\n\t\t\t|_____3) Delete the product__|";
    cout<<"\n\t\t\t|                            |";
    cout<<"\n\t\t\t|_____4) Back to main menu___|";
    cout<<"\n\n\t Please enter your choice ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        removeItem();
        break;
        case 4:
        appMenu();
        break;
    default:
        cout<<"Invalid Choice!!!!";
    }
    goto m;

}

void SuperMarket::buyer() {
    // Implementation of buyer


    m:
    int choice;
    cout<<"\t\t\t  Buyer \n";
	cout<<"\t\t\t_____________  \n";
	cout<<"                     \n";
	cout<<"\t\t\t1) Buy product \n";
	cout<<"                     \n";
	cout<<"\t\t\t2) Go back     \n";
	cout<<"\t\t\t Enter your choice : ";
	cin>>choice;

	switch(choice)
	{
    case 1:
        receiptItem();
        break;
    case 2:
        appMenu();
    default:
        cout<<"Invalid Choice";
	}
	goto m;
}

void SuperMarket::add() {
   fstream ProductData;
    int code;
    int token = 0;
    float price;
    float discount;
    string name;

    cout << "\n\n\t\t\t Add new product";
    cout << "\n\n\t Product code of the product ";
    cin >> ProductCode;
    cout << "\n\n\t Name of the product ";
    cin >> ProductName;
    cout << "\n\n\t Price of the product";
    cin >> ProductPrice;
    cout << "\n\n\t Discount on product";
    cin >> ProductDiscount;

    ProductData.open("ShopDatabase.txt", ios::in);
    if (ProductData) {
        while (ProductData >> code >> name >> price >> discount) {
            if (code == ProductCode) {
                token++;
                break;
            }
        }
        ProductData.close();
    }

    if (token == 0) {
        ProductData.open("ShopDatabase.txt", ios::app|ios::out);
        ProductData << " " << ProductCode << " " << ProductName << " " << ProductPrice << " " << ProductDiscount << "\n";
        ProductData.close();
        cout << "\n\n\t\t Record Inserted Successfully!";
    } else {
        cout << "\n\n\t\t Record with this Product Code Already Exists!";
    }
}
void SuperMarket::edit()
{
    fstream ProductData1,ProductData2;
    //userinputs
    int ProductKey;
    int token = 0;
    int code;
    float price;
    float discount;
    string name;

    cout<<"\n\t\t\t Modify the record";
	cout<<"\n\t\t\t Product code :";
	cin>>ProductKey;


	ProductData1.open("ShopDatabase.txt",ios::in);
	if(!ProductData1)
    {
        cout<<"\n\nFile Not Found";
    }
    else
    {

        ProductData2.open("ShopDatabase2.txt", ios::app|ios::out);//this a temprary file is created for appending data

        ProductData1>>ProductCode>>ProductName>>ProductPrice>>ProductDiscount;

        while(!ProductData1.eof())
        {
            //'if ProductKey == ProductCode' the user can enter a new value this data written to 'ProductData2'
            if(ProductKey == ProductCode)
            {
                cout<<"\n\t\t Product new code :";
				cin>>code;
				cout<<"\n\t\t Name of the product :";
				cin>>name;
				cout<<"\n\t\t Price :";
				cin>>price;
				cout<<"\n\t\t Discount :";
				cin>>discount;
				ProductData2<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";//all the upated details of the product will be enterd with 'ProductData2'
				cout<<"\n\n\t\t Record edited ";
				token++;
            }
            //'if ProductKey!= ProductName' the current record is copied as-is to 'ProductData2'
            else
            {
                ProductData2<<" "<<ProductCode<<" "<<ProductName<<" "<<ProductPrice<<" "<<ProductDiscount<<"\n";
            }
            ProductData1>>ProductCode>>ProductName>>ProductPrice>>ProductDiscount;
        }
        //Both files are closed after the loop ends.
        ProductData1.close();
        ProductData2.close();

        //The original file "ShopDatabase.txt" is removed, and the temporary file "ShopDatabase2.txt" is renamed to "ShopDatabase.txt"
        remove("ShopDatabase.txt");
        rename("ShopDatabase2.txt","ShopDatabase.txt");

        //'If token' is still 0, it means no record was modified
        if(token==0)
        {
            cout<<"\n\nCan't Find  Record";
        }
    }

}

void SuperMarket::removeItem() {
    // Implementation of removeItem

    fstream ProductData1,ProductData2;//'ProductData1' is for reading the original database file, and 'ProductData2' is for writing to a temporary file.
    int ProductKey;//declares a variable to store the product code of the item to be deleted.
    int token = 0;// initializes a counter to track whether the product has been found and deleted
    cout<<"\n\n\t Delete product";
	cout<<"\n\n\t Product code :";
	cin>>ProductKey;
	ProductData1.open("ShopDatabase.txt",ios::in);
	if(!ProductData1)
    {
        cout<<"File Not Found!!";
    }
    else
    {
        ProductData2.open("ShopDatabase1.txt", ios::app|ios::out); //Creating a Temporary File (ProductData2):
        ProductData1>>ProductCode>>ProductName>>ProductPrice>>ProductDiscount;
        while(!ProductData1.eof())
        {
            if(ProductCode==ProductKey)
            {
                cout<<"\n\n\t Product deleted succesfully";
                token ++;
            }
            else
            {
                ProductData2<<" "<<ProductCode<<" "<<ProductName<<" "<<ProductPrice<<" "<<ProductDiscount<<"\n";//all the upated details of the product will be enterd with 'ProductData2'

            }
                ProductData1>>ProductCode>>ProductName>>ProductPrice>>ProductDiscount;
        }
        ProductData1.close();
        ProductData2.close();
        remove("ShopDatabase.txt");
        rename("ShopDatabase1.txt","ShopDatabase.txt");

        if(token == 0)
        {
            cout<<"Record Not Found";
        }
    }

}

void SuperMarket::listItem() {
    // Implementation of listItem
    fstream ProductData;
    ProductData.open("ShopDatabase.txt",ios::in);//This means the file is opened for reading.
    cout<<"\n\n|___________________________________________________________\n";
    cout<<"PNumber\t\tName\t\tPrice'n";
    cout<<"\n\n|___________________________________________________________\n";
    ProductData>>ProductCode>>ProductName>>ProductPrice>>ProductDiscount;
    while(!ProductData.eof())
    {
        cout<<ProductName<<"\t\t"<<ProductName<<"\t\t"<<ProductPrice<<"\n";
        ProductData>>ProductCode>>ProductName>>ProductPrice;
    }
    ProductData.close();
}

void SuperMarket::receiptItem() {
    // Implementation of receiptItem


    system("cls"); //clears the console screen
    fstream ProductData;
    int arrCode[100],arrQuantity[100]; //Two arrays arrc (for product codes) and arrq (for quantities) are declared to store the products' codes and their respective quantities.
    int code = 0;
    char choice;
    float amount = 0;
    float discount = 0;
    float total = 0;
    cout<<"\n\n\t\t\t Receipt ";
    ProductData.open("ShopDatabase.txt", ios::in);
    if(!ProductData)
    {
        cout<<"\n\n Empty database";
    }
    else
    {
        ProductData.close();

        listItem();// to display available items from the database.
        cout<<"\n____________________________\n";
			cout<<"\n|                            |";
			cout<<"\n|    Please place the order  |";
			cout<<"\n|____________________________|\n";
			do
            {
                m:
                cout<<"\n\n Product Code : ";
				cin>>arrCode[code];
				cout<<"\n Product Quantity : ";
				cin>>arrQuantity[code];
				for(int i = 0; i<code; i++)
                {
                    if(arrCode[code] == arrQuantity[i])
                    {
                        cout<<"\n\n Duplicate Product Code. Please try again!";
                        goto m;
                    }
                }
                code++;
                cout<<"\n\n Want to buy another product? Press y for yes and n for no : ";
                cin>>choice;
            }
            while(choice == 'y' || choice=='Y'); //The loop continues as long as the user chooses to add more items
            system("cls");

            //Generate Receipt
            cout<<"\n\n\t\t\t__________RECEIPT______________\n";
            cout<<"\nProduct Num.\tProduct Name\tQuantity \tPrice \tAmount \tAmount with discount\n";


            for(int i=0;i<code;i++)
            {
                //For each product, it reopens "ShopDatabase.txt" and searches for the product by its code.
                ProductData.open("ShopDatabase.txt",ios::in);
                ProductData>>ProductCode>>ProductName>>ProductPrice>>ProductDiscount;
                while(!ProductData.eof())
                {
                    if(ProductCode == arrCode[i])
                    {
                        //When found, it calculates the amount for each product, applies the discount, and adds it to the total.
                        amount = ProductPrice*arrQuantity[i];
                        discount = amount - (amount*discount/100);
                        total +=discount;
                        cout<<"\n"<<ProductCode<<"\t\t"<<ProductName<<"\t"<<arrQuantity[i]<<"\t\t"<<ProductPrice<<"\t\t"<<amount<<"\t"<<ProductDiscount;

                    }
                    ProductData>>ProductCode>>ProductName>>ProductPrice>>ProductDiscount;
                }
                ProductData.close();
            }
            cout<<"\n\n----------------------------------------";
            cout<<"\n Total Amount : "<<total;
    }
}
