print("hello world")

d<-5#bydefault 5.0
print(d)
print(typeof(d))

a1<-6L
print(typeof(a1))
print(a1)

#convert to integer
a2<-as.integer(d)
a2
typeof(a2)

#operators in R
vec1<-c(0,2)
vec2<-c(2,3)

vec1
vec2

#performing operations on operands
cat("addition",vec1+vec2,"\n")
cat("subtraction",vec1-vec2,"\n")
cat("multiplication",vec1*vec2,"\n")
cat("division",vec1/vec2,"\n")
cat("modulo",vec1%%vec2,"\n")
cat("power operator",vec1^vec2)

x<-7+3i
x
typeof(x)
#logical operators
#any non-zero value considered as a TRUE,be it a complex or real number.
vec1<-c(0,2)
vec2<-c(TRUE,FALSE)

#performing operations on operands
cat("element wise AND",vec1 & vec2,"\n")
cat("element wise OR",vec1 | vec2,"\n")
cat("logical AND",vec1[1] && vec2[1],"\n")
cat("logical OR",vec1[1] || vec2[1],"\n")
cat("negation",!vec1)

#realtional operators
#returns a boolean true if the operand satisfies the relation
#a TRUE( value is always considered to be greater than false
vec1<-c(0,2)
vec2<-c(2,3)

#performing operations on operands
cat("vec1 less than vec2",vec1<vec2,"\n")
cat("vec1 less than equal to vec2",vec1<=vec2,"\n")
cat("vec1 greater than vec2",vec1>vec2,"\n")
cat("vec1 greater than equal to vec2",vec1>=vec2,"\n")
cat("vec1 not equal to vec2",vec1!=vec2,"\n")

if(FALSE)
  {
    "nomenclature of R variables
    the following rules need to be kept in mind while naming a R variable:
    A valid variable name consists of a combination of alphabets,numbers,dot(.), 
    and underscore(_) characters.
    example: var.1_is valid
    var$ or var#1 both are valid
    .var or var is valid
    variable should not start with numbers or underscore
    2var or _var is not valid
    .3var isnot valid.
    varible name should not be reserved keyword.
    example : TRUE,FALSE,etc."
}

#dynamic scoping :- lisp
#lexical scoping(static scoping) :- python,java,R

#input and output
val_1<-readline(prompt = "enter a number")
print(val_1)
val_1=as.integer(val_1) 
val_1

val_2<-scan()
cat(val_2/10)

if(val_1>10){
  paste(val_1,"is greater than 10")
}else{
  paste("oops")
}

a<-10
b<-20
c<-"absd"
d<-"qwerty"
print(a)
paste(val_1,val_2)
paste0("c","d")
cat(a/b)

#paste(): Concatenates strings with a specified separator (default is a space). 
paste_example <- paste("Hello", "World", sep = "-") 
# paste0(): Concatenates strings without any separator. 
paste0_example <- paste0("Hello", "World") 
# print(): Prints output with a newline, often used for debugging. 
print_example <- print("Hello World") 
# cat(): Concatenates and outputs strings without quotes and no newline by default. 
cat_example <- cat("Hello", "World", "\n") 
cat("paste() example:", paste_example, "\n") 
cat("paste0() example:", paste0_example, "\n") 
cat("print() example:\n") 
print(print_example) 
cat("cat() example:") 
cat(cat_example)

a1<-readline()
a1=as.integer(a1)
if(a1 %% 2==0){
  sprintf("%d is even",a1)  
}else{
  sprintf("%d is odd",a1)
}

#vector creation
c1<-c('hello','world')
c4<-'hello world'
typeof(c1)
c2<-readline(prompt="enter:- ")
c3<-c(c2)
c3

c1==c4

cat("you are attending 'rprograming' classes")

m<-c("jan","feb","mar","apr","may")
m[2]
m[c(1,3)]
m[1:3]
m[c(1,3,4)]

m[c(TRUE,FALSE,TRUE,FALSE,TRUE)]

m[c(-4,-1)]
m[c(2,-1)]

#vector are mutable
m[1]<-"hello"
m

num<-c(1,2,3,4,5,6)
num

num[num<=2]

num[num^2-num+1>=2]

n=c(f="m",l="s")
n
names(n)
n["f"]

vec<-21:25
vec

names(vec)<-c('sum1','num1','dum1','rum1','lum1')

