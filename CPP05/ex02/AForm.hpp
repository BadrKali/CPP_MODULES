/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kala <bel-kala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:49:23 by bel-kala          #+#    #+#             */
/*   Updated: 2023/11/18 14:16:37 by bel-kala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
class Bureaucrat;
#include"Bureaucrat.hpp"


class AForm {
    public:
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
            AForm();
            AForm(std::string name, int signGrade, int executGrade);
            ~AForm();
            AForm(const AForm& other);
            AForm& operator=(const AForm& other);

            //GETTERS
            const std::string getName() const;
            int getSignGrade() const;
            int getExecutGrade() const ;
            bool getSignState() const ;
            

            void beSigned(const Bureaucrat& agent);
            virtual void execute(Bureaucrat const & executor) const = 0;
            
    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _executGrade;
        
};



std::ostream& operator << (std::ostream& stream, const AForm& obj);


#endif