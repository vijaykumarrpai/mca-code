library(xml2)
library(rvest)
library(lexRankr)
abstract=lexRank(c("This is a test.","Tests are fun.",
          "Do you think the exam will be hard?","Is an exam the same as a test?",
          "How many questions are going to be on the exam?"),n = 1, sentencesAsDocs = FALSE)


abstract$sentence

singleString <- readLines("C:/Users/mozhi/Desktop/news.txt")
abs=lexRank(singleString)
abs$sentence
