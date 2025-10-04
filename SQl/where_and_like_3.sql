select * from employee_salary;

select first_name ,salary from employee_salary where salary>=50000;

select * from employee_demographics ;
select * from employee_demographics where gender='male';

select * from employee_demographics where birth_date > '1985-01-01';

-- & means anything 
select * from employee_demographics where first_name like 'a%';

-- _ means specific 
select * from employee_demographics where first_name like 'a__';

select * from employee_demographics where first_name like 'a___';
