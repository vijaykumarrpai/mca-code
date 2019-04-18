#Hypothesis Testing

#one sample mean with pop.sd known - z test

#Question1: Suppose the manufacturer claims that the mean lifetime of a light bulb is more than 10,000 hours. 
#In a sample of 30 light bulbs, it was found that they only last 9,900 hours on average. 
#Assume the population standard deviation is 120 hours. At .05 significance level, can we reject the claim by the manufacturer?

#Answer
#H0:mu>=10000 Ha:mu<10000 So, lower tail z test
mu=10000
xbar=9900
sigma=120
n=30
alpha=0.05

#finding the critical value
cv=qnorm(1-alpha) #qnorm gives z value
cv=-cv
cv

#finding the test statistic for z
z=(xbar-mu)/(sigma/sqrt(n))
z
#compare cv and Z, z<cv then reject

#the result can be confirmed with p value or z value
#compute p value
p=pnorm(z)
p



#Question2: Suppose the food label on a cookie bag states that there is at most 2 grams of saturated fat in a single cookie. 
#In a sample of 35 cookies, it is found that the mean amount of saturated fat per cookie is 2.1 grams. 
#Assume that the population standard deviation is 0.25 grams. At .05 significance level, can we reject the claim on food label?

#Ho:mu<=2 ha:mu>2. So uppertail z test
mu=2
xbar=2.1
sigma=0.25
n=35
alpha=0.05
cv=qnorm(1-alpha) #qnorm gives z value
cv
z=(xbar-mu)/(sigma/sqrt(n))
z
#compare cv and Z, z>cv then reject

#compute p value
p=pnorm(z,lower.tail=FALSE)
p

#Question3: Suppose the mean weight of King Penguins found in an Antarctic colony last year was 15.4 kg. 
#In a sample of 35 penguins same time this year in the same colony, the mean penguin weight is 14.6 kg. 
#Assume the population standard deviation is 2.5 kg. At .05 significance level, can we reject the null hypothesis that the mean penguin weight does not differ from last year?
#H0:mu=15.4 Ha:mu<>15.4
mu=15.4
xbar=14.6
sigma=2.5
n=35
alpha=0.05
cv=qnorm(1-alpha/2) #qnorm gives z value
cv=c(-cv,cv)
cv

z=(xbar-mu)/(sigma/sqrt(n))
z
#compare cv and z, z<cv - accept

#compute p value
p=2*pnorm(z)
p

#one sample mean with unknown sigma - t test

#Question 4: Suppose the food label on a cookie bag states that there is at most 2 grams of saturated fat in a single cookie. 
#In a sample of 35 cookies, it is found that the mean amount of saturated fat per cookie is 2.1 grams. 
#Assume that the sample standard deviation is 0.3 gram. 
#At .05 significance level, can we reject the claim on food label?
  
#Ho:mu<=2 Ha:mu>2 - upper t test
mu=2
xbar=2.1
s=0.3
n=35
alpha=0.05
#compute critical value from t table
cv=qt(1-alpha,df=n)
cv
#compute t test statistic
t=(xbar-mu)/(s/sqrt(n))
t

#compute p value
p=pt(t,df=n-1,lower.tail=FALSE)
p
#reject Ho.

#one sample proportion z test
#Suppose 60% of citizens voted in last election. 
#85 out of 148 people in a telephone survey said that they voted in current election. 
#At 0.5 significance level, can we reject the null hypothesis that the proportion of voters in the population is above 60% this year?

#Ho:p>=0.6 Ha:p<0.6 - lower tail z proportion test
p=0.6
q=1-p
n=148
x=85
phat=x/n

alpha=0.05
cv=qnorm(1-alpha)
-cv

z=(phat-p)/sqrt((p*q)/n)
z

# accept Ho.
p=pnorm(z)
p

#one sample chisquare test
#Question 5:A college professor claims that the standard deviation for students taking a statistics test is less than 30.  
#10 tests are randomly selected and the standard deviation is found to be 28.8.  
#Test this professor's claim at the     ??? = 0.01 level.

#Ho:sigma<=30 Ha:sigma>30 - upper tail chi test

n=10
sigma=30
s=28.8
alpha=0.01

#compute critical value
cv=qchisq(alpha, df=9)
cv

#compute chi test statistic
chi_test=((n-1)*s^2)/(sigma^2)
chi_test

#chi_test is > cv so accept Ho.
p=pchisq(chi_test,df=9)
p
#p>alpha, so accept

#For two tail chi test
alpha=0.01
df=25
cv_left=qchisq(alpha/2,df) # Left tail
cv_right=qchisq(1-alpha/2,df)#right tail

#For lower tail chi test
alpha=0.01
df=25
cv=qchisq(1-alpha,df)
cv

#Test on variance - chi test test
#A local balloon company claims that the variance for the time its helium balloons will stay afloat is 5 hours.  A disgruntled customer wants to test this claim.  She randomly selects 23 customers and finds that the variance of the sample is 4.5 seconds.  At ??? = 0.05, does she have enough evidence to reject the company's claim?
#H0:varsq = 5 (Claim) Ha; varsq<>5 - two tail var test with df=22 alpha=0.05
n=23
df=n-1
pop.var=5
sam.var=4.5
alpha=0.05

#critical value
cv_left=qchisq(alpha/2,df) # Left tail
cv_right=qchisq(1-alpha/2,df)#right tail
cv=c(cv_left,cv_right)
cv
#test statistic
chi_test=(n-1)*pop.var/sam.var
chi_test
#compute p value
p=pchisq(chi_test,df)
p

#F-Distribution
#Find the 95th percentile of the F distribution with (5, 2) degrees of freedom.
cv=qf(.95, df1=5, df2=2) 
pf(2.448,3,14)

#F statistic for two population variances
#Taken Values
alpha=0.01
n1=6
n2=6
pop1.var=5
pop2.var=4.8

df1=n1-1
df2=n2-1

cv=qf(1-alpha,df1,df2)
cv
F=pop1.var/pop2.var
F

#anova in R - compare 3 or more pop.means
#Ho:mu1=mu2=mu3 Ha: at least one mean differs from others

Group1=c(2,3,7,2,6)
Group2=c(10,8,7,5,10)
Group3=c(10,13,14,13,15)

combined_groups=data.frame(cbind(Group1,Group2,Group3))
stacked_groups=stack(combined_groups)
stacked_groups

anova_results=aov(values~ind,data=stacked_groups)

summary(anova_results)


