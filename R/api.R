install.packages("httr")
install.packages("jsonlite")

library(httr)
library(jsonlite)

url <- "https://imdb236.p.rapidapi.com/search"
api_key <- "79f48a26dfmsh1eb75219591c1ccp1bd30djsn5501085ceeff"

response <- GET(url, add_headers(
  "X-RapidAPI-Key" = "79f48a26dfmsh1eb75219591c1ccp1bd30djsn5501085ceeff",
  "X-RapidAPI-Host" = "imdb236.p.rapidapi.com"
), query = list(query = "Inception"))

# No warning now
json_text <- content(response, "text", encoding = "UTF-8")
data <- fromJSON(json_text)
print(data)



library(httr)
library(jsonlite)

url <- "https://imdb236.p.rapidapi.com/search"
api_key <- "79f48a26dfmsh1eb75219591c1ccp1bd30djsn5501085ceeff"

response <- GET(url, query = list(api_key = api_key))
data <- fromJSON(content(response, "text"))
data
