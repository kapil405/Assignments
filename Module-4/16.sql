
-- Write a PL/SQL block to print the total number of employees from the employees table. 
-- Create a PL/SQL block that calculates the total sales from an orders table.


create table employees
(
employee_id int unique not null,
first_name varchar(25) not null,
last_name varchar(25) not null,
hire_date date,
salary int not null,
department_id int not null
);

-- iam using date type for hire_date column so iam specify what kind of date i am entering

insert into employees
values(100, 'steven', 'king', TO_DATE('2023-01-03', 'YYYY-MM-DD'), 25000, 90);

insert into employees
values(101, 'john', 'smith', TO_DATE('2023-07-04', 'YYYY-MM-DD'), 15000, 90);

insert into employees
values(102, 'lina', 'abini', TO_DATE('2024-06-23', 'YYYY-MM-DD'), 19000, 90);

insert into employees
values(103, 'raman', 'pahadiya', TO_DATE('2024-03-17', 'YYYY-MM-DD'), 22000, 100);

insert into employees
values(104, 'alex', 'spenser', TO_DATE('2022-02-27', 'YYYY-MM-DD'), 27000, 100);

insert into employees
values(105, 'selena', 'han', TO_DATE('2022-02-27', 'YYYY-MM-DD'), 21000, 60);



declare
emp_number number :=0;
begin
	select count(*) into emp_number from employees;
	dbms_output.put_line('total employees is : '||emp_number);
end;


create table orders(
    order_id int not null,
    order_amount int not null,
    order_date varchar(25)
);

insert into orders
values(1,150,'2024-07-02');

insert into orders
values(2,350,'2024-08-05');

insert into orders
values(3,500,'2024-08-11');

insert into orders
values(4,345,'2024-08-27');

select * from orders;

declare
total number := 0;
begin
	select sum(order_amount) into total from orders;
	dbms_output.put_line('Total order sales is : '||total);
end;