#Relation is the relationship between two set of numbers
#It can be represented as ordered pairs
#When we do correlation, we find the relationship between two set of numbers(ie variables)
#The correlation coefficient explains about the relation.
#It gives an idea to expand it as functions

#Functions
# A function is a set of ordered pairs in which the first coordinate, usually x, matches with exactly one second coordinate, y.
# the y coordinate represents the dependent variable
# A function can be expressed as an equation -> f(x) = y
# f(x) - f is the name of the function and x is the name of the independent variable.

#Mathematical modeling
# Mathematical modeling involves creating a set of mathematical equations that describes a situation, solving those equations, and using them to understand the real life problem
# Model can also be used to predict what a system will do for different values of the independent variable. Lastly, a model can be used to estimate quantities that are difficult to evaluate exactly
# The goal is not to produce an exact copy of the "real object" but rather to give a representation of some aspect of the real thing.
# Slope - the coefficient of x
# Rate of change - f(b) - f(a) / (b-a)
hotel = linear_tips
cor(hotel$meal_amt, hotel$tips)
plot(hotel$meal_amt, hotel$tips)
model = lm(tips$meal_amt, data=hotel)
model
summary(model)
new = c(20,25)
newx = as.data.frame(meal_amt=new)
newx
newy = predict(model, newx)
newy
sample.read.csv(file.choose(), header=T)
head(sample)
library(SDSFoundations)
linFit(sample$x, sample$y)
linFitPred(sample$x, sample$y, 1)
linFitPred(sample$x, sample$y, 2)
mean(sample$x)
mean(sample$y)

# Exponential model
expFit(sample$x, sample$y)
# R-squared = 1 - (Explained variation) / Total variation
expFitPred(sample$x, sample$y, 1)
#determining the target is known as Extrapolation - given y we need to find x, this is known as extrapolation
# Logistic growth model will be best explainable when the data has reached the upper limit and there after the growth is consistent, logistic growth model can be used
logisticFit(sample$x, sample$y)
logisticFit(sample$x, sample$y, 1)
logisticFit(sample$x, sample$y, 2)
tripleFit(sample$x, sample$y)
