#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
public:
  Span();
  Span(Span const &src);
  Span(unsigned int N);
  virtual ~Span();
  Span & operator=(Span const & src);

  //store a single number
  void	            addNumber(int const nb);
  unsigned int      shortestSpan(void) const;
  unsigned int      longestSpan(void) const;

  //accessors
  unsigned int      getN(void)const; 

private:
  unsigned int      _N;
  std::vector<int>  _numbers;
};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

#endif
