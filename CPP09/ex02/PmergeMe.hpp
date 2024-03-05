#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include<sstream>
#include<vector>
#include <sys/time.h>
#include <deque>


class PmergeMe {
    public:
        PmergeMe();
        PmergeMe(char **av);
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        ~PmergeMe();

        void check_input(char **av);
        void printResult();
        // template<typename T, typename U>
        // void printResult(T before, U after) {
        //     typename T::iterator it;
        //     typename U::iterator it1;
        //     std::cout << "Before : " ;
        //     for(it = before.begin(); it != before.end(); it++)
        //         std::cout << *(it) << " ";
        //     std::cout << std::endl;
        //     std::cout << "After : " ;
        //     for(it1 = after.begin(); it1 != after.end(); it1++)
        //         std::cout << *(it1) << " ";

        // }
        void mergeSortPairs_v(std::vector<std::pair<int, int> >&array);
        void merge(std::vector<std::pair<int, int> >&leftArray, std::vector<std::pair<int, int> >&rightArray, std::vector<std::pair<int, int> >&origineArray);
        void insertElements_v(int number);
        void jacobSequence();
        void evaluate();


        void evaluate_d();
        void jacobSequence_d();
        void mergeSortPairs_d(std::deque<std::pair<int, int> >&array);
        void merge_d(std::deque<std::pair<int, int> >&leftArray, std::deque<std::pair<int, int> >&rightArray, std::deque<std::pair<int, int> >&origineArray);
        void insertElements_d(int number);



    private:
        std::vector<int> elements;

        std::vector<int> jSequence;
        std::vector<std::pair<int, int> > pairs;
        std::vector<int> main_chain_v;
        std::vector<int> pend_v;
        double vectoreTimeToSort;

        std::deque<std::pair<int, int> > pairs_d;
        std::deque<int> jSequence_d;
        std::deque<int> main_chain_d;
        std::deque<int> pend_d;
        double dequeTimeToSort;

        int struggler;
        double dataManTime;

};







#endif