length(vec)

names(vec)

vec["sum1"]

vec[c('num1','rum1','lum1')]

vec[3]
vec[c(2,4)]
vec[3:5]

vec[-2]
vec[c(-3,-4)]
vec[c(3,4,5,1,5)]

vec[c('lum1','num1','sum1','dum1','rum1')]
#arrange vector in reverse order based on position
rev(vec)
#replace the name of few elements
names(vec)[c(2,4)]<-c('Lion','Tiger')
vec

vec[c(3,5)]<-c(42,11)
vec

vec[order(vec,decreasing=FALSE)]

vec[order(vec,decreasing=TRUE)]

vec[sort(names(vec))]

vec[sort(names(vec),decreasing = TRUE)]

#replace values woth missing values
vec[c(2,4)]<-NA
vec

table(is.na(vec))

x<-c(a=1,b=1,c=3,d=4,e=5)
x["a"]
x[["a"]]

names(x)

#double square bracket can only extract one element
x["b"]
x[["b"]]

x[1]
x[[1]]

#cannot choose negative index in square bracket

#class
#we can use class() function to know about the class of any function
class(c(1,2,3))

as.numeric(c('1','2','3'))
as.numeric(c('1','2','3','a'))

#any non zero false
as.logical(c(-1,0,1,2))

#using grepl
my_string <- "Hello, welcome to R programming!"

# Check if the string contains the substring "welcome"
if (grepl("welcome", my_string)) {
  print("The substring 'welcome' is found!")
} else {
  print("The substring 'welcome' is NOT found.")
}

# using grep
my_string <- "Learning R is fun!"

# Check if the substring "R" exists
if (length(grep("R", my_string)) > 0) {
  print("The substring 'R' is found!")
} else {
  print("The substring 'R' is NOT found.")
}

#creating matrix
a=matrix(c(1,3,2,4,6,7),nrow=2,ncol=3)
a

a1=matrix(c(1,3,2,4,6,7))
a1

#insertion byrow 
a2=matrix(c(1,3,2,4,6,7),nrow=2,ncol=3,byrow = TRUE)
a2

diag(1,nrow=5)

#giving row and columns names
a3=matrix(c(1,2,3,4,5,6), nrow = 3, byrow = TRUE,dimnames = list(c('r1','r2','r3'),c('c1','c2')))
a3

#rownames()

a2[1,2]
a2[1:2,1:2]

a4=matrix(c(1:21),nrow = 7,ncol = 3)
a4[2:3,1]
a4

a4[1:2,1]
a4[2,]
a4[,-1]
a4[-1,]

#a4[c('r1','r2','r3','r4','r5','r6'),c('c1','c2','c3')]

a4[1]
a4[5]
a4[1:9]

a4+a4

a4-a4*0.5

a4*a4

x=matrix(c(1,3,5,2,4,6),nrow=3,ncol = 2)
x

x1=(c(1,2,3,4,5,6))
x1+x

x2=matrix(c(1,2,3,4),nrow=2,ncol = 2)
x3=matrix(c(5,6,7,8),nrow=2,ncol = 2)
#element wise
x2*x3
#traditional
x2%*%x3

#transpose of matrix
t(x)


# Create a data frame
s<- data.frame(
  Name = c("Alice", "Bob", "Charlie"),
  Age = c(20, 22, 19),
  Grade = c("A", "B", "A"),
  Passed = c(TRUE, TRUE, FALSE)
)

# Display the data frame
print(s)
s$Name
s$Age
s[1]
s[1,]
s[1,2]
s1<-rbind(s,c("t",25,"C",TRUE))
dim(s1)

s2<-cbind(s1,marks=c(95,85,86,80))
dim(s2)

s3<-s2[-c(5)]
dim(s3)
ncol(s)
length(s)
nrow(s)
s4<-cbind(s3,s1)
s4
summary(s)

c<- data.frame(
  Name = c("Alice", "Bob", "Charlie"),
  Age = c(20, NA, 19),
  Grade = c("A", "B", "A"),
  Passed = c(TRUE, TRUE, FALSE)
)
c
is.na(c$Age)
c$Age[is.na(c$Age)] <- mean(c$Age , na.rm = TRUE)
c
print(mean(c$Age))
median(c$Age)
get_mode(c$Grade)
c$Age[3]<-300
c
c$H<-c(1,2,3)
c