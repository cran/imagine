% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/imagine-main.R
\name{meanFilter}
\alias{meanFilter}
\alias{quantileFilter}
\alias{medianFilter}
\title{Make a 2D filter calculations from numeric matrix}
\usage{
meanFilter(X, radius, times = 1)

quantileFilter(X, radius, probs, times = 1, na = NA)

medianFilter(X, radius, times = 1, na = NA)
}
\arguments{
\item{X}{A \code{numeric matrix} object used for apply filters.}

\item{radius}{Size of squared kernel to apply median.}

\item{times}{How many times do you want to apply the filter?}

\item{probs}{\code{numeric} vector of probabilities with values in [0,1].}

\item{na}{\code{NA} as default. But, if specified, it must be an integer value higher
than the maximum of \code{X}.}
}
\value{
A \code{matrix} object with the same dimensions of \code{X}.

\code{quantileFilter} don't use a kernel but, for each cell, it returns
the position
of quantile 'probs' (value between 0 and 1).

\code{medianFilter} is a wrapper of \code{quantileFilter} with probs = 0.5.
}
\description{
This functions take a \code{matrix} object, and for each cell calculate
mean, median or certain quantile about a squared neighborhood by matrix of dimension
(\eqn{radius*radius}).
}
\details{
Functions use C++ algorithms. More details are shown in the vignette.
}
\examples{
# Generate example matrix
nRows <- 50
nCols <- 100

myMatrix <- matrix(runif(nRows*nCols, 0, 100), nrow = nRows, ncol = nCols)
radius <- 3

# Make convolution
myOutput1 <- meanFilter(X = myMatrix, radius = radius)
myOutput2 <- quantileFilter(X = myMatrix, radius = radius, probs = 0.1)
myOutput3 <- medianFilter(X = myMatrix, radius = radius)

# Plot results
par(mfrow = c(2, 2))
image(myMatrix, zlim = c(0, 100), title = "Original")
image(myOutput1, zlim = c(0, 100), title = "meanFilter")
image(myOutput2, zlim = c(0, 100), title = "quantileFilter")
image(myOutput3, zlim = c(0, 100), title = "medianFilter")
}
