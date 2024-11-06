#include <iostream>
#include <vector>
using namespace std;
#ifndef LESSONS_H
#define LESSONS_H



class FilterIntigerIterator {
public:
  class Iterator {
  public:
     Iterator(int* ptr,int* end,fuction<bool(int)> predicate);
     :current(ptr), end(end),predicate(prdicate) {
       avence_to_valid()
     }

     int operator*() const {
       return *current;
     };

     FilterIntigerIterator& operator++() {
       ++current;
       avence_to_valid();
       return *this;
     }

     bool operator!=(const FilterIntigerIterator& other) const {
       return crrent!=other.current;
     }

    FilterIntigerIterator begin() const {
      return *this
    }

    FilterIntigerIterator end() const {
      return FilterIntigerIterator(data + size, 0, predicate );
    }

private:
    int* data;
    size_t size;
    function<bool(int)> predicate;
    int* current;

    void avence_to_valid() {
      while(current !=data + size &&  !predicate(*current)) {
        ++current;
      }
    }
};


class ReverseIterator {
public:
   ReverseArrayIterator(int* arr,size_t size);
    :data(arr),size(size) {}

    ReverseArrayIterator begin() const {
      return ReverseArrayIterator(data,size, data + size - 1);
    }

    ReverseArrayIterator end() const {
      return ReverseArrayIterator(data,size, data - 1);
    }

    int& operator*() const {
      return *current;
    }
    ReverseArrayIterator& operator++() {
      --current;
      return *this;
    }

    bool operator!=(const ReverseArrayIterator& other) const {
      return current != other.current;
    }

private:
   int* data;
   size_t size;
   int* current;

   ReverseArrayIterator(int* data,size_t size,int* current)
    :data(data),size(size),current(current) {}

};

class CircularIntIterator {
public:
   CircularIntItrator(int* data,size_t size);
    :data(arr),size(size) {}

    int& operator*() const {
      return *current;
    }

    CircularIntIterator& operator++() {
      if (current == data + size) {
        current = data;
      }
    return *this;
    }

    bool operator!=(const CircularIntIterator& other) const {
      return current != other.current;
    }

private:
  int* data;
  size_t size;
  int* current;

};

