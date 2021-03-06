% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ds_deque_stack.R
\name{stack}
\alias{stack}
\title{Create a new \code{stack}}
\usage{
stack(...)
}
\arguments{
\item{...}{parameters that are only needed if \code{utils::stack} should be
called}
}
\value{
returns a new \code{stack} object
}
\description{
Instantiates a new \code{\linkS4class{stack}} object,
 i.e. a list implementation with LIFO principle.
}
\examples{
 # creates a new stack<SEXP>
 s <- stack()

}
