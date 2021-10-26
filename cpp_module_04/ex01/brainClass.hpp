#ifndef BRAINCLASS_HPP
# define BRAINCLASS_HPP

# include <iostream>
# include <string>

//deep copies
//https://www.youtube.com/watch?v=-57sRhTti48
//https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/
class Brain
{
	public:
		Brain(void);
    //C'est le copie constructeur qui permet les copies deep
		Brain(Brain const & src);
		Brain(const std::string ideas[100]);
		virtual ~Brain(void);

		Brain &		operator=(Brain const & rhs);
		void		display_ideas(void) const;

	protected:
		std::string	ideas[100];
};

#endif
