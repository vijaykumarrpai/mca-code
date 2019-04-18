library(xml2)
library(rvest)
#install the chromeextension selectorGadget in the chrome
#click to select the components to fill the xpath value
con=read_html("https://en.wikipedia.org/wiki/Demographic_statistics")
my_content=html_nodes(con,xpath="//p[(((count(preceding-sibling::*) + 1) = 12) and parent::*)]")
myd=html_text(my_content)
myd
  