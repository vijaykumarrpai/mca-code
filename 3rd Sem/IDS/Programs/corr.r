View(BikeData)
cor(BikeData$distance,BikeData$time)
#Error in cor(BikeData$distane, BikeData$time) : 'x' must be numeric
cor(BikeData$distance,BikeData$time)
plot(BikeData$distance,BikeData$time)
abline(lm(BikeData$time~BikeData$distance))
cor(BikeData$distance,BikeData$speed)
plot(BikeData$distance,BikeData$speed)
abline(lm(BikeData$speed~BikeData$distance))
cor(BikeData$time,BikeData$speed)
plot(BikeData$time,BikeData$speed)
abline(lm(BikeData$time~BikeData$speed))
k1=BikeData[,c(2,7:9)]
head(k1)
cor(k1)
abline(lm(y~x))

plot(BikeData$distance,BikeData$speed)
text(BikeData$distance~BikeData$speed,labels=BikeData$user_id,cex=0.4,offset=10)
plot(BikeData$distance,BikeData$speed)
text(BikeData$distance~BikeData$speed,labels=BikeData$user_id,cex=0.7,offset=10)
plot(BikeData$distance,BikeData$speed)
text(BikeData$distance~BikeData$speed,labels=BikeData$user_id,cex=0.9,offset=10)

result=corr(k1)

library(corrplot)

corrplot(result,method="circle",type="upper")
plot(BikeData$distance,BikeData$speed,col="red")
which(BikeData$speed==max(BikeData))
which(BikeData$speed==max(BikeData$speed))
s1=BikeData
s1=s1[-114,]
cor(BikeData$distance,BikeData$speed)
cor(s1$distance,s1$speed)
which(BikeData$speed==min(BikeData$speed))
table(BikeData$cyc_freq,BikeData$gender)
                         
                           
table(BikeData$cyc_freq)

table(BikeData$gender)

prop.table(table())

h
                         
prop.table(h)
                         
prop.table(h,1)