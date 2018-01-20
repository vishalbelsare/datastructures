/**
 * datastructures: Implementation of core datastructures for R.
 * <p>
 * Copyright (C) Simon Dirmeier
 * <p>
 * This file is part of datastructures.
 * <p>
 * datastructures is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * <p>
 * datastructures is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * <p>
 * You should have received a copy of the GNU General Public License
 * along with datastructures. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef DS_FIBHEAP
#define DS_FIBHEAP

#include <Rcpp.h>
#include <vector>
#include <string>
#include <map>
#include <boost/heap/fibonacci_heap.hpp>

#include <node.hpp>

template <typename T, typename U>
class fibonacci_heap
{
public:
    fibonacci_heap(): heap_()
    {}

    void insert_many(std::vector<T>& t, std::vector<U>& u)
    {
        if (t.size() != u.size())
        {
            Rcpp::stop("keys.size() != values.size()");
        }
        for (typename std::vector<T>::size_type i = 0; i < t.size(); ++i)
        {
            std::vector<U> x;
            x.push_back(u[i]);
            heap_.push(node<T, U>(t[i], x));
        }
    }

    void insert_vectorial(T t, std::vector<U>& u)
    {
        heap_.push(node<T, U>(t, u));
    }

    void insert_many_vectorials(std::vector<T>& t, Rcpp::NumericMatrix& u)
    {
        if (t.size() != u.nrow())
        {
            Rcpp::stop("keys.size() != values.size()");
        }
        for (unsigned int i = 0; i < t.size(); ++i)
        {
            std::vector<U> x(u.ncol());
            for (typename std::vector<U>::size_type j = 0; j < x.size(); ++j)
                x[j] = u(i, j);
            heap_.push(node<T, U>(t[i], x));
        }
    }

    void clear()
    {
        heap_.clear();
    }

    size_t size()
    {
        return heap_.size();
    }

    bool is_empty()
    {
        return heap_.empty();
    }

    Rcpp::List pop()
    {
        node<T, U> n = heap_.top();
        heap_.pop();

        std::map< T, std::vector<U> > heads;
        heads.insert(std::pair<T, std::vector<U> >(n.key_, n.value_));

        return Rcpp::wrap(heads);
    }

    Rcpp::List peek()
    {
        node<T, U> n = heap_.top();

        std::map< T, std::vector<U> > heads;
        heads.insert(std::pair<T, std::vector<U> >(n.key_, n.value_));

        return Rcpp::wrap(heads);
    }

private:
    boost::heap::fibonacci_heap< node<T, U >, boost::heap::compare<compare_node<T, U> > > heap_;
};

typedef fibonacci_heap<std::string, std::string> fibonacci_heap_ss;
typedef fibonacci_heap<std::string, int>         fibonacci_heap_si;
typedef fibonacci_heap<std::string, bool>        fibonacci_heap_sb;
typedef fibonacci_heap<std::string, double>      fibonacci_heap_sd;

typedef fibonacci_heap<double, std::string>  fibonacci_heap_ds;
typedef fibonacci_heap<double, int>          fibonacci_heap_di;
typedef fibonacci_heap<double, bool>         fibonacci_heap_db;
typedef fibonacci_heap<double, double>       fibonacci_heap_dd;

typedef fibonacci_heap<int, std::string>  fibonacci_heap_is;
typedef fibonacci_heap<int, int>          fibonacci_heap_ii;
typedef fibonacci_heap<int, bool>         fibonacci_heap_ib;
typedef fibonacci_heap<int, double>       fibonacci_heap_id;

#endif
