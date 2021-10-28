#ifndef DATACLASS_HPP
#define DATACLASS_HPP

#include <iostream>
#include <string>

class Data
{
public:
  Data(void);
  Data(Data const &src);
  Data(int value);
  virtual ~Data(void);

  Data &		operator=( Data const & rhs );
  int			getValue() const;
private:
  int _value;
};

std::ostream &			operator<<( std::ostream & o, Data const & i );

#endif
