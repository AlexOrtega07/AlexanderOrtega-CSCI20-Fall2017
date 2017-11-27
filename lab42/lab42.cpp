/*This program was created by Alex Ortega on 11-20-17
    This program will essentially track an order through an online shopping cart for dog treats. The program asks the user how much they want of each then 
    adds to their cart. The program will follow with a current total.
    */
 #include <iostream> 
 #include <string> 
 using namespace std;
 
 int main (){
     string itemname[10] = {"Bones", "Chew", "Pig Ear", "Larynx", "Crunchy", "Soft", //array for string names different types of trats
                        "Dental Chew", "Animal Hoove", "Rawhide", "Jerky Treats"};
     int inventory[10] = {5, 5, 5, 5, 5, 5, 10, 8, 3, 20};// number of each item available
     int price[10] = {4, 4, 4, 4, 4, 4, 2, 3, 5, 10};//item price not in doubles
     int orderquantity[10];
     int totalquantity = 0;
     int totalprice = 0;
     
     
     int i = 0;
     for (i=0; i<10; ++i) {
         cout << endl << "Enter how many of this item you'd like, " << itemname[i] << ": ";// asking for customer input for how many of each
         cin >> orderquantity[i];
         
         if ((inventory[i] - orderquantity[i]) < 0) {// checking for stock situation
             cout << "There are " << inventory[i] << " in stock, they will be added to your order." << endl;
             orderquantity[i] = inventory[i];
         }
         
         totalquantity = totalquantity + orderquantity[i];
         totalprice = totalprice + (orderquantity[i] * price[i]);
         inventory[i] = inventory[i] - orderquantity[i];
         
         cout << endl << "You ordered " << orderquantity[i] << " " << itemname[i] // per order summary
                << " for a total of $" << orderquantity[i] * price[i] << "." << endl;
         cout << "Your current total is $" << totalprice << endl;
     }
     
     cout << endl << "In your cart there are a total of  " << totalquantity << " items for a total of $"// complete toatal
            << totalprice << "." << endl;
 }
 /*Enter how many of this item you'd like, Bones: 5

You ordered 5 Bones for a total of $20.
Your current total is $20

Enter how many of this item you'd like, Chew: 3

You ordered 3 Chew for a total of $12.
Your current total is $32

Enter how many of this item you'd like, Pig Ear: 50
There are 5 in stock, they will be added to your order.

You ordered 5 Pig Ear for a total of $20.
Your current total is $52

Enter how many of this item you'd like, Larynx: 3

You ordered 3 Larynx for a total of $12.
Your current total is $64

Enter how many of this item you'd like, Crunchy: 4

You ordered 4 Crunchy for a total of $16.
Your current total is $80

Enter how many of this item you'd like, Soft: 5

You ordered 5 Soft for a total of $20.
Your current total is $100

Enter how many of this item you'd like, Dental Chew: 2

You ordered 2 Dental Chew for a total of $4.
Your current total is $104

Enter how many of this item you'd like, Animal Hoove: 6

You ordered 6 Animal Hoove for a total of $18.
Your current total is $122

Enter how many of this item you'd like, Rawhide: 7
There are 3 in stock, they will be added to your order.

You ordered 3 Rawhide for a total of $15.
Your current total is $137

Enter how many of this item you'd like, Jerky Treats: 5

You ordered 5 Jerky Treats for a total of $50.
Your current total is $187

In your cart there are a total of  41 items for a total of $187.
*/