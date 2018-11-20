//
// Created by nseltzer on 11/19/2018.
//

#ifndef IN_CLASS_TEMPLATES_MERGESTUDENTS_HPP
#define IN_CLASS_TEMPLATES_MERGESTUDENTS_HPP

template <class T>
class too_low {
private:
    T cutoff;
public:
    too_low(const T& value){
        cutoff = value;
    }
    bool operator()(const T& value) {
        return value < cutoff;
    }

};

#endif //IN_CLASS_TEMPLATES_MERGESTUDENTS_HPP
