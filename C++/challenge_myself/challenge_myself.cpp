#include <iostream>
#include <iomanip>
using namespace std;

class basic
{
private:
    string ID;
    int count = 0;
    bool state = 0; // Default == 0 (on)
    string name;

public:
    // r & w ID
    void w_ID(string id)
    {
        ID = id;
    }
    string r_ID()
    {
        return ID;
    }

    // r & w count
    void w_count()
    {
        count++;
    }
    int r_count()
    {
        return count;
    }

    // r & w state
    void w_state()
    {
        if (state == 0)
            state = 1;
        else if (state == 1)
            state = 0;
    }
    bool r_state()
    {
        return state;
    }

    // r & w name
    void w_name(string NAME)
    {
        name = NAME;
    }
    string r_name()
    {
        return name;
    }
};

class book : public basic
{
private:
    string author;
    book *ptr;

public:
    // r & w author
    void w_author(string name)
    {
        author = name;
    }
    string r_author()
    {
        return author;
    }

    // r & w ptr
    void w_ptr(book *p)
    {
        ptr = p;
    }
    book *r_ptr()
    {
        return ptr;
    }
};

class dvd : public basic
{
private:
    int size;
    dvd *ptr;
public:
    // r & w size
    void w_size(int times)
    {
        size = times;
    }
    int r_size()
    {
        return size;
    }

    // r & w ptr
    void w_ptr(dvd *p)
    {
        ptr = p;
    }
    dvd *r_ptr()
    {
        return ptr;
    }
};

class functions : virtual public book, dvd
{
private:
    book *head_b = NULL, *rear_b = NULL, *front_b = NULL, *p_b = NULL, *q_b = NULL;
    dvd *head_d = NULL, *rear_d = NULL, *front_d = NULL, *p_d = NULL, *q_d = NULL;
    string b_name;
    string d_name;
    string authors;
    string id;
    

public:
    void new_book()
    {
        if (head_b)
        {   
            p_b = new book;
            cout<<"Input the ID of the Book. "<<endl;
            cin>>id;
            
            cout<<"Input the Name of the Book. "<<endl;
            cin>>b_name;

            cout<<"Input author's name. "<<endl;
            cin>>authors;
        }
    }
};

int main()
{
    return 0;
}