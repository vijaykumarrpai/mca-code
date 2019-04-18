head(BikeData, 10)
tail(BikeData, 10)
summary(BikeData$distance)
table(BikeData$gender)
#http://www.stat.columbia.edu/~tzheng/files/Rcolor.pdf
#functions for colors - rainbow(n), hear.colors(n), terrain.colors(n), topo.colors(n) and cm.colors(n)
#bg - plot background color
#lty - line type eg: dot, dash, solid, blank, dashed, dotted, dotdash, longdash, twodash, number 0-6
#lwd - line width - default 1, 2 is twice as wide
#col - color
#cex - text size/ symbol size inside plot
#xlab, ylab - axes labels
#main - title
#pch - plotting symbol
#xlim, ylim - axes scale(vector of 2 elements, start and end)

barplot(BikeData$distance)
barplot(BikeData$distance, col = c("black", "red"), xlab = "distance", ylab = "distance measure", main = "distance travelled")
hist(BikeData$speed, col = c("red", "yellow", "green", "violet"), xlab = "speed", ylab = "speed measured", main = "speed of riders")
barplot(table(BikeData$student))
y = table(BikeData$student)
barplot(y)
pie(y)
barplot(y, names.arg = c("Not Student", "Student"))
pie(table(BikeData$cyc_freq), col = c("red", "yellow", "green", "violet"))
pie(table(BikeData$cyc_freq), col = c("red", "yellow", "green", "violet"), clockwise = TRUE)
table(BikeData$cyc_freq)
y = aggregate(distance~cyc_freq, BikeData, mean)
barplot(table(y), col = c("red", "yellow", "green", "blue"))

x = c(rep(1,3),4,5,rep(6,7))
v = c(9,13,21,8,36,22,12,41,31,33,19)
x
hist(x)
hist(x, breaks = 3)
hist(x, breaks = 3, xlim = c(0,40))

#plot(v, type, col, xlab, ylab)
plot(x, type = "o", col = c("black", "red"), xlab = "frequency", ylab = "type")
v = c(7,12,28,3,41)
t = c(14,7,6,19,3)
y = c(1,4,5,4,6,6,6,6)
lines(y, type = "o")
plot(x, type = "o")
colors = c("green", "orange", "brown")
months = c("Mar", "Apr", "May", "Jun", "Jul")
regions = c("East","West","North")
values = matrix(c(2,9,3,11,9,4,8,7,3,12,5,2,8,10,11), nrow = 3, ncol = 5, byrow = TRUE)
barplot(values, main = "total revenue", names.arg = months, xlab = "month", ylab = "revenue", col = colors)
legend("topleft", regions, cex = 1.3, fill = colors)
boxplot(BikeData$distance, data = BikeData, xlab = "distance", main = "Sales Data")
boxplot(x)
boxplot(values)
par(mfrow = c(3,2))
layout(matrix(c(1,2)), heights = c(2,1))
layout(1)
par(mfrow=c(1,1))
png(file = "mychart.jpg")
x = data.frame(foo = 1:4, bar = c(F, T, F, F))
x$foo[x$bar==F]
x = list(id = 1:4, bar = 0.6)
x
x[1]
x <- matrix(1:6, 2, 3)
x[1, ]
x <- c("a", "b", "c", "c", "d", "a")
x[c(1, 3, 4)]
