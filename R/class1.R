library(nycflights13)


data("flights", package = "nycflights13")


carriers <- table(flights$carrier)


carriers_sort <- sort(carriers, decreasing = TRUE)

barplot(head(carriers_sort, 8),
        ylim = c(0, max(carriers_sort) * 1.1),
        xlab = "Carrier", ylab = "Flights",
        main = "Top 8 Carriers Ordered by Number of Flights")


#top_8 <- head(carriers_sort, 8)
#pie(top_8, 
#    labels = names(top_8), 
#    main = "Top 8 Carriers by Flight Count", 
#    col = rainbow(8), 
#    clockwise = TRUE)

grades <- c(A = 2, B = 10, C = 12, D = 8)
pie(grades, main = "Grades", radius = 1)

random_norm <- rnorm(10000)
hist(random_norm)

hist(random_norm, probability = TRUE, col = "lightgray", main="Histogram 
Normally Distributed Data")
curve(dnorm, add = TRUE, lwd = 2, col ="blue")

ft_speed <- flights$distance / flights$air_time
hist(ft_speed, xlab="Flight Speed", main = "Flight speed - Histogram")

#PART 2 #

plot(density(ft_speed, from = 2, to = 10, na.rm = TRUE),
     main ="Empirical distribution of flight speed", xlab="Flight Speed")
abline(v = mean(ft_speed, na.rm = TRUE),
       col = "blue", lty = 2)

hist(ft_speed, 
     probability = TRUE, ylim = c(0, 0.5), 
     main ="Histogram & distribution of flight speed",
     xlab = "Flight Speed",
     border ="gray", col = "lightgray")
lines(density(ft_speed, from = 2, na.rm = TRUE),
      col ="darkgray", lwd = 2)
abline(v = mean(ft_speed, na.rm = TRUE),
       col ="blue", lty =2)


#boxplot
x<-rnorm(1000)
boxplot(x)

boxplot(distance / air_time ~ carrier, data =flights,
        main = "Box plot - flight speed by carrier")

#linear model
x<-rnorm(100)
f<-function(x)3+2*x
y<-f(x)+0.5*rnorm(100)

linear_model <- lm(y ~ x)
linear_model

coef(linear_model)

linear_model$coefficients

summary(linear_model)
 #residual error :- we could 
summary(linear_model)
lm(formula = y ~ x)
plot(x, y, main = "A simple linear regression")
abline(coef(linear_model), col = "blue")

predict(linear_model,list(x=c(-1,0.5)),se.fit = TRUE)
