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

#include <Rcpp.h>
#include "binomial_heap.hpp"

RCPP_MODULE(binomial_heap_module) {
    Rcpp::class_< binomial_heap_ss >( "binomial_heap_ss" )
    .constructor()
    .method("peek",   &binomial_heap_ss::peek)
    .method("pop",    &binomial_heap_ss::pop)
    .method("size",   &binomial_heap_ss::size)
    .method("insert_many", &binomial_heap_ss::insert_many)
    .method("insert_vectorial", &binomial_heap_ss::insert_vectorial)
    .method("insert_many_vectorials", &binomial_heap_ss::insert_many_vectorials)
    .method("clear",  &binomial_heap_ss::clear);
    Rcpp::class_< binomial_heap_sd >( "binomial_heap_sd" )
        .constructor()
        .method("peek",   &binomial_heap_sd::peek)
        .method("pop",    &binomial_heap_sd::pop)
        .method("size",   &binomial_heap_sd::size)
        .method("insert_many", &binomial_heap_sd::insert_many)
        .method("insert_vectorial", &binomial_heap_sd::insert_vectorial)
        .method("insert_many_vectorials", &binomial_heap_sd::insert_many_vectorials)
        .method("clear",  &binomial_heap_sd::clear);
    Rcpp::class_< binomial_heap_si >( "binomial_heap_si" )
        .constructor()
        .method("peek",   &binomial_heap_si::peek)
        .method("pop",    &binomial_heap_si::pop)
        .method("size",   &binomial_heap_si::size)
        .method("insert_many", &binomial_heap_si::insert_many)
        .method("insert_vectorial", &binomial_heap_si::insert_vectorial)
        .method("insert_many_vectorials", &binomial_heap_si::insert_many_vectorials)
        .method("clear",  &binomial_heap_si::clear);

    Rcpp::class_< binomial_heap_dd >( "binomial_heap_dd" )
        .constructor()
        .method("peek",   &binomial_heap_dd::peek)
        .method("pop",    &binomial_heap_dd::pop)
        .method("size",   &binomial_heap_dd::size)
        .method("insert_many", &binomial_heap_dd::insert_many)
        .method("insert_vectorial", &binomial_heap_dd::insert_vectorial)
        .method("insert_many_vectorials", &binomial_heap_dd::insert_many_vectorials)
        .method("clear",  &binomial_heap_dd::clear);
    Rcpp::class_< binomial_heap_ds >( "binomial_heap_ds" )
        .constructor()
        .method("peek",   &binomial_heap_ds::peek)
        .method("pop",    &binomial_heap_ds::pop)
        .method("size",   &binomial_heap_ds::size)
        .method("insert_many", &binomial_heap_ds::insert_many)
        .method("insert_vectorial", &binomial_heap_ds::insert_vectorial)
        .method("insert_many_vectorials", &binomial_heap_ds::insert_many_vectorials)
        .method("clear",  &binomial_heap_ds::clear);
    Rcpp::class_< binomial_heap_di >( "binomial_heap_di" )
        .constructor()
        .method("peek",   &binomial_heap_di::peek)
        .method("pop",    &binomial_heap_di::pop)
        .method("size",   &binomial_heap_di::size)
        .method("insert_many", &binomial_heap_di::insert_many)
        .method("insert_vectorial", &binomial_heap_di::insert_vectorial)
        .method("insert_many_vectorials", &binomial_heap_di::insert_many_vectorials)
        .method("clear",  &binomial_heap_di::clear);
    Rcpp::class_< binomial_heap_id >( "binomial_heap_id" )
        .constructor()
        .method("peek",   &binomial_heap_id::peek)
        .method("pop",    &binomial_heap_id::pop)
        .method("size",   &binomial_heap_id::size)
        .method("insert_many", &binomial_heap_id::insert_many)
        .method("insert_vectorial", &binomial_heap_id::insert_vectorial)
        .method("insert_many_vectorials", &binomial_heap_id::insert_many_vectorials)
        .method("clear",  &binomial_heap_id::clear);
    Rcpp::class_< binomial_heap_is >( "binomial_heap_is" )
        .constructor()
        .method("peek",   &binomial_heap_is::peek)
        .method("pop",    &binomial_heap_is::pop)
        .method("size",   &binomial_heap_is::size)
        .method("insert_many", &binomial_heap_is::insert_many)
        .method("insert_vectorial", &binomial_heap_is::insert_vectorial)
        .method("insert_many_vectorials", &binomial_heap_is::insert_many_vectorials)
        .method("clear",  &binomial_heap_is::clear);
    Rcpp::class_< binomial_heap_ii >( "binomial_heap_ii" )
        .constructor()
        .method("peek",   &binomial_heap_ii::peek)
        .method("pop",    &binomial_heap_ii::pop)
        .method("size",   &binomial_heap_ii::size)
        .method("insert_many", &binomial_heap_ii::insert_many)
        .method("insert_vectorial", &binomial_heap_ii::insert_vectorial)
        .method("insert_many_vectorials", &binomial_heap_ii::insert_many_vectorials)
        .method("clear",  &binomial_heap_ii::clear);
}
