library(caret)
library(NeuralNetTools)
library(neuralnet)
library(rpart.plot)

#reading dataset
mydata=read.csv("C:/Users/mozhi/Desktop/ML 2018/Assessment/T2/cereals.csv",header=TRUE)
str(mydata)
#mydata$rating=as.factor(mydata$rating)
summary(mydata)
is.na(mydata)

#creating Data Partitions
set.seed(17)
index=createDataPartition(mydata$rating, p=0.75, list = FALSE)
train=mydata[index,]
test=mydata[-index,]



trctrl <- trainControl(method = "repeatedcv", 
                       number = 10, 
                       repeats = 3)
set.seed(1)
model=train(rating ~., data = mydata, method = "svmLinear",
            trControl=trctrl,
            preProcess = c("center", "scale"),
            tuneLength = 10)

NNModel <- train(rating~.,data=train,method = "nnet",
                 trControl= trctrl,
                 preProcess=c("scale","center"),
                 tuneLength=10,
                 tuneGrid=expand.grid(.size=seq(1,10,2),.decay=c(0.5,0.1)),
                 maxit=50
)
#Viewing the Model
NNModel$finalModel
summary(NNModel)
plotnet(NNModel,circle_cex=4,cex=0.6,pos_col="blue",neg_col="green")


#Applying the model
NNPredictions <-predict(NNModel, test)
NNPredictions

#Model building using Decision Tree
set.seed(1)
DTModel <- train(
  rating ~., data = train, method = "rpart",
  trControl = trainControl("cv", number = 10),
  tuneLength = 10
)
DTModel$finalModel
plot(DTModel$finalModel)
text(DTModel$finalModel, digits = 2)

#Applying the model
DTPredictions <-predict(DTModel, test)
DTPredictions

#Performance Measure
RMSE.NN = RMSE(test$rating,NNPredictions)
RMSE.NN

RMSE.DT=RMSE(test$rating,DTPredictions)
RMSE.DT
data.frame(NN=c(RMSE.NN),DT=c(RMSE.DT))

#problem 2
library(quanteda)
myd=read.csv("C:/Users/mozhi/Desktop/ML 2018/Assessment/sports.csv",header=TRUE,stringsAsFactors = F)
str(myd)

set.seed(1)  
myd <- myd[sample(nrow(myd)),]

mycorpus <- corpus(myd$text) 
docvars(mycorpus) <- myd$class
mydfm <- dfm(myd$text, 
                 tolower = TRUE, 
                 remove_punct = TRUE, 
                 remove_twitter = TRUE,
                 remove_numbers = TRUE,
                 remove=stopwords("SMART"))
mydfm

nbmodel <- textmodel_nb(mydfm, myd$class)  
nbpredict <- predict(nbmodel, mydfm)

table(nbpredict$nb.predicted, myd$class)
