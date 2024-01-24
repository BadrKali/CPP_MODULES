/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:58 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/16 12:07:20 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include<iostream>
#include"AForm.hpp"
class AForm;

class Bureaucrat {
    public:

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);

        const std::string getName(void) const ;
        int getGrade(void) const;

        void incGrade(void);
        void decGrade(void);

        void signForm(AForm& form);
        void executeForm(AForm const & form);

    private:
        const std::string _name;
        int _grade;
};

std::ostream& operator << (std::ostream& stream, const Bureaucrat& obj);


#endif