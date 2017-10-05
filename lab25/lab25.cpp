/* This program was creaded by Alex Ortega on 10-04-17
This program will incorporate a  class called book that will store and display
information about books. 5 objects will be used and will ask for user input for each.
a get function will be used to output what was entered.Print functions will be used to
ouput the book information.*/

#include <iostream>
#include <cstdlib>
using namespace std;

class BookInfo {// class function declaration
    
    private:
        string title_;
        string author_;
        int copyright_;
    public:
        
            
        void SetTitle(string titleProvided);
        string GetTitle() const;
        void SetAuthor(string authorProvided);
         string GetAuthor() const;
        void SetCopyright(int copyrightProvided); 
        int GetCopyright() const;
        void Print(){
            cout << "Title: " << GetTitle() << endl;
            cout << "Book Author: " << GetAuthor() << endl;
            cout << "Copyright Year: " << GetCopyright() << endl;
        }
   
        
        
};
        void BookInfo::SetTitle(string titleProvided){
            title_= titleProvided;
            return;
        }
        string BookInfo::GetTitle() const{
            return title_;
        }
        void BookInfo::SetAuthor(string authorProvided){
            author_= authorProvided;
            return;
        }
        string BookInfo::GetAuthor()const {
            return author_;
        }
        void BookInfo::SetCopyright(int copyrightProvided){
          copyright_ = copyrightProvided;
          return;
        }
        int BookInfo::GetCopyright()const {
            return copyright_;
        }
        
        int main(){
        
            int copyright_ = 0;
            string title_ = "";
            string author_ = "";
            
            BookInfo book1;
            BookInfo book2;
            BookInfo book3;
            BookInfo book4;
            BookInfo book5;
            
            cout << "Enter a title for the first book." << endl;//set for 1st bookinfo
            getline(cin,title_);
            book1.SetTitle(title_);
            cout << "Enter a name for the first author." << endl;
            getline(cin,author_);
            book1.SetAuthor(author_);
            cout << "Enter the first copyright year." << endl;
            cin >> copyright_;
            book1.SetCopyright(copyright_);
            
            cout << "Enter a title for the second book." << endl;// set for second book info
            getline(cin,title_);
            book2.SetTitle(title_);//i couldnt figure out why here, user input for title could not be entered
            cout << "Enter a name for the second author." << endl;
            getline(cin,author_);
            book2.SetAuthor(author_);
            cout << "Enter the second copyright year." << endl;
            cin >> copyright_;
            book2.SetCopyright(copyright_);
            
            cout << "Enter a title for the third book." << endl;// set for third book info
            getline(cin,title_);
            book3.SetTitle(title_);
            cout << "Enter a name for the third author." << endl;
            getline(cin,author_);
            book3.SetAuthor(author_);
            cout << "Enter the third copyright year." << endl;
            cin >> copyright_;
            book3.SetCopyright(copyright_);
            
            cout << "Enter a title for the fourth book." << endl;// set for fourth book info
            getline(cin,title_);
            book4.SetTitle(title_);
            cout << "Enter a name for the fourth author." << endl;
            getline(cin,author_);
            book4.SetAuthor(author_);
            cout << "Enter the fourth copyright year." << endl;
            cin >> copyright_;
            book4.SetCopyright(copyright_);
            
            cout << "Enter a title for the fith book." << endl;// set for fith book info
            getline(cin,title_);
            book5.SetTitle(title_);
            cout << "Enter a name for the fith author." << endl;
            getline(cin,author_);
            book5.SetAuthor(author_);
            cout << "Enter the fith copyright year." << endl;
            cin >> copyright_;
            book5.SetCopyright(copyright_);
            
            book1.Print();//print functions
            book2.Print();
            book3.Print();
            book4.Print();
            book5.Print();
            return 0;
            
            
        }
            