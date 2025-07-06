data("mtcars")
head(mtcars)

# Bar Chart 
barplot(table(mtcars$cyl), main="Car Count by Cylinders", col="lightblue", xlab="Cylinders", ylab="Count")
#conclusion:-8 cylinders(max) is used by 14 cars

# Histogram 
hist(mtcars$mpg, main="Histogram of MPG", col="blue", xlab="Miles Per Gallon",breaks=10)
#conclusion :- The miles per gallon (MPG) values are mostly concentrated between 15 and 25 MPG, 
#with a few cars exceeding 30 MPG.

# Pie Chart 
cylinders_count <- table(mtcars$cyl)
pie(cylinders_count, labels=paste(names(cylinders_count), "Cyl"), col=rainbow(length(cylinders_count)), main="Car Proportion by Cylinders")
#conclusion:-4-cylinder and 8-cylinder cars form a large proportion of the dataset.

# Boxplot - MPG by Cylinder Count
boxplot(mpg ~ cyl, data=mtcars, main="MPG by Cylinder Count", col=c("red", "green", "blue"), xlab="Cylinders", ylab="MPG")
#conclusion:-4-cylinder cars have the highest median MPG,
# 8 cylinder cars have the lowest MPG,6-cylinder cars are in between, showing moderate fuel efficiency.

# Scatter Plot - Relationship between MPG and Horsepower
plot(mtcars$hp, mtcars$mpg,main="MPG vs Horsepower", xlab="Horsepower", ylab="MPG", col=c("blue","red"), pch=c(1,2))
#conclusion :- As horsepower increases, fuel efficiency (MPG) decreases, suggesting that more powerful cars consume more fuel.

# Line Plot - Trend of MPG (sorted)
sorted_mtcars <- mtcars[order(mtcars$mpg), ]
plot(sorted_mtcars$mpg, type="o", col="purple", xlab="Index", ylab="MPG", main="MPG Trend")
#conclusion :- The MPG values increase gradually, showing a steady range of fuel efficiency.

# Density Plot - MPG Distribution
plot(density(mtcars$mpg), main="Density Plot of MPG", col="red", lwd=2)
#conclusion :- The highest density of MPG values is around 15-25 MPG, aligning with the histogram.


