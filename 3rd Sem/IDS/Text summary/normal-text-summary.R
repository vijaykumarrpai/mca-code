library(readr)

#to read different types and format of text use readtext()
#read through https://cran.r-project.org/web/packages/readtext/vignettes/readtext_vignette.html


#reading a Simple text file
singleString <- paste(readLines("C:/Users/mozhi/Desktop/news.txt"), collapse="\n")
singleString

#library for text summarization
library(LSAfun)
genericSummary(singleString,k=2)


