install.packages(c("tidyverse", "lubridate", "skimr", "ggplot2"))

library(tidyverse)
library(lubridate)
library(skimr)
library(ggplot2)

data <- read.csv("D:/siddh/coding/R/data/23AIML070 THAKOR SIDDHRAJ ANILKUMAR - sales_data.csv")  # Replace with the correct path to your dataset
summary(data)
head(data)
data$Sale_Date <- as.Date(data$Sale_Date, format = "%Y-%m-%d")

data$Year <- year(data$Sale_Date)
data$Month <- month(data$Sale_Date, label = TRUE)
data$Weekday <- weekdays(data$Sale_Date)
head(data)
summary(data %>% select(Sales_Amount, Quantity_Sold, Unit_Cost, Unit_Price, Discount))

print("Missing values per column:")
print(colSums(is.na(data)))

print("Number of duplicate rows:")
print(sum(duplicated(data)))

skim(data)

# Bar plot showing Sales Amount by Region
# This graph displays the total sales amount for each region. It helps to identify which regions are generating the most revenue.
ggplot(data, aes(x = Region, y = Sales_Amount, fill = Region)) +
  geom_bar(stat = "identity", show.legend = FALSE) +
  labs(title = "Sales Amount by Region", x = "Region", y = "Sales Amount") +
  theme_minimal()

# Line plot showing Sales Amount Trend Over Time
# This graph shows the trend of sales amount over time. It helps to identify any seasonal patterns or trends in sales.
ggplot(data, aes(x = Sale_Date, y = Sales_Amount)) +
  geom_line() +
  labs(title = "Sales Amount Trend Over Time", x = "Date", y = "Sales Amount") +
  theme_minimal()

# Bar plot showing Sales by Product Category
# This graph displays the total sales amount for each product category. It helps to identify which product categories are the most popular.
ggplot(data, aes(x = Product_Category, y = Sales_Amount, fill = Product_Category)) +
  geom_bar(stat = "identity", show.legend = FALSE) +
  labs(title = "Sales by Product Category", x = "Product Category", y = "Sales Amount") +
  theme_minimal()

# Box plot showing Discount by Customer Type
# This graph shows the distribution of discounts given to different customer types. It helps to identify if certain customer types are receiving higher discounts.
ggplot(data, aes(x = Customer_Type, y = Discount, fill = Customer_Type)) +
  geom_boxplot() +
  labs(title = "Discount by Customer Type", x = "Customer Type", y = "Discount") +
  theme_minimal()

cor_matrix <- data %>%
  select(Sales_Amount, Quantity_Sold, Unit_Cost, Unit_Price, Discount) %>%
  cor()

print("Correlation Matrix:")
print(cor_matrix)

# Bar plot showing Sales Amount by Payment Method
# This graph displays the total sales amount for each payment method. It helps to identify which payment methods are most commonly used by customers.
ggplot(data, aes(x = Payment_Method, y = Sales_Amount, fill = Payment_Method)) +
  geom_bar(stat = "identity", show.legend = FALSE) +
  labs(title = "Sales Amount by Payment Method", x = "Payment Method", y = "Sales Amount") +
  theme_minimal()

sales_by_region_rep <- data %>%
  group_by(Region, Sales_Rep) %>%
  summarise(total_sales = sum(Sales_Amount, na.rm = TRUE))

print("Total Sales by Region and Sales Rep:")
print(sales_by_region_rep)

avg_sales_by_category <- data %>%
  group_by(Product_Category) %>%
  summarise(avg_sales = mean(Sales_Amount, na.rm = TRUE))

print("Average Sales by Product Category:")
print(avg_sales_by_category)

# Box plot showing Outliers in Sales Amount
# This graph shows the distribution of sales amounts and highlights any outliers. It helps to identify any unusually high or low sales amounts.
ggplot(data, aes(x = "", y = Sales_Amount)) +
  geom_boxplot() +
  labs(title = "Outliers in Sales Amount", y = "Sales Amount") +
  theme_minimal()

