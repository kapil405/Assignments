-- Create a view to show all employees along with their department names. 
-- Modify the view to exclude employees whose salaries are below $50,000


create view emp_data as
    select department_name, concat(first_name, " ", last_name) as "employ_name",
    salary
    from employees as a
    left join departments as b
    on a.department_id = b.department_id;

select * from emp_data;

drop view emp_data;


create view emp_data_salary as
    select department_name, concat(first_name, " ", last_name) as "employ_name",
    salary
    from employees as a
    left join departments as b
    on a.department_id = b.department_id
where a.salary >= 50000;

-- for this i will add and employe with salary graterthen 50000

insert into employees(first_name, last_name, salary, department_id)
values("kapil", "bhati", 51000, 5);

select * from emp_data_salary;