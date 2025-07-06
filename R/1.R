library(readr)
d1<-read.csv("D:/siddh/coding/R/data/student.csv")
d1

d2<-read.csv("D:/siddh/coding/R/data/student.csv",colClasses =c("character","factor","integer","character"))
d2

d3<-read.csv("D:/siddh/coding/R/data/student.csv",col.names =c("Name","Gender","Age","Subject"))
d3

#using readr package to import file faster
library(readr)
s1<-read_csv("D:/siddh/coding/R/data/student.csv")
cols(Name=col_character(),
     Gender=col_character(),
     Age=col_double(),
     Major=col_character())
s1

s2<-read_csv("D:/siddh/coding/R/data/student.csv",col_types = "ccdc")
s2


s3<-read_csv("D:/siddh/coding/R/data/student.csv",col_types = "ccdc",n_max=2)
s3

library(readxl)
d1<-read_excel("D:/siddh/coding/R/data/price.xlsx")
d1

library(openxlsx)
p1<-read.xlsx("D:/siddh/coding/R/data/price.xlsx",detectDates=TRUE)
p1

openxlsx::write.xlsx(p1,"D:/siddh/coding/R/data/price1.xlsx")

head(iris)
str(iris)

head(mtcars)
str(mtcars)
