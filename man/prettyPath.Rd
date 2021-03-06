% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utils.R
\name{prettyPath}
\alias{prettyPath}
\title{Convert an absolute file path to a relative one if possible}
\usage{
prettyPath(file)
}
\arguments{
\item{file}{file path to convert}
}
\value{
a file path relative to either the users home directory or the current 
 working directory if the file is located underneath either.
}
\description{
Convert an absolute file path to a relative one if possible
}

