a<-1
a
typeof(a)
b=as.integer(a)
typeof(b)
b


a>b
b<a
a==b
a!=b

d<-4L
typeof(d)
d>b

s<-"siddhraj"
s
typeof(s)

s1<-TRUE
typeof(s1)

c<-2+3i
typeof(c)

a&d
a|d
!a

a+d
a-d
a/d
a%%d
a*d

x <- c(1, 0, 3)
as.logical(x)  


while (TRUE){
  p<-readline(prompt = "enter your password :-")
  if(nchar(p)>=8){
    print("you have entered valid password")
    break
  }
  else if(grepl("\\b\\d+",p)){
    print("you have entered valid password")
    break
  }
  else if(grepl("\\d+\\b\\d+",p)){
    print("you have entered valid password")
    break
  }
  else if(grepl("\\b\\d+\\b",p)){
    print("you have entered valid password")
    break
  }
  else{
    print("entered valid password")
  }
}



















check_string <- function(i_s) {
  c1 <- nchar(i_s) > 8
  
  c2 <- !grepl("[_@*/][0-9][A-Za-z]", i_s)
  
  return(c1 && c2 )
}

input_string <- "abc@123*xyz"
if (check_string(input_string)) {
  print("The string meets all conditions.")
} else {
  print("The string does not meet all conditions.")
}
