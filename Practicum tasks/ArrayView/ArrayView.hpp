#include <iostream>
#include <fstream>


template<class T>

class ArrayView{
    
private:
    const T* _begin;
    const T* _end;
    
public:
    ArrayView(const T* begin,const T* end);
    ArrayView(const T* obj,size_t size);
    ArrayView subArray(size_t from,size_t to) const;
    size_t length() const;
    const T& operator[](size_t index) const;
    friend std::ostream& operator<<(std::ostream& os,const ArrayView<T>& obj){
        const T* iter = obj._begin;
        while (iter != obj._end) {
            os << *iter << " ";
            iter++;
        }
        return os;
    }
};

template<class T>
ArrayView<T>::ArrayView(const T* begin,const T* end) : _begin(begin), _end(end){}

template<class T>
ArrayView<T>::ArrayView(const T* obj,size_t size) : ArrayView(obj,obj + size){}

template<class T>
ArrayView<T> ArrayView<T>::subArray(size_t from,size_t len) const {
    if(_begin + from + len > _end)
        throw std::invalid_argument("Out of bounds");
    return ArrayView(_begin + from,_begin + from + len);
}

template<class T>
size_t ArrayView<T>::length() const{
    return _end - _begin;
}

template<class T>
const T& ArrayView<T>::operator[](size_t index) const{
    return _begin[index];
}



