#include"PmergeMe.hpp"



PmergeMe::PmergeMe() { }

PmergeMe::~PmergeMe() { }

int converteToInt(std::string &value) {
    std::istringstream s(value);
    int a;
    s >> a;
    return(a);
}

PmergeMe::PmergeMe(char **av) {
    check_input(av);
    clock_t start_time;
    start_time = clock();
    if(this->elements.size() == 1) throw std::invalid_argument("Provide more numbers");
    if(this->elements.size() % 2 != 0) this->struggler = *(this->elements.end() - 1);
    else this->struggler = -1;
    for(std::vector<int>::iterator it = this->elements.begin(); (it != this->elements.end()) && it + 1 != this->elements.end(); it += 2){
        std::pair<int, int> p;
        if(*it > *(it + 1)) p = std::make_pair(*it,*(it + 1));
        else p = std::make_pair(*(it + 1),*it);
        this->pairs.push_back(p);
        this->pairs_d.push_back(p);
    }
    this->dataManTime = double(clock() - start_time) / CLOCKS_PER_SEC * (1000000);
}


PmergeMe::PmergeMe(const PmergeMe& other) {
    (*this) = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    this->elements = other.elements;
    this->jSequence = other.jSequence;
    this->pairs = other.pairs;
    this->main_chain_d = other.main_chain_d;
    this->pend_v = other.pend_v;
    this->pairs_d = other.pairs_d;
    this->jSequence_d = other.jSequence_d;
    this->main_chain_d = other.main_chain_d;
    this->pend_d = other.pend_d;

    return(*this);
}

void PmergeMe::check_input(char **av) {
    int i = 1;
    while(av[i] != NULL) {
        std::string element(av[i]);
        size_t check = element.find_first_not_of("0123456789");
        if(check != std::string::npos) throw(std::invalid_argument(element + " is Invalid"));
            this->elements.push_back(converteToInt(element));
        i++;
    }
}

void PmergeMe::merge(std::vector<std::pair<int, int> >&leftArray, std::vector<std::pair<int, int> >&rightArray, std::vector<std::pair<int, int> >&origineArray) {
    size_t i = 0;
    size_t r = 0;
    size_t l = 0;
    
    while(l < leftArray.size() && r < rightArray.size()) {
        if(leftArray[l].first < rightArray[r].first) {
            origineArray[i] = leftArray[l];
            l++;
            i++;
        }
        else {
            origineArray[i] = rightArray[r];
            r++;
            i++;
        }
    }

    while(l < leftArray.size()) {
        origineArray[i] = leftArray[l];
        i++;
        l++;
    }

    while(r < rightArray.size()) {
        origineArray[i] = rightArray[r];
        i++;
        r++;
    }
}

void PmergeMe::mergeSortPairs_v(std::vector<std::pair<int, int> >&array) {
    if(array.size() == 1) return;
    std::vector<std::pair<int, int> >leftArray(array.begin(), array.begin() + array.size() / 2);
    std::vector<std::pair<int, int> >rightArray(array.begin() + array.size() / 2, array.end());
    mergeSortPairs_v(leftArray);
    mergeSortPairs_v(rightArray);
    merge(leftArray, rightArray, array);
}

void PmergeMe::jacobSequence() {
    std::vector<int> index;

    if(this->pend_v.size() >= 1)
        jSequence.push_back(0);
    if(this->pend_v.size() >= 2)
        jSequence.push_back(1);
    for(size_t i = 2; i <= this->pend_v.size(); i++) {
        size_t number = jSequence[i - 1] + (2 * jSequence[i - 2]);
        this->jSequence.push_back(number);
        if(this->pend_v.size() < number)
            break;
    }
    index.push_back(this->jSequence[0]);
    index.push_back(this->jSequence[1]);
    for(size_t i = 2; i < this->jSequence.size(); i++) {
        int j = this->jSequence[i];
        while(j > this->jSequence[i - 1]) {
            index.push_back(j);
            j--;
        }
    }
    this->jSequence = index;
}

void PmergeMe::insertElements_v(int element) {
    std::vector<int>::iterator it = std::lower_bound(this->main_chain_v.begin(), this->main_chain_v.end(), element);
    this->main_chain_v.insert(it, element);
}

