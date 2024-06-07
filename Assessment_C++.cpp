#include <iostream>
using namespace std;

class order
{
    string name;
    int choice, choice2, quantity, total_bill=0, bill;

public :
    void get_pname()
    {
        cout << "\n\n\t ....................Tops Tech. Fast Food........................";
        cout << "\n\n\t Please Enter Your Name : ";
        cin >> name;
        cout << "\n\n\t Hello " << name << " ";
    }
    void print_order()
    {
        cout << "\n\n\t What would you like to order? ";

        cout << "\n\n\t ..........................Menu.........................";
    }
    void get_choice()
    {
    	myLable:
    	cout << "\n\n\t 1. Pizzas ";
        cout << "\n\n\t 2. Burgers ";
        cout << "\n\n\t 3. Sandwich ";
        cout << "\n\n\t 4. Rolls ";
        cout << "\n\n\t 5. Biryani ";
    	
        cout << "\n\n\t Please Enter Your Choice : ";
        cin >> choice;

		if(choice==1)
		{
			cout << "\n\n\t 1. Normal Pizza Rs.200 \n\n\t 2. Paneer Pizza Rs.300 \n\n\t 3. Cheese Pizza Rs.400 ";
		}
        else if (choice==2)
        {
        	cout << "\n\n\t 1. Aloo Tiki Rs.100 \n\n\t 2. Simply Veg Rs.50 \n\n\t 3. Maggi Masala Rs.200 \n\n\t 4. Mexican Twist Rs.250 ";
		}
        else if (choice==3)
        {
        	cout << "\n\n\t 1. Club Sandwitch Rs.240 \n\n\t 2. Veg. Crispy Sandwich Rs.160 \n\n\t 3. Extream Veg Sandwich Rs.100";
		}
		else if (choice==4)
		{
			cout << "\n\n\t 1. Paneer Roll Rs.400 \n\n\t 2. Paneer Cheese Roll Rs.500 \n\n\t 3. Paneer Cheese Schz. Roll Rs.550 \n\n\t 4. Paneer Cheese Schz. Kosha Roll Rs.480";
		}
		else if (choice==5)
		{
			cout << "\n\n\t 1. Chicken65 Biryani Rs.339 \n\n\t 2. Mutton Biryani Rs.319 \n\n\t 3. Supreme Chicken Biryani Rs.969";
		}
        else
        {
            cout << "\n\n\t Your Choice is invalide.";
              goto myLable;
		}
    }

    void get_select()
    {
        if (choice == 1)
        {
            Option1:
        	cout << "\n\n\t Please Enter which Pizzas you would like to have? : ";
            cin >> choice2;
            if(choice2 == 1)
            {
            	cout<<"\n\n\t You Normal Pizza Rs.200 ";
			}
			else if(choice2 == 2)
            {
            	cout<<"\n\n\t You Select Paneer Pizza Rs.300 ";
			}
			else if(choice2 == 3)
            {
            	cout<<"\n\n\t You Select Cheese Pizza Rs.400 ";
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
				goto Option1;
			}
        }
        else if (choice == 2)
        {
        	Option2:
            cout << "\n\n\t Please Enter which Burgers you would like to have? : ";
            cin >> choice2;
             if(choice2 == 1)
            {
            	cout<<"\n\n\t You Select Aloo Tiki Rs.100 ";
			}
			else if(choice2 == 2)
            {
            	cout<<"\n\n\t You Select Simply Veg Rs.50 ";
			}
			else if(choice2 == 3)
            {
            	cout<<"\n\n\t You Select Maggi Masala Rs.200 ";
			}
			else if(choice2 == 4)
            {
            	cout<<"\n\n\t You Select Mexican Twist Rs.250 ";
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
				goto Option2;
			}
        }
        else if (choice == 3)
        {
        	Option3:
            cout << "\n\n\t Please Enter which Sandwich you would like to have? : ";
            cin >> choice2;
            if(choice2 == 1)
            {
            	cout<<"\n\n\t You Select Club Sandwitch Rs.240 ";
			}
			else if(choice2 == 2)
            {
            	cout<<"\n\n\t You Select Veg. Crispy Sandwich Rs.160 ";
			}
			else if(choice2 == 3)
            {
            	cout<<"\n\n\t You Select Extream Veg Sandwich Rs.100 ";
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
				goto Option3;
			}
        }
        else if (choice == 4)
        {
        	Option4:
            cout << "\n\n\t Please Enter which Rolls you would like to have? : ";
            cin >> choice2;
            if(choice2 == 1)
            {
            	cout<<"\n\n\t You Select Paneer Roll Rs.400 ";
			}
			else if(choice2 == 2)
            {
            	cout<<"\n\n\t You Select Paneer Cheese Roll Rs.500 ";
			}
			else if(choice2 == 3)
            {
            	cout<<"\n\n\t You Select Paneer Cheese Schz. Roll Rs.550 ";
			}
			else if(choice2 == 4)
            {
            	cout<<"\n\n\t You Select Paneer Cheese Schz. Kosha Roll Rs.480 ";
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
				goto Option4;
			}
        }
        else if (choice == 5)
        {
        	Option5:
            cout << "\n\n\t Please Enter which Biryani you would like to have? : ";
            cin >> choice2;
            if(choice2 == 1)
            {
            	cout<<"\n\n\t You Select Chicken65 Biryani Rs.339 ";
			}
			else if(choice2 == 2)
            {
            	cout<<"\n\n\t You Select Mutton Biryani Rs.319 ";
			}
			else if(choice2 == 3)
            {
            	cout<<"\n\n\t You Select Supreme Chicken Biryani Rs.969 ";
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
				goto Option5;
			}
        }
        else
        {
            cout << "\n\n\t Please againe Select? : ";
        }
    }

