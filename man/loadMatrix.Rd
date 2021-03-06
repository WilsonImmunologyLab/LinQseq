% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ImportData.R
\name{loadMatrix}
\alias{loadMatrix}
\title{loadMatrix}
\usage{
loadMatrix(file = NULL, header = TRUE, row.names = 1, sep = ",")
}
\arguments{
\item{file}{hash tag csv file}

\item{header}{the file has a header or not}

\item{row.names}{column of row names}

\item{sep}{the field separator character.}
}
\description{
load expression matrix from csv file. works for HTO, ADT and sgRNA data
}
