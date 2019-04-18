#load needed packages
library(xml2)
library(rvest)
library(lexRankr)

#url to scrape
monsanto_url = "https://www.theguardian.com/environment/2017/sep/28/monsanto-banned-from-european-parliament"


#read page html
page = xml2::read_html(monsanto_url)
#extract text from page html using selector
page_text = rvest::html_text(rvest::html_nodes(page, ".js-article__body p"))
#perform lexrank for top 3 sentences
top_3 = lexRankr::lexRank(page_text,
                          #only 1 article; repeat same docid for all of input vector
                          docId = rep(1, length(page_text)),
                          #return 3 sentences to mimick /u/autotldr's output
                          n = 3,
                          continuous = TRUE)

top_3$sentence