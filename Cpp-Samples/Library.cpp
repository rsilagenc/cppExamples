#include <iostream>
#include <string>

class Library
{
    private:
        std::string bookTitle;
        std::string authorName;
        double isbnNumber;
        double libraryCardNumber;

    public:
        Library(std::string title, std::string author, double isbn, double card)
        {
            bookTitle = title;
            authorName = author;
            isbnNumber = isbn;
            libraryCardNumber = card;
        }

        std::string getBookTitle()
        {
            return bookTitle;
        }

        std::string getAuthorName()
        {
            return authorName;
        }

        double getISBN()
        {
            return isbnNumber;
        }

        void setBookTitle(std::string title)
        {
            bookTitle = title;
            std::cout << bookTitle << std::endl;
        }

        void setAuthorName(std::string author)
        {
            authorName = author;
        }

        void setISBN(double isbn)
        {
            isbnNumber = isbn;
        }

        void addBook(std::string title, std::string author, double isbn)
        {

        }

        double ISBN(double isbn)
        {
            return isbnNumber;
        }

        void removeBook (double isbn)
        {

        }

        void checkOutBook (double isbn)
        {

        }

        void returnBook (double isbn)
        {

        }




};

int main()
{
    std::string bookTitle;
    std::string authorName;
    double isbnNumber;
    double libraryCardNumber;

    std::cout << "Enter your library card number: " << std::endl;
    std::cin >> libraryCardNumber;

    Library lib(bookTitle, authorName, isbnNumber, libraryCardNumber);
    int choice;

    while(true)
    {
        std::cout << "1. Add book\n2. Remove book\n3. Check out book\n4. Return book\n5. Search book\n6. Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter book's name: " << std::endl;
            std::cin >> bookTitle;
            lib.setBookTitle(bookTitle);
            //std::cout << "The book's name is " << lib.getBookTitle() << std::endl;
            break;

        default:
            break;
        }

        break;
    }



}
