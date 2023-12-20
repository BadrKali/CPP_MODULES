/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:49:23 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/15 12:06:01 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
class Bureaucrat;
#include"Bureaucrat.hpp"


class Form {

    class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };
    public:
        Form();
        Form(std::string name, int signGrade, int executGrade);
        ~Form();
        Form(const Form& other);
        Form& operator=(const Form& other);

        //GETTERS
        const std::string getName() const;
        int getSignGrade() const;
        int getExecutGrade() const ;
        bool getSignState() const ;
        

        void beSigned(const Bureaucrat& agent);
    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _executGrade;
        
};



std::ostream& operator << (std::ostream& stream, const Form& obj);


#endif