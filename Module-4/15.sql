
-- Create a trigger to automatically log changes to the employees table when a new employee is added. 
-- Create a trigger to update the last_modified timestamp whenever an employee record is updated. 

alter table employees add column 
operation_type varchar(50),
add column change_log datetime;
-- added columns for  changelog and operationtype to track the changes
 

create trigger add_data
before insert on school_db.employees
for each row
set new.operation_type = "insert", new.change_log = now();

insert into employees(first_name, last_name, salary, department_id)
values  ("sohan", "radhe", 55000, 5);

select * from employees;


-- --------------------------------

create trigger update_data
before update on school_db.employees
for each row
set new.operation_type = "update", new.change_log = now();


update employees set salary = 240000 where employee_id = 103;

select * from employees;