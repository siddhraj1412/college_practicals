# Load the dataset
df <- read.csv("D:/siddh/coding/R/data/acs2017_census_tract_data.csv")

head(df)

install.packages("ggplot2")
install.packages("dplyr")
install.packages("nycflights13")

library(ggplot2)
library(dplyr)
library(nycflights13)

# Scatter Plot
ggplot(data = flights, aes(x = dep_delay, y = arr_delay)) +
  geom_point() +
  labs(title = "Scatter Plot of Departure Delay vs Arrival Delay",
       x = "Departure Delay (minutes)",
       y = "Arrival Delay (minutes)")

# Bar Chart
ggplot(data = flights, aes(x = carrier)) +
  geom_bar() +
  labs(title = "Number of Flights per Airline",
       x = "Airline Carrier",
       y = "Number of Flights")

# Pie Chart
flights_summary <- flights %>% 
  group_by(carrier) %>% 
  summarise(count = n())

ggplot(flights_summary, aes(x = "", y = count, fill = carrier)) +
  geom_bar(stat = "identity", width = 1) +
  coord_polar("y") +
  labs(title = "Proportion of Flights per Airline")

# Histogram
ggplot(data = flights, aes(x = dep_delay)) +
  geom_histogram(binwidth = 10, fill = "blue", color = "black") +
  labs(title = "Histogram of Departure Delays",
       x = "Departure Delay (minutes)",
       y = "Frequency")

# Boxplot

ggplot(data = flights, aes(x = as.factor(month), y = arr_delay)) +
  geom_boxplot() +
  labs(title = "Boxplot of Arrival Delays by Month",
       x = "Month",
       y = "Arrival Delay (minutes)")


# Load the dataset
data(flights)

summary(flights)

# Distribution of Flight Distances
ggplot(data = flights, aes(x = distance)) +
  geom_histogram(binwidth = 100, fill = "blue", color = "black") +
  labs(title = "Distribution of Flight Distances",
       x = "Distance (miles)",
       y = "Frequency")

# Departure and Arrival Delays
# Departure Delays
ggplot(data = flights, aes(x = dep_delay)) +
  geom_histogram(binwidth = 10, fill = "red", color = "black") +
  labs(title = "Distribution of Departure Delays",
       x = "Departure Delay (minutes)",
       y = "Frequency")

# Arrival Delays
ggplot(data = flights, aes(x = arr_delay)) +
  geom_histogram(binwidth = 10, fill = "green", color = "black") +
  labs(title = "Distribution of Arrival Delays",
       x = "Arrival Delay (minutes)",
       y = "Frequency")


# Top 10 Airlines by Number of Flights
top_airlines <- flights %>%
  group_by(carrier) %>%
  summarise(count = n()) %>%
  arrange(desc(count)) %>%
  head(10)

ggplot(data = top_airlines, aes(x = reorder(carrier, -count), y = count)) +
  geom_bar(stat = "identity", fill = "purple") +
  labs(title = "Top 10 Airlines by Number of Flights",
       x = "Airline Carrier",
       y = "Number of Flights")

# Number of Flights by Month
flights_by_month <- flights %>%
  group_by(month) %>%
  summarise(count = n())

ggplot(data = flights_by_month, aes(x = as.factor(month), y = count)) +
  geom_bar(stat = "identity", fill = "orange") +
  labs(title = "Number of Flights by Month",
       x = "Month",
       y = "Number of Flights")

# Correlation Between Distance and Arrival Delay

ggplot(data = flights, aes(x = distance, y = arr_delay)) +
  geom_point(alpha = 0.5) +
  labs(title = "Scatter Plot of Distance vs Arrival Delay",
       x = "Distance (miles)",
       y = "Arrival Delay (minutes)")


# Handling Missing Values


# Removing rows with missing values
flights_clean <- na.omit(flights)

# Scatter Plot with Cleaned Data
ggplot(data = flights_clean, aes(x = dep_delay, y = arr_delay)) +
  geom_point(alpha = 0.5) +
  labs(title = "Scatter Plot of Departure Delay vs Arrival Delay",
       x = "Departure Delay (minutes)",
       y = "Arrival Delay (minutes)")

# Handling Out-of-Range Values
# Filtering out extreme outliers
flights_filtered <- flights %>%
  filter(dep_delay >= -60 & dep_delay <= 360, arr_delay >= -60 & arr_delay <= 360)

# Scatter Plot with Filtered Data
ggplot(data = flights_filtered, aes(x = dep_delay, y = arr_delay)) +
  geom_point(alpha = 0.5) +
  labs(title = "Scatter Plot of Departure Delay vs Arrival Delay",
       x = "Departure Delay (minutes)",
       y = "Arrival Delay (minutes)")


