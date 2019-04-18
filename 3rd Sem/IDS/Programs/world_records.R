WR=WorldRecords
menMile <- WR[WR$Event=='Mens Mile',]
womenMile <-WR[WR$Event=='Womens Mile',]
plot(menMile$Year, menMile$Record, main="Mens + Mile World Records", xlab="Year", ylab="World Record Distance (m)", pch=16)
plot(womenMile$Year, womenMile$Record, main="Womens + Mile World Records", xlab="Year", ylab="World Record Distance (m)", pch=16)

library(SDSFoundations)
linFit(menMile$Year, menMile$Record, 1)
linFit(womenMile$Year,womenMile$Record, 2)
