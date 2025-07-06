# Load necessary libraries
library(ggplot2)
library(dplyr)

# Load the dataset
movies <- read.csv("D:/siddh/coding/R/Assignment/movies.csv")
head(movies)
summary(movies)
colSums(is.na(movies))

# Convert Release_Period to a categorical variable
movies$Release_Period <- as.factor(movies$Release_Period)
head(movies$Release_Period)
# Summary statistics for revenue and budget
summary(movies$Revenue.INR)
summary(movies$Budget.INR)


# Calculate profit and profit margin
movies$Profit <- movies$Revenue.INR - movies$Budget.INR
movies$Profit_Margin <- (movies$Profit / movies$Budget.INR) * 100
head(movies$Profit_Margin)
# Analyze revenue trends by release period
revenue_trends <- movies %>%
  group_by(Release_Period) %>%
  summarise(Average_Revenue = mean(Revenue.INR., na.rm = TRUE))

# Visualize revenue trends
ggplot(revenue_trends, aes(x = Release_Period, y = Average_Revenue)) +
  geom_bar(stat = "identity", fill = "steelblue") +
  theme_minimal() +
  labs(title = "Average Movie Revenue by Release Period",
       x = "Release Period", y = "Average Revenue (INR)")

# Analyze revenue by genre
genre_trends <- movies %>%
  group_by(Genre) %>%
  summarise(Average_Revenue = mean(Revenue.INR., na.rm = TRUE)) %>%
  arrange(desc(Average_Revenue))

# Visualize revenue by genre
ggplot(genre_trends, aes(x = reorder(Genre, Average_Revenue), y = Average_Revenue)) +
  geom_bar(stat = "identity", fill = "coral") +
  coord_flip() +
  theme_minimal() +
  labs(title = "Average Movie Revenue by Genre",
       x = "Genre", y = "Average Revenue (INR)")

# Conclusion
print("Conclusion: The analysis suggests that movies released in certain periods tend to generate higher revenue.
    Similarly, some genres outperform others in revenue generation. 
    This insight can help producers optimize release strategies and genre selection.")