    void get_order()
    {
        cout << "\n\n\t Please Enter Quantity : ";
        cin >> quantity;
        if (choice == 1)
        {
            if(choice2 == 1)
            {
				bill=200*quantity;
			}
			else if(choice2 == 2)
            {
				bill=300*quantity;
			}
			else if(choice2 == 3)
            {
				bill=400*quantity;
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
			
			}
        }
        else if (choice == 2)
        {
            
             if(choice2 == 1)
            {
				bill=100*quantity;
			}
			else if(choice2 == 2)
            {
				bill=50*quantity;
			}
			else if(choice2 == 3)
            {
				bill=200*quantity;
			}
			else if(choice2 == 4)
            {
				bill=250*quantity;
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
				
			}
        }
        else if (choice == 3)
        {
            
            if(choice2 == 1)
            {
				bill=240*quantity;
			}
			else if(choice2 == 2)
            {
				bill=160*quantity;
			}
			else if(choice2 == 3)
            {
				bill=100*quantity;
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
			
			}
        }
        else if (choice == 4)
        {
            if(choice2 == 1)
            {
				bill=400*quantity;
			}
			else if(choice2 == 2)
            {
				bill=500*quantity;
			}
			else if(choice2 == 3)
            {
				bill=550*quantity;
			}
			else if(choice2 == 4)
            {
				bill=480*quantity;
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
			
			}
        }
        else if (choice == 5)
        {
            if(choice2 == 1)
            {
            	bill=339*quantity;	
			}
			else if(choice2 == 2)
            {
				bill=319*quantity;
			}
			else if(choice2 == 3)
            {
				bill=970*quantity;
			}
			else 
			{
				cout<<"\n\n\t Sorry Invalid Input, Please Valid Item Input";
			
			}
        }
        else
        {
            cout << "\n\n\t Please againe Select? : ";
        }
    }

    void print_time()
    {
    	total_bill+=bill;
    	cout<<"\n\n\t Total Bill is : "<<total_bill;
        cout << "\n\n\t Your Order Will be delivered in 40 minutes";
        cout << "\n\n\t Thank You For Ordering From Tops Tech Fast Food";
    }
};

int main()
{

    order O;
    char op1;
        O.get_pname();
    do
    {
        O.print_order();
        O.get_choice();
        O.get_select();
        O.get_order();
        O.print_time();
        cout << "\n\n\t Would you like to order anythink else? Y/N : ";
        cin >> op1;
    } while (op1 == 'Y' || op1 == 'y');
}

