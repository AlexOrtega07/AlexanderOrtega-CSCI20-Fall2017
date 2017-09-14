/* created by Alex Ortega
    09-13-17
    this program will hold information for a stock portfolio
    It will hold information for up to 4 sets of stocks
    
    */
    
    #include <iostream>
    #include <string>
    using namespace std;
    
    //Here user will input info about their stock
    struct StockPortfolio {
        string stockName1;
        char sector;
        double sharePrice ;
        int sharesOwned;
    };
    
    int main() {
        
        StockPortfolio stock1;
        //object one or stock one is here
        cout << "stock Name: ";
        cin >> stock1.stockName1;
        cout << "Sector: ";
        cin >> stock1.sector;
        cout << "Share price: ";
        cin >> stock1.sharePrice;
        cout << "Shares owned: ";
        cin >> stock1.sharesOwned;
        cout << "Stock Value: $" << stock1.sharePrice *stock1.sharesOwned << endl;
        
        StockPortfolio stock2;
        //object2 or stock 2 is here
         cout << "Stock Name: ";
         cin >> stock2.stockName1;
         cout << "Sector: ";
         cin >> stock2.sector;
         cout << "Share price: ";
         cin >> stock2.sharePrice;
         cout << "Shares owned: ";
         cin >> stock2.sharesOwned;
         cout << "Stock Value: $" << stock2.sharePrice * stock2.sharesOwned << endl;
        
        StockPortfolio stock3;
        //object3 or stock 3 will go here
        cout << "Stock Name: ";
        cin >> stock3.stockName1;
        cout << "Sector Name: ";
        cin >> stock3.sector;
        cout << "Share price: ";
        cin >> stock3.sharePrice;
        cout << "Shares owned: ";
        cin >> stock3.sharesOwned;
        cout << "Stock Value: $" << stock3.sharePrice * stock3.sharesOwned << endl;
        
        StockPortfolio stock4;
        //object4 or stock 4 will go here
        cout << "Stock Name: ";
        cin >> stock4.stockName1;
        cout << "Sector Name: ";
        cin >> stock4.sector;
        cout << "Share price: ";
        cin >> stock4.sharePrice;
        cout << "Shares owned: ";
        cin >> stock4.sharesOwned;
        cout << "Stock Value: $" << stock4.sharePrice * stock4.sharesOwned << endl;
        
        
/* Data from all 4 stocks
Sector: A
Share price: 18.76
Shares owned: 87
Stock Value: $1632.12
Stock Name: Albertsn
Sector: C
Share price: 34.39
Shares owned: 542
Stock Value: $18639.4
Stock Name: AAPL
Sector Name: T
Share price: 145.91
Shares owned: 5
Stock Value: $729.55
Stock Name: TSLA
Sector Name: A
Share price: 375.64
Shares owned: 50
Stock Value: $18782
*/
        
    }
    
        
        
        