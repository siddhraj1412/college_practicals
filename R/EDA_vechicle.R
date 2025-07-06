DataSet<-read.csv('C:/Users/siddh/OneDrive/Documents/R/dataset/CAR DETAILS FROM CAR DEKHO.csv',header=TRUE)
head(DataSet,5)
View(DataSet)

library(tidyverse)

#getting the dimension of the dataset
dim(DataSet)

#structure of dataset
str(DataSet)

#checking nulls in dataset
colSums(is.na(DataSet))

#summary of the dataset:-bassic statistical things
summary(DataSet)

#operations 
#subsetting year
year=DataSet$year
head(year)

#typeof year
typeof(year)

#measure of a central tendency 
median(year)
mode(year)
#persentile?
quantile(year)

tra=DataSet$transmission
mode(tra)
#subsetting numerical column
num_cols=DataSet[,c(2,3,4)]
head(num_cols)

#calculate mean of each column
#1.mean
print("mean")
print(apply(num_cols,2,mean))

#2.meadian
print("meadian")
print(apply(num_cols,2,median))

#3.mode
print("mode")
print(apply(num_cols,2,mode))

#4.quantile
print("quantile")
print(apply(num_cols,2,quantile))

#unique values of the year
year_unq=unique(year)
print(year_unq)

#value counts of the year
yr_freq=table(year)
yr_freq

owner=DataSet$owner
head(owner)
o_u=unique(owner)
o_u
o_f=table(owner)
o_f

s=DataSet$seller_type

barplot(o_f,xlab='owners',ylab='count',main="ownership")
legend("topleft",as.character(sort(o_u)))

#selecting cols
selected_cols<-DataSet[,c(1,5,6,7,8)]

#finding uniques
unq_vals<-sapply(selected_cols,function(col) unique(col))
unq_vals

#finding values count
value_counts<-sapply(selected_cols,function(col) table(col))
value_counts
sorted_val_cnts<-lapply(value_counts,function(v_c) sort(head(v_c),decreasing = TRUE))
sorted_val_cnts

library(dplyr)
yearly_avg<-DataSet%>%
  group_by(year)%>%  
  summarize(avg=mean(selling_price))  
yearly_avg

#colnames
labels<-colnames(selected_cols)

#barplot
for(i in 1:length(sorted_val_cnts))
{
  barplot(sorted_val_cnts[[i]],main=labels[i],xlab='categorical',ylab='count')
}
#trends of average km driven in each year