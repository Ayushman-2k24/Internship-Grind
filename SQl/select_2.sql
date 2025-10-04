SELECT * FROM parks_and_recreation.employee_demographics;

SELECT AGE,
(AGE+10)*10,
EMPLOYEE_ID ,
FIRST_NAME 
FROM parks_and_recreation.employee_demographics;
#PEMDAS => PARENTHESIS MUL DIV ADD SUB 

SELECT distinct gender,first_name FROM employee_demographics;
#HERE THE DISTINCT IS CALCULATED ON THE BASIS OF BOTH F_NAME,GENDER ARE NAMES ARE DISTINCT AND 
#COMB OF THEM IS ALSO A DISTINCT
