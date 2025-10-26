#include <sstream>
#include <algorithm>
#include "book.h"

using namespace std;

    // Constructors
    Book::Book() {}
    Book::Book(const string& title, const string& author, const string& isbn):
        title(title), author(author), isbn(isbn) {}

    // Getters
    string Book::getTitle() const { return title; }
    string Book::getAuthor() const { return author; }
    string Book::getISBN() const { return isbn; }
    bool Book::getAvailability() const { return isAvailable; }
    string Book::getBorrowerName() const { return borrowerName; }

    // Setters
    void Book::setTitle(const string& title) { this->title = title; }
    void Book::setAuthor(const string& author) { this->author = author; }
    void Book::setISBN(const string& isbn) { this->isbn = isbn; }
    void Book::setAvailability(bool available) { this->isAvailable = available; }
    void Book::setBorrowerName(const string& name) { this->borrowerName = name; }

    // Methods
    void Book::checkOut(const string& borrower) {
        isAvailable = false;
        borrowerName = borrower;
    }
    void Book::returnBook() {
        isAvailable = true;
        borrowerName = "";
    }
    string Book::toString() const {
        string result = "Title: " + title + "\nAuthor: " + author + 
                        "\nISBN: " + isbn + "\nAvailable: " + (isAvailable ? "Yes" : "No");
        if (!isAvailable) {
            result += "\nBorrower: " + borrowerName;
        }
        return result;
    }
    string Book::toFileFormat() const {
        return title + "|" + author + "|" + isbn + "|" + 
               (isAvailable ? "1" : "0") + "|" + borrowerName;
    }

    void Book::fromFileFormat(const string& line) {
        stringstream ss(line);  
        string token;
        
        getline(ss, title, '|');
        getline(ss, author, '|');
        getline(ss, isbn, '|');
        getline(ss, token, '|');
        isAvailable = (token == "1");
        getline(ss, borrowerName, '|');
        
    }