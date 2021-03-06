% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/contingency.R
\name{contingencyTable}
\alias{contingencyTable}
\title{Calculate a contigency table of module overlap between datasets}
\usage{
contingencyTable(modAssignments, mods, tiNodelist)
}
\arguments{
\item{modAssignments}{a list where the first element is the 
'moduleAssignments' vector in the discovery dataset, and the second element
is the 'moduleAssignments vector in the test dataset.}

\item{mods}{the 'modules' vector for the discovery dataset.}

\item{tiNodelist}{a vector of node IDs in the test dataset.}
}
\value{
a list containing a contigency table,
}
\description{
Calculate a contigency table of module overlap between datasets
}