void PmergeMe::evaluate() {
    clock_t start_time;
    start_time = clock();
    mergeSortPairs_v(this->pairs);
    for(std::vector<std::pair<int,int> >::iterator it = this->pairs.begin(); it != this->pairs.end(); it++) {
        this->main_chain_v.push_back(it->first);
        this->pend_v.push_back(it->second);
    }
    jacobSequence();
    this->main_chain_v.insert(this->main_chain_v.begin(), this->pend_v[0]);
    for(size_t i = 2; i < this->jSequence.size(); i++) {
        int index_to_push;
        if((size_t)this->jSequence[i] <= this->pend_v.size()) {
            index_to_push = this->jSequence[i];
            insertElements_v(this->pend_v[index_to_push - 1]);
        }
    }
    if(this->struggler != -1)
        insertElements_v(this->struggler);
    double time = double(clock() - start_time) / CLOCKS_PER_SEC * (1000000) + this->dataManTime;
    this->vectoreTimeToSort = time;

}


void PmergeMe::printResult() {
    std::cout << "Before : " ;
    for(std::vector<int>::iterator it = this->elements.begin(); it != this->elements.end(); it++)
        std::cout << *(it) << " ";
    std::cout << std::endl;
    std::cout << "After : " ;
    for(std::vector<int>::iterator it1 = this->main_chain_v.begin(); it1 != this->main_chain_v.end(); it1++)
        std::cout << *(it1) << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << this->elements.size() << " with std::vectore : " << this->vectoreTimeToSort << std::endl;
    std::cout << "Time to process a range of " << this->elements.size() << " with std::deque : " << this->dequeTimeToSort << std::endl;
}

void PmergeMe::merge_d(std::deque<std::pair<int, int> >&leftArray, std::deque<std::pair<int, int> >&rightArray, std::deque<std::pair<int, int> >&origineArray) {
    size_t i = 0;
    size_t r = 0;
    size_t l = 0;
    
    while(l < leftArray.size() && r < rightArray.size()) {
        if(leftArray[l].first < rightArray[r].first) {
            origineArray[i] = leftArray[l];
            l++;
            i++;
        }
        else {
            origineArray[i] = rightArray[r];
            r++;
            i++;
        }
    }

    while(l < leftArray.size()) {
        origineArray[i] = leftArray[l];
        i++;
        l++;
    }

    while(r < rightArray.size()) {
        origineArray[i] = rightArray[r];
        i++;
        r++;
    }
}

void PmergeMe::jacobSequence_d() {
    std::deque<int> index;

    if(this->pend_d.size() >= 1)
        jSequence_d.push_back(0);
    if(this->pend_d.size() >= 2)
        jSequence_d.push_back(1);
    for(size_t i = 2; i <= this->pend_d.size(); i++) {
        size_t number = jSequence_d[i - 1] + (2 * jSequence_d[i - 2]);
        this->jSequence_d.push_back(number);
        if(this->pend_d.size() < number)
            break;
    }
    index.push_back(this->jSequence_d[0]);
    index.push_back(this->jSequence_d[1]);
    for(size_t i = 2; i < this->jSequence_d.size(); i++) {
        int j = this->jSequence_d[i];
        while(j > this->jSequence_d[i - 1]) {
            index.push_back(j);
            j--;
        }
    }
    this->jSequence_d = index;
}

void PmergeMe::insertElements_d(int element) {
    std::deque<int>::iterator it = std::lower_bound(this->main_chain_d.begin(), this->main_chain_d.end(), element);
    this->main_chain_d.insert(it, element);
}

void PmergeMe::mergeSortPairs_d(std::deque<std::pair<int, int> >&array) {
    if(array.size() == 1) return;
    std::deque<std::pair<int, int> >leftArray(array.begin(), array.begin() + array.size() / 2);
    std::deque<std::pair<int, int> >rightArray(array.begin() + array.size() / 2, array.end());
    mergeSortPairs_d(leftArray);
    mergeSortPairs_d(rightArray);
    merge_d(leftArray, rightArray, array);
}


void PmergeMe::evaluate_d() {
    clock_t start_time;
    start_time = clock();
    mergeSortPairs_d(this->pairs_d);
    for(std::deque<std::pair<int,int> >::iterator it = this->pairs_d.begin(); it != this->pairs_d.end(); it++) {
        this->main_chain_d.push_back(it->first);
        this->pend_d.push_back(it->second);
    }
    this->main_chain_d.insert(this->main_chain_d.begin(), this->pend_d[0]);
    for(size_t i = 2; i < this->jSequence_d.size(); i++) {
        int index_to_push;
        if((size_t)this->jSequence_d[i] <= this->pend_v.size()) {
            index_to_push = this->jSequence_d[i];
            insertElements_d(this->pend_d[index_to_push - 1]);
        }
    }
    if(this->struggler != -1)
        insertElements_d(this->struggler);
    double time = double(clock() - start_time) / CLOCKS_PER_SEC * (1000000) + this->dataManTime;
    this->dequeTimeToSort = time;
}

