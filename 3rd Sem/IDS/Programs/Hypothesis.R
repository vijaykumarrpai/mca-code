# when population SD is known - z test
# when population SD is not known - t test
# when  sample > 30 - z test
# when sample < 30 - t test
# p > alpha - reject
# p < alpha - accept

# 1. Ho and Ha
# 2. alpha or confidence interval
# alpha = 1 - C
# cv -> refer to statistics
# 3. visualize
# 4. Test statistics
  # z = xbar-mu/ (sigma/sqrt(n))
  # when z < cv -> then it is in rejection region
# 5) p = area of tail
  # p = 2 * z

# df = degree of freedom (t test means we have to put degree of freedom)

# proportion -> z test
# if it is skewed distribution then use chi and can also be done for standard deviation and variations also.
  
# two tail test - alpha, df
# 1 - alpha, df

mu = 10000
xbar = 9900
sigma = 120
n = 30
alpha = 0.05

cv = qnorm(1-alpha) #qnorm gives x value
cv = -cv
cv
z = (xbar-mu)/(sigma/sqrt(n))
z
#compute p value
p = pnorm
library(BSDA)
x = rnorm(mean = 9900, sd = 110, n = 30)

#two tail test
mu = 15.4
xbar = 14.6
sigma = 2.5
n = 35
alpha = 0.05
sv = qnorm(1-alpha/2) #qnorm gives z value
cv = c(-cv, cv)
cv

z = (xbar-mu)/(sigma/sqrt(n))
z
#compare cv and z, z < cv - accept

#compute p value
p = 2-pnorm(z)
p

# F-distribution
#find the 95th percentile of the F distribution with (5,2) degrees of freedom.
cv = qf(.95, df1 = 5, df2 = 2)
pf(2.448, 3,14)

# F statistic for two population variances
# Taken values
alpha = 0.01
n1 = 6
n2 = 6
pop1.var = 5
pop2.var = 4.8

df1 = n1 - 1
df2 = n2 - 1

cv = qf(1-alpha, df1, df2)
cv
F = pop1.var/pop2.var

#anova in R - compare 3 or more pop.mean. Anova is analysis of variants
# primary principle of anova is it stacks according to factor variable
Group1 = c(2,3,7,2,6)
Group2 = c(10,8,7,5,10)
Group3 = c(10,13,14,13,15)

combined_groups = data.frame(cbind(Group1, Group2, Group3))
stacked_groups = stack(combined_groups)
stacked_groups
anova_results = aov(values~ind, data=stacked_groups)
summary(anova_results)