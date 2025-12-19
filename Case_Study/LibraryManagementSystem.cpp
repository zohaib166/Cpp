#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LibraryItem
{
protected:
    int id;
    string title;
    bool isBorrowed;
public:
    LibraryItem(int id, string title, bool isBorrowed);
    int getId();
    string getTitle();
    void borrowItem();
    void returnItem();
    virtual void displayDetails() = 0;
    virtual ~LibraryItem();
};

LibraryItem::LibraryItem(int id, string title, bool isBorrowed = false) {
    this->id = id;
    this->title = title;
    this->isBorrowed = isBorrowed;
}

int LibraryItem::getId() { return  id; }

string LibraryItem::getTitle() { return title; }

void LibraryItem::borrowItem() {
    if(isBorrowed) {
        cout << "Item is already borrowed\n";
    } else {
        isBorrowed = true;
        cout << "Item is issued\n";
    }
}

void LibraryItem::returnItem() {
    if(!isBorrowed) {
        cout << "Item is already returned\n";
    } else {
        isBorrowed = false;
        cout << "Item returned\n";
    }
}

LibraryItem::~LibraryItem() {}

class Book:public LibraryItem {
private:
    string author;
    int pages;
public:
    Book(int id, string title, string author, int pages);
    void displayDetails();
};

Book::Book(int id, string title, string author, int pages):LibraryItem(id, title) {
    this->author = author;
    this->pages = pages;
}

void Book::displayDetails() {
    cout << "Book [" << id << " | " << title << " | " << author << " | " << pages 
    << " | Status = " << ((isBorrowed==true)?"Borrowed":"Available");
    cout << endl;
}

class DVD : public LibraryItem {
private:
    string director;
    int durationMinutes;
public:
    DVD(int id, string title, string director, int duration);
    void displayDetails();
};

DVD::DVD(int id, string title, string director, int durationMinutes):LibraryItem(id, title)
{
    this->director = director;
    this->durationMinutes = durationMinutes;
}

void DVD::displayDetails()
{
    cout << "DVD [" << id << " | " << title << " | " << director << " | " << durationMinutes 
    << " | Status = " << ((isBorrowed==true)?"Borrowed":"Available");
    cout << endl;
}

class Library {
private:
    vector <LibraryItem*> items;
public:
    void addItem(LibraryItem *item);
    void listCatalog();
    void borrowItem(int id);
    void returnItem(int id);
    ~Library();
};

void Library::addItem(LibraryItem *item) {
    items.push_back(item);
    cout << "Item Added\n";
}

void Library::listCatalog() {
    if(items.size() > 0) {
        for(auto &i:items) {
            i->displayDetails();
        }
    } else {
        cout << "Library is Empty\n";
    }
}

void Library::borrowItem(int id) {
    for(auto i:items) {
        if(i->getId() == id) {
            i->borrowItem();
            return;
        } 
        
    }
    cout << "Item not found\n";
}

void Library::returnItem(int id) {
    for(auto i:items) {
        if(i->getId() == id) {
            i->returnItem();
            break;
        }
    }
}

Library::~Library()
{
    for(auto &i:items) {
        delete i;
    }
    items.clear();
}

int main()
{
    Library lib;
    // Create and add some Books
    lib.addItem(new Book(1, "C++ Primer", "Lippman", 1000));
    lib.addItem(new Book(2, "Design Patterns", "GoF", 395));

    // Create and add some DVDs
    lib.addItem(new DVD(3, "Inception", "Nolan", 148));
    lib.addItem(new DVD(4, "Interstellar", "Nolan", 169));

    int choice;
    
    do {
        cout << "1. List All Items\n";
        cout << "2. Borrow Items\n";
        cout << "3. Return Items\n";
        cout << "4. Exit\n";
        cout << "Choose the desired option\n";
        cin >> choice;
        int id;
        if(choice==1) {
            lib.listCatalog();
        } else if(choice==2) {
            cout << "Enter item ID\n";
            cin >> id;
            lib.borrowItem(id);
        } else if(choice == 3) {
            cout << "Enter item ID\n";
            cin >> id;
            lib.returnItem(id);
        } else if(choice == 4) {
            break;
        }
    } while(choice != 4);
}