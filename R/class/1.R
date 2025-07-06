d1<-read.csv("D:/siddh/coding/R/data/student.csv",col.names =c("Name","Gender","Age","Subject"))
d1

#The rnorm() function in R is used to generate random numbers 
#from a normal distribution
x<-rnorm(200)
y<-2*x+rnorm(200)
plot(x,y)

plot(x,y,main="correlated random numbers",
     xlabs="x",ylab="2x+noise",
     xlim=c(-3,3),ylim=c(-6,6))

plot(0:25,0:25,pch=0:25,
     xlim=c(-1,26),ylim=c(-1,26),
     main="point style(pych)")
text(0:25+1,0:25-1,0:25)

x<-rnorm(200)
y<-2*x+rnorm(200)
plot(x,y,pch=ifelse(x*y>1,17,1),main="scatter plot with condition pch")

x<-rnorm(75)
y<-2*x+rnorm(75)
z<-sqrt(1+x^2)+rnorm(75)
plot(x,y,pch=1,
     xlim=range(x),ylim=range(y,z),
     xlab="x",ylab="value",)
points(x,z,pch=17)
title("scatter plot with two datasets")

x<-rnorm(75)
y<-2*x+rnorm(75)
plot(x,y,pch=15,col="blue",main="blue scatter plot")

#customize point colors
plot(x,y,pch=16,col=ifelse(y>=mean(y),"red","green"),
     main="scatter plot-condition colors")
