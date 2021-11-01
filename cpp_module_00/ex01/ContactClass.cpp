#include "./ContactClass.hpp"
#include <iomanip>
#include <string>

Contact::Contact(void)
{
    this->_first_name = "null";
    this->_last_name = "null";
    this->_nick_name = "null";
    this->_phone_number = "null";
    this->_darkest_secret = "null";
    return ;
}

//Destructeur
Contact::~Contact(void)
{
    return ;
}

std::string  Contact::getter_first_name(void)
{
    return (this->_first_name);
}

std::string  Contact::getter_last_name(void)
{
    return (this->_last_name);
}

std::string  Contact::getter_phone_number(void)
{
    return (this->_phone_number);
}

std::string  Contact::getter_nick_name(void)
{
    return (this->_nick_name);
}

std::string  Contact::getter_darkest_secret(void)
{
    return (this->_darkest_secret);
}

/*
** Trouvé sur stackoverflow et légèremment modifiée
*/
std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
    if (str.length() > width)
    {
        if (show_ellipsis)
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
    }
    return str;
}

/*
** Permet d'afficher les contacts disponibles
*/
void        Contact::display_all()
{
  Contact *it;
  int i = 0;

  std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "firstname"
    << "|" << std::setw(10) << "lastname" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
  while (i < 8)
  {
    it = this + i;
    if (it->_first_name.compare("null") != 0)
    {
        std::cout << "|" << std::setw(10) << std::to_string(i) << "|" << std::setw(10) << truncate(it->_first_name, 9)
        << "|" << std::setw(10) << truncate(it->_last_name, 9) << "|" << std::setw(10) << truncate(it->_nick_name, 9)
        << "|" << std::endl;
    }
    i++;
  }
}

void        Contact::search_contact(int contact_number)
{
    (void)contact_number;
    std::string str;
    int         i;

    display_all();

    std::cout << "Type the index you are looking for: ";
    std::getline(std::cin, str);
    i = 0;
    Contact *it;
    while (i < 8)
    {
        it = this + i;
        if (std::to_string(i).compare(str) == 0)
        {
            std::cout << "------------------------------------------" << std::endl;
            std::cout << "Contact infos :" << std::endl;
            std::cout << "------------------------------------------" << std::endl;
            std::cout << "First name: " << it->_first_name << std::endl  << "Last name: " << it->_last_name << std::endl
            << "Nickname: " << it->_nick_name << std::endl << "Phone number: " << it->_phone_number << std::endl
            << "Darkest secret: " << it->_darkest_secret << std::endl;
            std::cout << "------------------------------------------" << std::endl;
            return ;
        }
        i++;
    }
    std::cout << "You typed an invalid index. Error." << std::endl;
}

int        Contact::setter_first_name(std::string first_name)
{
    if (first_name.length() > 0)
    {
        this->_first_name = first_name;
        return (1);
    }
    else
    {
        std::cout << "The first_name can not be is empty." << std::endl;
        return (0);
    }
}

int        Contact::setter_last_name(std::string last_name)
{
    if (last_name.length() > 0)
    {
        this->_last_name = last_name;
        return (1);
    }

    else
    {
        std::cout << "The last_name cannot be empty." << std::endl;
        return (0);
    }
}

int        Contact::setter_nick_name(std::string nick_name)
{
    if (nick_name.length() > 0)
    {
        this->_nick_name = nick_name;
        return (1);
    }
    else
    {
        std::cout << "The nick_name cannot be empty." << std::endl;
        return (0);
    }
}

void        Contact::setter_darkest_secret(std::string darkest_secret)
{
    if (darkest_secret.length() > 0)
        this->_darkest_secret = darkest_secret;
    else
    {
        std::cout << "The darkest_secret is empty." << std::endl;
        std::cout << "Contact will be added without one." << std::endl;
    }
}

void        Contact::setter_phone_number(std::string phone_num)
{
    int len = phone_num.length();
    int j = 0;
    while (j < len && len == 10)
    {
        if (isdigit(phone_num[j]) == false)
        {
            std::cout << "Phone number is incorrect." << std::endl;
            return ;
        }
        j++;
    }
    if (len == 10)
        this->_phone_number = phone_num;
    else
        std::cout << "Phone number length is invalid and will not be saved." << std::endl;
}

int    Contact::add_contact(void)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "Enter first name : ";
    std::getline(std::cin, first_name);
    if (this->setter_first_name(first_name) == 0)
    {
        std::cout << "Please retry to ADD a contact with a valid first_name" << std::endl;
        return (0);
    }
    std::cout << "Enter last name : ";
    std::getline(std::cin, last_name);
    if (this->setter_last_name(last_name) == 0)
    {
        std::cout << "Please retry to ADD a contact with a valid last_name" << std::endl;
        return (0);
    }
    std::cout << "Enter nickname : ";
    std::getline(std::cin, nick_name);
    if (this->setter_nick_name(nick_name) == 0)
    {
        std::cout << "Please retry to ADD a contact with a valid nick_name" << std::endl;
        return (0);
    }
    std::cout << "Enter phone number : ";
    std::getline(std::cin, phone_number);
    this->setter_phone_number(phone_number);
    std::cout << "Enter darkest secret : ";
    std::getline(std::cin, darkest_secret);
    this->setter_darkest_secret(darkest_secret);
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Contact successfully added !" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    return (1);
}
