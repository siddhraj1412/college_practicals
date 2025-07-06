data("flights", package = "nycflights13")
plot(air_time ~ distance, data = flights,
     pch = ".", 
     main = "Plot - Flight Speed",
     ylab = "Air Time",
     xlab = "Distance")
