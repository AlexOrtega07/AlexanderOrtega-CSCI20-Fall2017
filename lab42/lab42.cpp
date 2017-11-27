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