\name{MakeInitSol}
\alias{MakeInitSol}
\title{
MakeInitSol
}
\description{
TrainSel optimization can use user-provided solutions as a starting point instead of relying on a random start. MakeInitSol() function organizes these initial solutions into the needed format, which can then be passed to the TrainSel() function through the InitSol argument. 
}
\usage{
MakeInitSol(int_solutions = NULL,
            dbl_solutions = NULL,
            settypes      = NULL,
            setsizes      = NULL)
}
\arguments{
  \item{int_solutions}{Integer vector or integer matrix. Pass NULL if there are no integer/ordered/boolean variables. If only a single initial solution is provided, it is an integer vector. Otherwise, it is a matrix in which each column is a different solution. The length of each solution is equal to the sum of the size of all elements in the "setsizes" argument that correspond to non-double optimization types ("UOS", "OS", "UOMS", "OMS" or "BOOL").}
  \item{dbl_solutions}{Integer vector or integer matrix. Pass NULL if there are no double variables. If only a single initial solution is provided, it is an integer vector. Otherwise, it is a matrix in which each column is a different solution. The length of each solution is equal to the sum of the size of all elements in the "setsizes" argument that correspond to "DBL" optimization type.}
  \item{settypes}{Character vector with the types of optimization to be performed. Six options are available:"BOOL" Boolean, "UOS" unordered sample, "UOMS" unordered multi-set, "OS" ordered set, "OMS" ordered multi-set, "DBL" numeric variables.}
  \item{setsizes}{A vector of integers. Length of the solutions of the optimization process}
}

\value{It returns an object of the "TrainSel_InitSol" class. It is structured as a list with two elements: "solnIntMat" and "solnDBLMat". The first is an integer matrix containing non-double initial solutions and the latter is a numeric matrix with the initial solutions for "DBL" optimization.}
\references{
Deniz Akdemir
}
\author{
Deniz Akdemir, Simon Rio, Julio Isidro Sanchez, Javier Fernandez-Gonzalez
}

\examples{
\dontrun{

################################################################################
#Simple example with single initial solution
################################################################################

#TrainSel parameters
control<-SetControlDefault(size="demo")

#as an example, use a very simple objective function
testStat <- function(soln) {
  return(sum(soln))
}

#type of optimization:
candidates <- 1:200 #elegible values that can appear in the solution
size <- 50 #number of values to select
type <- "UOS" #unordered optimization

#initial solution: we know that, for the defined objective function, the best
#solution is selecting the largest 50 integers in the candidate pool
initsols <- MakeInitSol(int_solutions = 151:200,
            dbl_solutions = NULL,
            settypes      = type,
            setsizes      = size) 

# optimization without initial solutions
sol<-TrainSel(Candidates=list(candidates),
               setsizes=c(size), 
               settypes=type, 
               Stat=testStat,
               control=control)
sol
sol$BestVal
sol$BestSol_int
plot(sol$maxvec) #it progresses from initial random solutions until convergence is achieved

#optimization with initial solutions
sol<-TrainSel(Candidates=list(candidates),
               InitSol = initsols, #initial solutions here!
               setsizes=size, 
               settypes=type, 
               Stat=testStat,
               control=control)
sol
sol$BestVal
sol$BestSol_int
plot(sol$maxvec) #optimal solution was found from the beginning



################################################################################
#Example with several initial solutions
################################################################################

#put several initial solutions using cbind()
initsols <- MakeInitSol(int_solutions = cbind(151:200, 141:190, 146:195),
            dbl_solutions = NULL,
            settypes      = type,
            setsizes      = size) 


#optimization with initial solutions
sol<-TrainSel(Candidates=list(candidates),
               InitSol = initsols, #initial solutions here!
               setsizes=size, 
               settypes=type, 
               Stat=testStat,
               control=control)
sol
sol$BestVal
sol$BestSol_int
plot(sol$maxvec) #optimal solution was found from the beginning





################################################################################
#Example with several types of data (integer and double):
################################################################################

rm(list=ls())
control<-SetControlDefault(size="demo")

#objective function
testStat <- function(soln_int,soln_dbl) {
  return(sum(soln_int)*prod(soln_dbl))
}

candidates <- list(1:200, #first pool of elegible integers
                   c(-0.999, 0.8), #elegible doubles are within this interval
                   1:100) #second poool of elegible integers
size <- c(50,3,25)
type <- c("UOS", #integer, order does not matter, replication disabled
          "DBL", #double
          "UOMS") #integer, order does not matter, replication enabled

initsols <- MakeInitSol(int_solutions = c(151:200,rep(100,size[3])),
                        dbl_solutions = c(-0.999,-0.999,0.8),
                        settypes      = c("UOS", "DBL", "UOMS"),
                        setsizes      = c(50,3,25)) 

sol<-TrainSel(Candidates=candidates,
               InitSol = initsols,
               setsizes=size, 
               settypes=type, 
               Stat=testStat,
               control=control)
               
sol
sol$BestVal
sol$BestSol_int
sol$BestSol_DBL
plot(sol$maxvec) #optimal solution was found from the beginning
}
}
