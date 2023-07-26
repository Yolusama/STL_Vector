#pragma once
#include<iostream>
namespace MStd {
	template<class T>
	class Iterator {
	public:
		T* Ptr;
		Iterator() :Ptr(nullptr) {}
		Iterator(T* Ptr) {
			this->Ptr = Ptr;
		}
		Iterator operator ++() {
			Ptr++;
			return *this;
		}
		Iterator& operator ++(int) {
			++Ptr;
			return *this;
		}
		T& operator *() {
			return *Ptr;
		}
		T* operator ->() {
			return Ptr;
		}
		bool operator ==(Iterator iterator) {
			return Ptr == iterator.Ptr;
		}
		bool operator !=(Iterator iterator) {
			return Ptr != iterator.Ptr;
		}
	};
	template<class T>
	class ReIterator {
	public:
		T* Ptr;
		ReIterator() :Ptr(nullptr) {}
		ReIterator(T* rit) :Ptr(rit) {}
		ReIterator operator ++() {
			Ptr--;
			return *this;
		}
		ReIterator& operator ++(int) {
			--Ptr;
			return *this;
		}
		T& operator *() {
			return *Ptr;
		}
		T* operator ->() {
			return Ptr;
		}
		bool operator ==(ReIterator iterator) {
			return Ptr == iterator.Ptr;
		}
		bool operator !=(ReIterator iterator) {
			return Ptr != iterator.Ptr;
		}
		~ReIterator() {}
	};
}
