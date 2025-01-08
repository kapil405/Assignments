truncate table employees;

insert into employees 
values(100,'Steven','King','1987-7-17',24000,null,null,90),
		(101,'Neena','Kochhar','1989-9-21',17000,null,100,90),
        (102,'Lex','De Haan','1993-1-13',17000,null,100,90),
        (103,'Alexander','Hunold','1990-1-3',9000,null,102,60),
        (104,'Bruce','Ernst','1991-5-21',6000,null,103,60),
        (107,'Diana','Lorentz','1999-2-7',4200,null,103,60),
        (124,'Kevin','Mourgos','1999-11-16',5800,null,100,50),
        (141,'Trenna','Rajs','1995-10-17',3500,null,124,50),
        (142,'Curtis','Davies','1997-1-29',3100,null,124,50),
        (143,'Randall','Matos','1998-3-15',2600,null,124,50),
        (144,'Peter','Vargas','1998-7-9',2500,null,124,50),
        (149,'Eleni','Zlotkey','2000-1-29',10500,0.2,100,80),
        (174,'Ellen','Abel','1996-5-11',11000,0.4,149,80),
        (176,'Jonathon','Taylor','1998-3-24',8600,0.5,149,80),
        (178,'Kimerely','Grant','1999-5-24',7000,0.1,149,null),
        (200,'Jennifer','Whalen','1987-9-17',4400,null,101,10),
        (201,'Michale','Hartstein','1996-2-17',13000,null,100,20),
        (202,'Pat','Fay','1997-8-17',6000,null,201,20),
        (205,'Shelly','Higgins','1994-6-7',12000,null,101,110),
        (206,'William','Gietz','1994-6-7',8300,null,205,110);
        

-- DESPLAY ALL DATA OF EMPLOYEES TABLE
select * from employees;

-- DISPLAY FIR_NAME OF EMPLOYEES TABLE
select first_name from employees;

-- DISPLAY FIRST_NAME , SALARY AND NEW SALARY (NEW SALARY = SALARY + 1500)
select first_name, salary, salary+1500 as new_salary from employees;

-- DISPLAY FIRST_NAME, SALARY AND ANNUAL_SALARY (ANNUAL SALARY = SALARY * 12)
select last_name, salary, salary * 12 as annual_salary from employees;

-- DISPLAY FIRST_NAME AND LAST_NAME IN SINGLE COLUMN WITH PROPER COLUMN ALIAS/ HEADING
select concat(first_name," ",last_name) as full_name from employees; 

-- DISPLAY FIRST_NAME, SALARY AND DAILY SALARY (DAILY SALARY = SALARY / 30)
select first_name, salary, salary / 30 as daily_salary from employees;

-- DISPLAY GIVEN RESULT FOR EACH EMPOYEE : KING'S MONTHLY SALARY IS RS 24000
select last_name, salary as monthly_salary from employees where last_name = "king";

select * from employees;

select employee_id,first_name, last_name, salary * 12 as annual_salary from employees;

select first_name, salary * 12 as annual_salary, (salary + 1000) * 12 as new_annual_salary from employees;

select * from employees where manager_id in (100,124,149) order by manager_id;

select * from employees where department_id in (90,110,10) order by department_id;

select * from employees where manager_id not in(124,149,100) order by manager_id;

select * from employees where (department_id,manager_id) not in ((60,103), (80, 149), (110, 101));















