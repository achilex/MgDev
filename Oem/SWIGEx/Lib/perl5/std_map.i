//
// SWIG typemaps for std::map
// Luigi Ballabio
// Jan. 2003
//
// Common implementation

%include std_common.i
%include exception.i

%exception std::map::get {
    try {
        $action
    } catch (std::out_of_range& e) {
        SWIG_exception(SWIG_IndexError,const_cast<char*>(e.what()));
    }
}

%exception std::map::del  {
    try {
        $action
    } catch (std::out_of_range& e) {
        SWIG_exception(SWIG_IndexError,const_cast<char*>(e.what()));
    }
}

// ------------------------------------------------------------------------
// std::map
// ------------------------------------------------------------------------

%{
#include <map>
#include <algorithm>
#include <stdexcept>
%}

// exported class

namespace std {

    template<class K, class T> class map {
        // add typemaps here
      public:
        map();
        map(const map<K,T> &);
        
        unsigned int size() const;
        bool empty() const;
        void clear();
        %extend {
            T& get(const K& key) {
                std::map<K,T >::iterator i = self->find(key);
                if (i != self->end())
                    return i->second;
                else
                    throw std::out_of_range("key not found");
            }
            void set(const K& key, const T& x) {
                (*self)[key] = x;
            }
            void del(const K& key) {
                std::map<K,T >::iterator i = self->find(key);
                if (i != self->end())
                    self->erase(i);
                else
                    throw std::out_of_range("key not found");
            }
            bool has_key(const K& key) {
                std::map<K,T >::iterator i = self->find(key);
                return i != self->end();
            }
        }
    };


    // specializations for built-ins

    %define specialize_std_map_on_key(K,CHECK,CONVERT_FROM,CONVERT_TO)

    template<class T> class map<K,T> {
        // add typemaps here
      public:
        map();
        map(const map<K,T> &);
        
        unsigned int size() const;
        bool empty() const;
        void clear();
        %extend {
            T& get(K key) {
                std::map<K,T >::iterator i = self->find(key);
                if (i != self->end())
                    return i->second;
                else
                    throw std::out_of_range("key not found");
            }
            void set(K key, const T& x) {
                (*self)[key] = x;
            }
            void del(K key) {
                std::map<K,T >::iterator i = self->find(key);
                if (i != self->end())
                    self->erase(i);
                else
                    throw std::out_of_range("key not found");
            }
            bool has_key(K key) {
                std::map<K,T >::iterator i = self->find(key);
                return i != self->end();
            }
        }
    };
    %enddef

    %define specialize_std_map_on_value(T,CHECK,CONVERT_FROM,CONVERT_TO)
    template<class K> class map<K,T> {
        // add typemaps here
      public:
        map();
        map(const map<K,T> &);
        
        unsigned int size() const;
        bool empty() const;
        void clear();
        %extend {
            T get(const K& key) {
                std::map<K,T >::iterator i = self->find(key);
                if (i != self->end())
                    return i->second;
                else
                    throw std::out_of_range("key not found");
            }
            void set(const K& key, T x) {
                (*self)[key] = x;
            }
            void del(const K& key) {
                std::map<K,T >::iterator i = self->find(key);
                if (i != self->end())
                    self->erase(i);
                else
                    throw std::out_of_range("key not found");
            }
            bool has_key(const K& key) {
                std::map<K,T >::iterator i = self->find(key);
                return i != self->end();
            }
        }
    };
    %enddef

    %define specialize_std_map_on_both(K,CHECK_K,CONVERT_K_FROM,CONVERT_K_TO,
                                       T,CHECK_T,CONVERT_T_FROM,CONVERT_T_TO)
    template<> class map<K,T> {
        // add typemaps here
      public:
        map();
        map(const map<K,T> &);
        
        unsigned int size() const;
        bool empty() const;
        void clear();
        %extend {
            T get(K key) {
                std::map<K,T >::iterator i = self->find(key);
                if (i != self->end())
                    return i->second;
                else
                    throw std::out_of_range("key not found");
            }
            void set(K key, T x) {
                (*self)[key] = x;
            }
            void del(K key) {
                std::map<K,T >::iterator i = self->find(key);
                if (i != self->end())
                    self->erase(i);
                else
                    throw std::out_of_range("key not found");
            }
            bool has_key(K key) {
                std::map<K,T >::iterator i = self->find(key);
                return i != self->end();
            }
        }
    };
    %enddef

    // add specializations here

}
