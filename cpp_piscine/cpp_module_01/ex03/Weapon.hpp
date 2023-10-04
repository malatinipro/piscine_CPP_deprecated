#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

/* exercice sur les retours des references */
class Weapon
{
public:

    Weapon();
    Weapon(std::string const &type);
    ~Weapon();

    /* Setter et getter */
    /* Dans cette exercice on veut passer dans le setter une reference constante */
    void                setType(std::string const &type);
    /* Cette fonction va retourver une reference vers une string constante */
    std::string const & getType(void) const;

private:
    std::string _type;
};
#endif
